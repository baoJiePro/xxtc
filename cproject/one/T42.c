//
// Created by 鲍杰 on 2021/10/11.
//

// 2.结构体定义与使用。  第一种写法

// Java/Kotlin是不是有类的概念，C语言  函数  结构体（相当于是Java的类）

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Dog{
    // 成员
    char name[20];// copy进去
    int age;
    char sex;
};

int mainT42(){

    struct Dog dog;// 这样写完，成员是没有任何初始化的，成员默认值 是系统值(name:?@, age:3133440, sex:€)
    printf("name:%s, age:%d, sex:%c \n", dog.name, dog.age, dog.sex);
    // 赋值操作
    strcpy(dog.name, "旺财");
    dog.age = 18;
    dog.sex = 'm';

    printf("name:%s, age:%d, sex:%c \n", dog.name, dog.age, dog.sex);

    return 0;
}
