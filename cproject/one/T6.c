//
// Created by 鲍杰 on 2021/10/7.
//
#include <stdio.h>

int mainT6(){

    int i = 100;

    int * p = &i;

    i = 200;

    printf("i的值是:%d\n", i);

    *p = 300;
    printf("i的值是:%d\n", i);

    return 0;
}
