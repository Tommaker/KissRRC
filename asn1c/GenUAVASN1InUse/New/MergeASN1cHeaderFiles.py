#coding=utf-8
import os
import re
import sys

# 指定目录
h_dir_path = './AllHdrFiles'

# 将所有的头文件名称先写入到这个文件中，后续逐一展开
all_hdr_file_name = 'All_h_files.txt'

# Used to merge rrc header files.
# Set the input and output file names
genereted_file_module = "SON-RRC-Definitions"
# 最终合成所生成的头文件-> 根据不同的项目生成
output_file = "SON-RRC-Definitions.h"
# 多个头文件所在的目录位置
# header_location = r"E:\GitCode\UAV_ASN1\AllUAV"
# 生成out_file所在的位置
target_path = r"."
# 指定要遍历的目录和输出文件名称

# Used to merge lpp header files.
# input_file = "LPPAllHeaders.h"
# output_file = "LPP-PDU-Definitions.h"
# header_location = "LPPHeaderFolder"


# 根据asn.1描述文件，获取DEFINITIONS AUTOMATIC TAGS前的文件名称
def get_asn1_definition_name(asn1_file_name):

    # 读取 uav.asn1 文件
    with open(asn1_file_name, 'r') as f:
        content = f.read()

    # 匹配目标行
    pattern = r'(.*) DEFINITIONS AUTOMATIC TAGS ::='
    match = re.search(pattern, content)

    # 获取匹配结果
    if match:
        prefix = match.group(1).strip()
        print(prefix)
        return prefix
    else:
        print('未找到匹配结果')
        return None


def abstract_all_hdr_file_name(h_dir_path, all_hdr_file_name):
    # 获取目录中的所有 .h 文件
    h_files = [f for f in os.listdir(h_dir_path) if f.endswith('.h')]

    # 写入文件名到输出文件
    with open(all_hdr_file_name, 'w') as f:
        for file in h_files:
            f.write(file + '\n')

    print('写入完成！')


def list_h_files(directory, output_file):
    # 打开输出文件，以写入模式
    with open(output_file, 'w') as f:
        # 遍历指定目录及其子目录
        for root, dirs, files in os.walk(directory):
            # 遍历文件列表
            for file in files:
                # 如果文件以 .h 结尾
                if file.endswith('.h'):
                    if file != output_file:
                        print(f"Write Hdr file name:{file}, out_file:{output_file}")
                        # 写入文件名到输出文件
                        f.write(file + '\n')


# Set to keep track of expanded header files
expanded_headers = set()

# Function to expand header files recursively
def expand_header(header_file):
    global expanded_headers

    # Check if header file has already been expanded
    if header_file in expanded_headers:
        return ""
    else:
        # Add header file to set of expanded headers
        expanded_headers.add(header_file)
        print(f"Add header file to expanded list: {header_file}")


    # Check if header file exists
    if not os.path.isfile(header_file):
        print(f"{header_file} Not exist!")
        return ""

    print(f"Start output {header_file}")
    # Open the header file and read its contents
    with open(header_file, "r") as f_header:
        header_text = f_header.read()

        # Find all #include statements in the header text
        include_regex = r'#include\s*\"(.+\.h)\"'
        matches = re.findall(include_regex, header_text)

        # Recursively expand any included header files
        for match in matches:
            included_header = match
            included_text = expand_header(included_header)
            header_text = header_text.replace("#include \"{}\"".format(included_header), included_text)

        # Remove all lines containing #ifdef, #define, and #endif
        header_text = re.sub(r'^.*#(ifndef|ifdef|define|endif).*\n?', '', header_text, flags=re.MULTILINE)
        header_text = re.sub(r'\n\s*\n', '\n\n', header_text, flags=re.MULTILINE)

        print(f"End output {header_file}")
        # Return the expanded header text
        # return "\n/* Start Definition of {}  */\n\n".format(header_file) + header_text + "/* End Definition of {} */\n".format(header_file)
        return header_text


