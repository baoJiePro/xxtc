// 谓词前戏
// Created by baojie on 2021/10/23.
//

#include <iostream>
#include <set>
#include <algorithm>// 算法包

using namespace std;

class ComPareObject{
public:
    void operator ()(){// 重装了括号运算符
        cout << "仿函数" << endl;
    }
};

void fun2(){
    cout << "普通函数 " << endl;
}

int mainT3(){

    ComPareObject comPareObject;
    comPareObject();

    fun2();
    return 0;
}
