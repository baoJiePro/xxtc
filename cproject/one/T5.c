//
// Created by 鲍杰 on 2021/10/7.
//
#include <stdio.h>

int mainT5(){

    int number_int = 100;
    double number_double = 200;

    printf("number_int的值是:%d\n", number_int);
    printf("number_double的值是:%lf\n", number_double);


    // * == 取出number_int地址所对应的值 == 100
    // 指针取出值
    // 既然任何变量都是地址，可以使用都在获取值（灵感）
    printf("number_int的值是:%d\n", *(&number_int));
    printf("number_double的值是:%lf\n", *(&number_double));

    //内存地址 == 指针
    //       指针 == 内存地址
    //        int *，  double *      (int类型的指针)
    //
    //        指针别名，指针变量 == 就是一个变量而已，只不过 是指针的 变量 而已
    //        intP，  doubleP
    int * intP = &number_int;
    double * doubleP = &number_double;

    printf("number_int的值是:%d\n", *intP);
    printf("number_double的值是:%lf\n", *doubleP);

    return NULL;
}
