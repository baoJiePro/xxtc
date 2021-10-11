//
// Created by 鲍杰 on 2021/10/7.
//

#include <stdio.h>

int mainT3(){

    // 基本类型占用的字节数(后续过程中，非常常用的)  sizeof获取字节数

    // int 占几个字节  == 4
    // double 占几个字节 == 8
    // char 占几个字节 == 1
    printf("int 数据类型所占的字节数：%d\n", sizeof(int));
    printf("double 数据类型所占的字节数：%d\n", sizeof(double));
    printf("char 数据类型所占的字节数：%d\n", sizeof(char ));

    return NULL;
}