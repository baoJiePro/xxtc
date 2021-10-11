//
// Created by 鲍杰 on 2021/10/10.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int mainT22(){

    // 看文档的思路：
    // 1.看到文档，不要Copy，初学者
    // 2. 传入 &t  &p   可以直接传递 NULL 尝试
    srand(time(NULL));
    int i;
    for (i = 0; i < 10; i++){
        printf("随机数%d\n", rand() % 1000);
    }

    // 非0即true， 0就是false

    if (0) {
        printf("真\n");
    } else {
        printf("假\n");
    }

    if (43665) {
        printf("真\n");    // 1  走
    } else {
        printf("假\n");    // 2
    }

    if (-545) {
        printf("真\n");    // 1
    } else {
        printf("假\n");    // 2
    }

    return 0;
}