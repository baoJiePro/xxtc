// 4.�ṹ������顣
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
            {"С��", 1},
            {"С��", 2},
            {"С��", 3},
            {},
            {},
            {},
            {},
            {},
            {},
            {},
    };

    struct Cat3 cat9 = {"С��", 9};
    *(cat + 9) = cat9;

    printf("name:%s, age:%d \n", cat[9].name, cat[9].age);


    struct Cat3 *cat2 = malloc(sizeof(struct Cat3) * 10);

    strcpy(cat2->name, "С��è000");
    cat2->age = 9;
    printf("name:%s, age:%d \n", cat2->name, cat2->age);

    // ��8Ԫ�ص�ַ�Ĳ����� ���ڰ˸�Ԫ�ظ�ֵ
    cat2 += 7;
    strcpy(cat2->name, "С��è888");
    cat2->age = 88;
    printf("name:%s, age:%d \n", cat2->name, cat2->age);
    free(cat2);
    cat2 = NULL;

    return 0;
}


