// 谓词中戏
// Created by baojie on 2021/10/23.
//
#include <iostream>
#include <set> // STL包
#include <algorithm> // 算法包

using namespace std;

class showActionObj{
public:
    void operator()(int content){
        cout << "自定义反函数：" << content << endl;
    }
};

void showAction(int content){
    cout << "自定义函数接受：" << content << endl;
}

int mainT4(){

    set<int> setVar;
    setVar.insert(20);
    setVar.insert(30);
    setVar.insert(100);
    setVar.insert(10);
    setVar.insert(60);
    setVar.insert(20);

//    for_each(setVar.begin(), setVar.end(), showAction);
    for_each(setVar.begin(), setVar.end(), showActionObj());

    return 0;
}


