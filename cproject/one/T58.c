// TODO 【文件的解密】
// Created by baojie on 2021/10/14.
//
#include <stdio.h>
#include <stdlib.h> // 文件的操作，是在这个头文件里面的
#include <string.h>

int mainT58(){

    char * fileNameStr = "D:\\android_project\\my_project\\ndk_project\\xxtc\\cproject\\one\\imageEncode.jpg";
    char * fileNameStrDecode = "D:\\android_project\\my_project\\ndk_project\\xxtc\\cproject\\one\\imageDecode.jpg";

    FILE * file = fopen(fileNameStr, "rb");
    FILE * fileDecode = fopen(fileNameStrDecode, "wb");
    if (!file || !fileDecode) {
        printf("文件打开失败，请你个货检测：路径为%s路径的文件，看看有什么问题\n", fileNameStr);
        exit(0); // 退出程序
    }

    int c;

    while ((c = fgetc(file)) != EOF){
        fputc(c ^ 5, fileDecode);
    }

    fclose(file);
    fclose(fileDecode);


    return 0;
}

