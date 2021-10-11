//
// Created by 鲍杰 on 2021/10/11.
//
#include <stdio.h>
#include <ctype.h>

void lower(char * dest, char * name){
    // 临时指针，你只能操作，临时指针，不能破坏name指针
    char * temp = name;
    while (*temp){
        *dest = tolower(*temp);
        temp++;// 挪动指针位置 ++
        dest++;// 挪动指针位置 ++  目的是为了 挪动一个存储一个 挪动一个存储一个 ...
    }
    // 避免printf打印系统值
    *dest = '\0';
    printf("不能破坏 name:%s\n", name); // temp的好处就是，不会破坏name
}

int mainT36(){

    char * name = "DeeY";
    // 先定义结果
    char dest[20];
    lower(dest, name);
    printf("小写转换后的结构是:%s\n", dest);

    return 0;
}