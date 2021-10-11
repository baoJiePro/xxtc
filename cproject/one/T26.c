//
// Created by 鲍杰 on 2021/10/10.
//
#include <stdio.h>
#include <stdlib.h>

// 动态开辟之realloc
int mainT26(){

    int num;
    printf("请输入个数：");
    // 获取用户输入的值
    scanf("%d", &num);
    int * arr = malloc(sizeof(int) * num);
    for (int i = 0; i < num; ++i) {
        arr[i] = i + 1000;
    }
    printf("开辟的内存指针：%p\n", arr);

    // 打印 内容
    for (int i = 0; i < num; ++i) {
        // Derry装B的打印
        // &取出内存地址 *然后去值
        // &取出内存地址 *然后去值
        // &取出内存地址 *然后去值
        // .....
        printf("元素的值:%d, 元素的地址:%p\n",
               *(arr + i)
                ,
               (arr + i)
        );
    }

    int new_num;
    printf("请输入新增加的个数: ");
    scanf("%d", &new_num);

    int * new_arr = realloc(arr, sizeof(int) * (num + new_num));
    if (new_arr){
        int j = num;
        for (; j < (num + new_num); ++j) {
            arr[j] = (j + 1001);
        }
        printf("新开辟的内存指针：%p\n", new_arr);

        // 后 打印 内容
        for (int i = 0; i < (num + new_num); ++i) {
            printf("新元素的值:%d, 元素的地址:%p\n",
                   *(arr + i),
                   (arr + i)
            );
        }
    }

    if (new_arr){// new_arr != NULL 进去if， 重新开辟的堆空间是成功的
        free(new_arr);// 如果不赋值给NULL，就是悬空指针了
        new_arr = NULL;
        arr = NULL;// 他还在指向那块空间，为了不出现悬空指针，指向NULL的空间
    } else{
        free(arr);
        arr = NULL;
    }


    return 0;
}
