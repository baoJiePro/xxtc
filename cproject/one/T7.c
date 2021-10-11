//
// Created by 鲍杰 on 2021/10/7.
//
#include <stdio.h>

// C语言不允许函数重载，    Java可以，C++可以

// 先声明
void change(int i);

void change2(int * i);

int mainT7(){

    int i = 100;
    change(i);
    change2(&i);

    printf("%d\n", i);
    printf("%p\n", &i);

    /*
        int * i;  定义指针

        *i = 888;  取出内存地址所对应的值修改成 888
    */


    return 0;
}

// 函数不能写在 main的下面，会报错
// void change(int i) {}

// 再实现
void change(int i){
//    printf("change内存地址：%p\n", &change(i));
    printf("change内存地址：%p\n", &i);
    i = 200;
}

void change2(int * i){
    *i = 666;
}




