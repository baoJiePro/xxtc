//
// Created by 鲍杰 on 2021/10/10.
//

#include <stdio.h>

int mainT16(){

    int arr[] = {1,2,3,4};
    int * arrP = arr;

    for (int i = 0; i < sizeof arr / sizeof(int); ++i) {
        printf("arrP[%d] %d\n", i, arrP[i]);
        printf("arr[%d] %d\n", i, arr[i]);
        // + i 挪动元素3内存地址 再取元素3内存地址所对应的值
        printf("*(arrP + %d) %d\n", i, *(arrP + i));
        printf("*arrP+%d %d\n", i, *arrP + i);
    }

    return 0;
}