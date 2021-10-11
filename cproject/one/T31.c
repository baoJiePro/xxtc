//
// Created by 鲍杰 on 2021/10/10.
//

#include <stdio.h>

int mainT31() {

    int arrInt[] = {6, 4, 8, 3, 1, 2, 9, 7, 0, 5};

    int result = arrInt[*(arrInt + *(arrInt + 4))];
    printf("result的值是：%d\n", result);

    return 0;
}