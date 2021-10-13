// 4.结构体的数组。
// Created by baojie on 2021/10/12.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Cat3 {
    char name[10];
    int age;
};

int mainT47() {

    struct Cat3 cat[10] = {
            {"小黄", 1},
            {"小白", 2},
            {"小黑", 3},
            {},
            {},
            {},
            {},
            {},
            {},
            {},
    };

    struct Cat3 cat9 = {"小黑", 9};
    *(cat + 9) = cat9;

    printf("name:%s, age:%d \n", cat[9].name, cat[9].age);


    struct Cat3 *cat2 = malloc(sizeof(struct Cat3) * 10);

    strcpy(cat2->name, "小花猫000");
    cat2->age = 9;
    printf("name:%s, age:%d \n", cat2->name, cat2->age);

    // 【8元素地址的操作】 给第八个元素赋值
    cat2 += 7;
    strcpy(cat2->name, "小花猫888");
    cat2->age = 88;
    printf("name:%s, age:%d \n", cat2->name, cat2->age);
    free(cat2);
    cat2 = NULL;

    return 0;
}


