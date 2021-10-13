// 3.结构体指针 与 动态内存开辟。
// Created by baojie on 2021/10/12.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Cat2{
    char name[10];
    int age;
};

int mainT46(){

    struct Cat2 * cat2 = malloc(sizeof(struct Cat2));

    strcpy(cat2->name, "金色猫");
    cat2->age = 10;

    printf("name:%s, age:%d \n", cat2->name, cat2->age);
    free(cat2);
    cat2 = NULL;

    return 0;
}
