//
// Created by 鲍杰 on 2021/10/10.
//
#include <stdio.h>

int mainT32(){

    char str[] = {'D', 'e', 'r', 'r', 'y', '\0'};
    str[2] = 'z';
    // printf 必须遇到 \0 才结束
    printf("第一种方式：%s\n", str);

    // 隐士  Derry+\0
    char * str2 = "derry";
    str2[2] = 'z';
    printf("第二种方式：%s\n", str2);

    return 0;
}
