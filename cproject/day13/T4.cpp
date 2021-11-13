// 4.优先级队列学习 (queue 的 子集)。
// Created by baojie on 2021/10/20.
//
#include <iostream>
#include <queue>

using namespace std;

int mainT4(){

//    priority_queue<int> priorityQueue;
        //从大到小排列
//    priority_queue<int ,vector<int>, less<int>> priorityQueue;
    //从小到大排列
    priority_queue<int, vector<int>, greater<int>> priorityQueue;
    priorityQueue.push(20);
    priorityQueue.push(30);
    priorityQueue.push(10);
    priorityQueue.push(40);
    priorityQueue.push(35);

    cout << priorityQueue.top() << endl;

    while (!priorityQueue.empty()){
        cout << priorityQueue.top() << endl;
        priorityQueue.pop();
    }

    return 0;
}