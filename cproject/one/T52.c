//
// Created by baojie on 2021/10/12.
//

#include <stdio.h>
#include <windows.h>

int mainT52(){

    printf("游戏倒计时开始");

    int i;
    for (i = 100; i > 0; ++i) {
        printf("还剩下多少秒: %d, 内存地址是: %p\n", i, &i);
        Sleep(2000);
    }

    printf("恭喜，你已经赢得了游戏最高等级，碉堡了!\n");

    getchar();
    return 0;
}