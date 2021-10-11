//
// Created by 鲍杰 on 2021/10/9.
//

#include <stdio.h>

int mainT12(){

    int num = 999;

    // 一级指针 *
    // 在真实开发过程中，最多三级指针  int ***
    int * num_p = &num;// 取出num的内存地址给 num_p（一级指针）

    int ** num_p_p = &num_p;// 取出num_p的内存地址给  num_p_p（二级指针）

    int *** num_p_p_p = &num_p_p;

    printf("num_p值：%p, num_p_p值：%p\n", num_p, num_p_p);

    printf("获取最终的值：%d\n", **num_p_p);
}