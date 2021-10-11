//
// Created by 鲍杰 on 2021/10/10.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 真正的C语言，在Linux上学，在VIM上才是专业的
int mainT34(){

    char * num = "1";
    int result = atoi(num);
    if (result){
        printf("result值：%d\n", result);
    } else{
        printf("转换失败！\n");
    }

    char * str1 = "anj";
    char * str2 = "aNj";

    //strcmp = 区分大小写 strcmpi = 不区分大小写
    int resultC = strcmp(str1, str2);
//    resultC = strcmpi(str1, str2);

    printf("resultC值：%d\n", resultC);
    if (resultC){//0是相等 1是不相等
        printf("不相等");
    } else{
        printf("相等");
    }

    return 0;
}
