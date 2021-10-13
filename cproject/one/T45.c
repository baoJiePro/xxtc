// 3.结构体指针 与 动态内存开辟。
// Created by baojie on 2021/10/12.
//
#include <stdio.h>
#include <string.h>

struct Cat{
    char name[10];
    int age;
};

int mainT45(){

    // 结构体
    struct Cat cat = {"小花猫", 2};

    // 结构体 指针    -> 调用一级指针成员
    // VS的写法：Cat * catp = &cat;
    struct Cat * catP = &cat;
    catP->age = 3;
    strcpy(catP->name, "小花猫2");
    printf("name:%s, age:%d\n", catP->name, catP->age);

    return 0;
}