def generate_header_guard(file_name):
    if file_name is None:
        print("ERROR:output file is not specific.")
    if file_name == "":
        print("ERROR:output file is empty.")

    name_no_sufix = file_name.split('.')[0]
    guard_name = name_no_sufix.upper()
    return guard_name.replace('-', '_')


def main():
    os.chdir(target_path)
    for i, arg in enumerate(sys.argv):
        print(f"input param{i}: {arg}")

    asn1_def_name = get_asn1_definition_name(sys.argv[1])

    # 如果获取到了asn.1文件中的定义名称
    if (asn1_def_name is not None):
        genereted_file_module = asn1_def_name
        output_file = asn1_def_name + ".h"

    if os.path.exists(output_file):
        print(f"{output_file} already exist, delete it.")
        os.remove(output_file)

    # 若输入了目标的目录名称
    if 3 == len(sys.argv):
        print(f"Input h_dir_path:{sys.argv[2]}");
        h_dir_path = sys.argv[2];

    # 将指定目录中的所有.h文件名称写入到指定文件名
    abstract_all_hdr_file_name(h_dir_path, all_hdr_file_name)

    # 获取指定目录是的所有.h文件，并将文件名称写入all_hdr_file_name文件中
    list_h_files(h_dir_path, all_hdr_file_name)


    # Open the input and output files
    with open(all_hdr_file_name, "r") as f_in, open(output_file, "w") as f_out:
        current_workspace = os.getcwd()
        # Read the entire input file
        input_text = f_in.read()

        # Find all #include statements in the input text
        include_regex = r'\s*(.+\.h)'
        matches = re.findall(include_regex, input_text)

        # provided input file contain include file, output the preamble of outputfile.
        if len(matches) > 0:
            # 1. Add preamble
            preamble = "/*\n * Generated by ESWINCOMPUTING easn1c \n * And merged all header files by HeaderFileAllInOne.py.\n*/\n\n"
            f_out.write(preamble)

            # 2. Add header guard
            guard_name = generate_header_guard(output_file)
            header_guard = f"#ifndef\t_{guard_name}_H_\n#define\t_{guard_name}_H_\n\n"
            f_out.write(header_guard)

            include_header = "#include \"asn1c_support_lib.h\"\n\n"
            f_out.write(include_header)

            # Add extern "C" wrapper
            wrapper_start = "\n#ifdef __cplusplus\nextern \"C\" {\n#endif\n"
            f_out.write(wrapper_start)


        # Write the original input text to the output file
        # f_out.write(input_text)

        cwd_path = os.getcwd()
        os.chdir(h_dir_path)

        # For each match, expand the corresponding header file and write it to the output file
        for match in matches:
            header_file = match
            print(f"expand header file:{header_file}")
            expanded_text = expand_header(header_file)
            if not expanded_text:
                input_text = input_text.replace("#include \"{}\"".format(header_file), "")
            else:
                input_text = input_text.replace("#include \"{}\"".format(header_file), expanded_text)
                f_out.write(expanded_text)

        # Add extern "C" wrapper end
        wrapper_end = "\n#ifdef __cplusplus\n} // end of #ifdef __cplusplus\n#endif\n"
        f_out.write(wrapper_end)

        # Add guard matched guard end.
        f_out.write(f"\n#endif // end of #ifdef {guard_name}")

        # Remove all lines containing #ifdef, #define, and #endif
        #input_text = re.sub(r'^.*#(ifdef|define|endif).*\n?', '', input_text, flags=re.MULTILINE)

        # Write the final expanded input text (with #ifdef, #define, and #endif lines removed) to the output file
        #f_out.write(input_text)
        os.chdir(cwd_path);
        #h_copy_cmd = f"cp ./{h_dir_path}/{genereted_file_module}.h {genereted_file_module}.h"
        #os.system(h_copy_cmd)

        c_copy_cmd = f"cp ./{h_dir_path}/{genereted_file_module}.c {genereted_file_module}.c"
        os.system(c_copy_cmd)

        if os.path.exists(all_hdr_file_name):
            os.remove(all_hdr_file_name)

if __name__ == '__main__':
    main()

