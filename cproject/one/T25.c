//
// Created by 鲍杰 on 2021/10/10.
//

#include <stdio.h>
#include <stdlib.h>

// 动态开辟的使用的场景
int mainT25() {

    // 静态开辟的内存空间大小，是不能修改的，如果不需要动态修改空间大小，
    // 当然使用 栈区 【尽量使用 静态开辟的，如果实在是需要动态改变，才使用下面】
    // int arr [6];

    int num;
    printf("请输入数的个数：");
    // 获取用户输入的值
    scanf("%d", &num);

    // 动态开辟 用户输入的值 空间的大小   【堆区】
    int *arr = malloc(sizeof(int) * num);

    int print_num;
    for (int i = 0; i < num; ++i) {
        printf("请输入第%d个的值：", i);
        scanf("%d", &print_num);
        arr[i] = print_num;
        printf("每个元素的值:%d, 每个元素的地址:%p\n", *(arr + i), arr + i);
    }

    for (int i = 0; i < num; ++i) {
        printf("输出元素结果是:%d\n", arr[i]); // arr[i] 隐士 等价与 * (arr + i)
    }

    free(arr);
    arr = NULL;

    return 0;
}