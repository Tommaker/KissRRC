#!/bin/bash
# 用法：./gen_asn1_codec.sh xxxx.asn1, 同一级目录必须要有asn1c可执行文件和MergeASN1cHeaderFiles.py

# 定义变量 DIR_NAME
DIR_NAME="AllHdrFiles"
ASN1C_PROGRAM="asn1c"

# 创建新目录 $DIR_NAME，若存在则删除后再创建
if [ -d "$DIR_NAME" ]; then
  rm -rf "$DIR_NAME"
fi
mkdir "$DIR_NAME"

# 将当前目录中的 asn1c 和 param1.asn1 拷贝到新目录 $DIR_NAME 中
cp "$ASN1C_PROGRAM" AllHdrFiles/
cp $1 AllHdrFiles/

# 执行命令 ls -al
cd "$DIR_NAME"
./"$ASN1C_PROGRAM" -Wdebug-compiler -fcompound-names -fincludes-quoted -fno-include-deps -gen-PER -pdu=auto $1

cd ../
python3 MergeASN1cHeaderFiles.py $1 "$DIR_NAME"
