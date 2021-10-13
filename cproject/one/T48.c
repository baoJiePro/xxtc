// 5.结构体与结构体指针 取别名。
// Created by baojie on 2021/10/12.
//

#include <stdio.h>
#include <stdlib.h>

struct Worker_{
    char name[10];
    int age;
    char sex;
};

struct DAO{
    char name[10];
    int age;
    char sex;
};

// 源码是这样写的
// 给结构体stu 取了一个别名等于stu
typedef struct {
    char name[10];
    int age;
    char sex;
} STU;

typedef struct DAO DAO;

// 给结构体取别名
typedef struct Worker_ Worker_;
// 给结构体指针取别名
typedef Worker_ * Worker;

int mainT48(){

    Worker_ * worker = malloc(sizeof(Worker_));

    DAO * dao = malloc(sizeof(DAO));

    STU stu = {"anJin", 12, 'M'};
    STU * stu1 = malloc(sizeof(STU));

    return 0;
}

