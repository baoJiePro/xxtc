//
// Created by baojie on 2021/10/27.
//
#include <iostream>
#include "T2.h"

using namespace std;

int mainT12(){

#ifdef DEBUG
    cout << "在测试环境下，迭代功能" << endl;
#else RELEASE
    cout << "在线上" << endl;
#endif

    return 0;
}
