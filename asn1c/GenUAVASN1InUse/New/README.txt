使用方式：
gen_asn1_codec.sh uav_rrc.asn1

注意：当前目录中必须存在MergeASN1cHeaderFiles.py和asn1c
生成的文件为：SON-RRC-Definitions.c和SON-RRC-Definitions.h
若生成的SON-RRC-Definitions.c文件过大，可以自行分割为多个文件，目前C/C++项目中行号不能超过65535行。
