//5.list的学习。 Java：ArrayList采用Object[]数组，   C++的list 内部：采用链表
// Created by baojie on 2021/10/20.
//
#include <iostream>
#include <list>
#include <windows.h>

using namespace std;

int mainT5(){

    list<int> listVar;
    listVar.push_front(50);
    listVar.push_front(20);
    listVar.push_back(30);
    listVar.push_back(40);

    listVar.insert(listVar.begin(), 80);
    listVar.insert(listVar.end(), 44);

    listVar.back() = 88;
    listVar.front() = 15;

    listVar.erase(listVar.begin());
    listVar.erase(listVar.end());

//    for (auto it = listVar.begin(); it != listVar.end(); it++){
//        cout << *it << endl;
//    }

    for(auto iterator = listVar.begin(); iterator != listVar.end(); iterator++){
        Sleep(2000);
        cout << "迭代器auto：" << *iterator << endl;
    }

    return 0;
}

