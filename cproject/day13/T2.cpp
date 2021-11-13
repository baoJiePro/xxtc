//2.stack栈学习。 先进后出，后进先出，手枪子弹上膛的一个思路。
// Created by baojie on 2021/10/20.
//

#include <iostream>
#include <stack>

using namespace std;

int mainT2(){

    stack<int> stackVar;

    stackVar.push(20);
    stackVar.push(10);
    stackVar.push(30);

    while (!stackVar.empty()){
        int top = stackVar.top();// top == 获取栈顶的元素
        cout << "获取栈顶元素: " << top << endl;
        stackVar.pop();// 把栈顶的元素 弹出去  【删除】
    }

    return 0;
}
