//
// Created by 鲍杰 on 2021/10/10.
//

#include <stdio.h>

void add(int num1, int num2) {
    printf("num1+num2=%d\n", num1 + num2);
}

void min(int num1, int num2) {
    printf("num1-num2=%d\n", num1 - num2);
}

void operate(void (*method)(int, int), int num1, int num2) {
    method(num1, num2);
    printf("operate函数的 method指针是多少：%p\n", method);
}


int mainT18() {

    operate(add, 10, 10);
    operate(min, 100, 10);

    // 原理是什么？

    printf("main函数的 add指针是多少：%p\n", add);
    printf("main函数的 min指针是多少：%p\n", min);

    // &add和add是一样的值吗
    printf("%p, %p\n", add, &add);
    return 0;
}