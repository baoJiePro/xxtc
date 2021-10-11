//
// Created by 鲍杰 on 2021/10/10.
//

#include <stdio.h>
#include <unistd.h>
// 进栈
void staticAction() {
    int arr[5]; // 静态开辟 栈区 （栈成员）

    for (int i = 0; i <5; ++i) {
        arr[i] = i;
        printf("%d, %p\n", *(arr + i), arr + i);
    }
} // 函数的末尾会弹栈（隐士）：执行完毕会弹栈  会释放所有的栈成员

int mainT23(){
    // 10M * 4 = 40M  会栈溢出
//    int arr[10 * 1024 * 1024];

//    int arr2[(int)(0.2 * 1024 * 1024)];

    // 栈区：占用内存大小 最大值： 大概 2M  大于2M会栈溢出  平台有关系的
    // 堆区：占用内存大小 最大值： 大概80%  40M没有任何问题，基本上不用担心 堆区很大的
    // 大概80%： Windows系统 给我们的编译器给予的空间  的 百分之百八十

//    while (1){
//        sleep(10);
//        staticAction();
//    }

    return 0;
}