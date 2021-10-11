//
// Created by 鲍杰 on 2021/10/11.
//
#include <stdio.h>

struct Study{
    char * studyContent;//学习内容
};

struct Student{
    char name[10];
    int age;
    char sex;
    struct Study study;// Clion工具的写法
    struct Wan{
        char * wanContent;// 玩的内容
    } wan;
};

int main(){

    struct Student student = {
            "liYuanBa",
            24,
            'M',
            {"学习c"},
            {"wanZhe"}
    };

    printf("name:%s, age:%d, sex:%c，study:%s, wan:%s \n",
           student.name, student.age, student.sex, student.study.studyContent, student.wan.wanContent);


    return 0;
}