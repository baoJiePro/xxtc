//
// Created by 鲍杰 on 2021/10/10.
//

#include <stdio.h>

void add2(int i, int j) {
    printf("i+j=%d\n", i + j);
}

void add3(int i,int j) {
    printf("2 i+j=%d\n", i+j);
}

void test(void (*p)(int, int)) {
    p(9, 9);
    (*p)(9, 9);
    (p)(9, 9);
}

int mainT21() {

    test(add2);
    test(add3);
    return 0;
}