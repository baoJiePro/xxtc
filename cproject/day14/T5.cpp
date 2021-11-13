//
// Created by baojie on 2021/10/23.
//

#include <iostream>
#include <set> // STL包
#include <algorithm> // 算法包

using namespace std;


// 回调函数 (功能够简单)
void showAction1(int __first) {
    cout << "一元谓词" << __first << endl;
}

class showAction1Obj{
public:
    int count = 0;
    int getCount(){
        return this->count;
    }
    void operator()(int __first){
        cout << "仿函数：" << __first << endl;
        count++;
    }
};

int mainT5(){

    set<int> setVar;

    setVar.insert(20);
    setVar.insert(10);
    setVar.insert(40);
    setVar.insert(30);
    setVar.insert(13);
    setVar.insert(26);

    for_each(setVar.begin(), setVar.end(), showAction1);

    showAction1Obj obj; // 理解：值传递
    // 传入进去的obj是新的副本，我们外面的obj是旧地址
    obj = for_each(setVar.begin(), setVar.end(), obj);

    cout << "打印：" << obj.getCount() << "次" << endl;
    return 0;
}