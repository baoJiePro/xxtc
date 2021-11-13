// 3.queue队列学习（必须会使用）。
// Created by baojie on 2021/10/20.
//
#include <iostream>
#include <queue>// 队列支持（内部：基本上 链表 、 数组 ）

using namespace std;

int mainT3(){

    queue<int> queueVar;

    queueVar.push(20);
    queueVar.push(10);
    queueVar.push(30);

    cout << "修改前：queueVar.front():" << queueVar.front() << endl;
    queueVar.front() = 300;
    cout << "修改后：queueVar.front():" << queueVar.front() << endl;

    cout << "修改前：queueVar.back():" << queueVar.back() << endl;
    queueVar.back() = 100;
    cout << "修改后：queueVar.back():" << queueVar.back() << endl;

    while (!queueVar.empty()){
        cout << "while1:" << queueVar.front() << endl;
        queueVar.pop();// 把前面的元素 给消费掉  【删除】
    }

    while (!queueVar.empty()){
        cout << "while2:" << queueVar.front() << endl;
        queueVar.pop();// 把前面的元素 给消费掉  【删除】
    }

    return 0;
}
