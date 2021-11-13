//
// Created by baojie on 2021/10/27.
//


#include <iostream>
using namespace std;

#define VALUE_I 9527
#define VALUE_S "AAA"
#define VALUE_F 555.f

int mainT13(){
    // 预处理阶段 宏会直接完成文本替换工作，替换后的样子：int i = 9527;
    int i = VALUE_I;
    // 预处理阶段 宏会直接完成文本替换工作，替换后的样子：string s = "AAA";
    string str = VALUE_S;
    // 预处理阶段 宏会直接完成文本替换工作，替换后的样子：float f = 545.3f;
    float f = VALUE_F;

    return 0;
}