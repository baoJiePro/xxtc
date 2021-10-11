//
// Created by 鲍杰 on 2021/10/10.
//

#include <stdio.h>

int getLen(char *string) {
    int count;
    while (*string) {
        string++;
        count++;
    }

    return count;
}

// C/C++编译器 数组作为参数传递，会把数组优化成指针（为了高效率）
void getLen2(int *result, int arr[]) {
    int count;
    while (*arr) {
        arr++;
        count++;
    }
    *result = count;
}

int mainT33() {

    char str[] = {'a', 'b', 'c', '\0'};
    int result = getLen(str);
    printf("%d\n", result);

    int intArr[] = {1, 2, 3, 4, 5};

    int len;
    getLen2(&len, intArr);
    printf("len值：%d\n", len);

    return 0;
}