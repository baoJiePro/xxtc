//
// Created by 鲍杰 on 2021/10/9.
//

#include <stdio.h>

void update(int * i){
    printf("update函数，i的内存地址是：%p\n", i);
    *i = 999;
}

//为什么 main函数 和 update 函数 i 的内存不地址一样？
int mainT11(){
    int i = 100;
    update(&i);
    printf("main函数，i的内存地址是：%p\n", &i);
    printf("main函数，i的值是：%d\n", i);
    return 0;
}