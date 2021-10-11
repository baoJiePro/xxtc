//
// Created by 鲍杰 on 2021/10/10.
//

#include <stdio.h>

int mainT15(){

//    int arr[] = {1,2,3,4};
    int arr[4];
    int * arrP = arr;
    for (int i = 0; i < 4; ++i) {
        *(arrP+i) = i + 1001;
    }

//    printf("%d\n", sizeof(int )/sizeof arr);
    printf("%d\n", sizeof arr);
    printf("%d\n", sizeof arr/sizeof (int ));

    // sizeof arr = 16(sizeof arr)  /  4(sizeof(int))
    // 变量 刚刚赋值的数组
    for (int i = 0; i < sizeof arr / sizeof(int); ++i) {
        printf("位置%d的值是：%d\n", i, arr[i]);
    }

    return 0;
}