//文件大小获取
// Created by baojie on 2021/10/14.
//
#include <stdio.h>
#include <stdlib.h> // 文件的操作，是在这个头文件里面的
#include <string.h>

int mainT56(){

    char * fileNameStr = "D:\\android_project\\my_project\\ndk_project\\xxtc\\cproject\\one\\name.txt";
    FILE * file = fopen(fileNameStr, "rb");
    if (!file) {
        printf("文件打开失败，请你个货检测：路径为%s路径的文件，看看有什么问题\n", fileNameStr);
        exit(0); // 退出程序
    }

    // SEEK_SET（开头）  SEEK_CUR（当前）  SEEK_END（结尾）
    fseek(file, 0, SEEK_END);

    // 读取   刚刚给file赋值的记录信息
    // 其实此函数目的是：计算偏移的位置,ftell 从 0 开始统计到当前（SEEK_END）,汉字占3个字节？
    long file_size = ftell(file);
    printf("%s文件的字节大小是%ld\n", fileNameStr, file_size);

    fclose(file);

    return 0;
}
