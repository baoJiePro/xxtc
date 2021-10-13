//
// Created by baojie on 2021/10/12.
// 2.文件的读。
#include <stdio.h>
#include <stdlib.h>

int mainT53(){

    char * fileNameStr = "D:\\android_project\\my_project\\ndk_project\\xxtc\\cproject\\one\\demo.py";

    // fopen打开文件的意思（参数1：文件路径 文件源，  参数2：模式 r(读) w(写)  rb(作为二进制文件读) rw(作为二进制文件写)  返回值 FILE 结构体）
    // FILE * fopen (const char *, const char *);
    FILE * file = fopen(fileNameStr, "r");
    if(!file){
        printf("文件打开失败，请你个货检测：路径为%s路径的文件，看看有什么问题\n", fileNameStr);
        exit(0); // 退出程序
    }

    // 先定义缓存区域 (容器)
    char buffer[10];

    // 1.缓冲区buffer， 2：长度10， 3:文件指针变量
    while (fgets(buffer, 10, file)){
        printf("%s", buffer);
    }

    fclose(file);

    return 0;
}
