//
// Created by 鲍杰 on 2021/10/9.
//
#include <stdio.h>

int mainT13(){

    int arr[] = {1,2,3,4};

    // 遍历数组
    // 其他平台不能用 Clion能用， Linux上报错
    /*for (int i = 0; i < 4; ++i) {

    }*/

    int i = 0;
    for (i = 0; i < 4; ++i) {
        printf("%d\n", arr[i]);
    }

    // 数组 和 指针 挂钩
    // 数组的内存地址 == 第一个元素的内存地址  == &arr
    // 数组的内存地址 == 第一个元素，不是第二个元素，也不是第n个元素
    printf("arr  =   %d\n", arr);
    printf("&arr  =   %d\n", &arr);
    printf("&arr[0]  =   %d\n", &arr[0]);

    // 既然数组就是一个内存地址
    int * arr_p = arr;

    printf("%d\n", *arr_p); // *arr_p 取出元素一内存地址的值 1

    arr_p++;// 指针挪动   元素二的内存地址了
    printf("%d\n", *arr_p);

    arr_p += 2;
    printf("%d\n", *arr_p); // 输出4

    arr_p -= 3; // 挪动指针指向到 元素一
    printf("%d\n", *arr_p);

    arr_p += 2000;
    printf("%d\n", *arr_p); // 错误

    // 以后：我想 三维数组/三级指针
    // int *** arrPpp;

    return 0;
}
