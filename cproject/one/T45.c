// 3.�ṹ��ָ�� �� ��̬�ڴ濪�١�
// Created by baojie on 2021/10/12.
//
#include <stdio.h>
#include <string.h>

struct Cat{
    char name[10];
    int age;
};

int mainT45(){

    // �ṹ��
    struct Cat cat = {"С��è", 2};

    // �ṹ�� ָ��    -> ����һ��ָ���Ա
    // VS��д����Cat * catp = &cat;
    struct Cat * catP = &cat;
    catP->age = 3;
    strcpy(catP->name, "С��è2");
    printf("name:%s, age:%d\n", catP->name, catP->age);

    return 0;
}
