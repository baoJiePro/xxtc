//
// Created by ���� on 2021/10/11.
//
#include <stdio.h>

struct Study{
    char * studyContent;//ѧϰ����
};

struct Student{
    char name[10];
    int age;
    char sex;
    struct Study study;// Clion���ߵ�д��
    struct Wan{
        char * wanContent;// �������
    } wan;
};

int mainT44(){

    struct Student student = {
            "liYuanBa",
            24,
            'M',
            {"c����"},
            {"wanZhe"}
    };

    printf("name:%s, age:%d, sex:%c��study:%s, wan:%s \n",
           student.name, student.age, student.sex, student.study.studyContent, student.wan.wanContent);


    return 0;
}