//
// Created by 鲍杰 on 2021/10/7.
//

#include <stdio.h>

// 由于C语言不支持函数重载，所以声明的函数，不需要写参数
void changeAction();

int mainT8(){

    int a = 100;
    int b = 200;

    changeAction(&a, &b);
    printf("交换后的结果：%d,%d\n", a, b);

}

void changeAction(int * a, int * b){
    int temp = *a;
    *a = *b;
    *b = temp;
}