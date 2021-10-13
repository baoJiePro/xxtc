// 4.文件的复制。
// Created by baojie on 2021/10/13.
//

#include <stdio.h>
#include <stdlib.h>

// 二进制文件来复制 rb rw
int mainT55(){
    // https://en.cppreference.com/w/c/io

    char * fileNameStr = "D:\\android_project\\my_project\\ndk_project\\xxtc\\cproject\\one\\name.txt";
    char * fileNameStrCopy = "D:\\android_project\\my_project\\ndk_project\\xxtc\\cproject\\one\\nameCopy.txt";

    FILE * file = fopen(fileNameStr, "rb");
    FILE * fileCopy = fopen(fileNameStrCopy, "wb");
    if (!file || !fileCopy) {
        printf("文件打开失败，请你个货检测：路径为%s路径的文件，看看有什么问题\n", fileNameStr);
        exit(0); // 退出程序
    }

    int buffer[512];
    // 每次读取的长度
    int len;
    // fread：参数1：容器buffer， 参数2：每次偏移多少 int， 参数3：容器大小 写个2048，等下文件就报废了，读取中文就有问题最后一个字
    // sizeof(buffer) / sizeof(int) 等价与 514
    while ((len = fread(buffer, sizeof(int), 512, file)) != 0){
        fwrite(buffer, sizeof(int), len, fileCopy);
    }

    fclose(file);
    fclose(fileCopy);

    return 0;
}