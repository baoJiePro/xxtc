// 静态多态 （编译期已经决定，调用哪个函数了，这个就属于静态多态的范畴）  重载（静态多态）
// Created by baojie on 2021/10/18.
//模版函数（Java版泛型）。  C++没有泛型 C++的模板函数 非常类似于 Java的泛型

#include <iostream>

using namespace std;

void add(int n1, int n2) {
    cout << n1 + n2 << endl;
}

void add(float n1, float n2) {
    cout << n1 + n2 << endl;
}

void add(double n1, double n2) {
    cout << n1 + n2 << endl;
}

template <typename TT>
void addAction(TT n1, TT n2){
    cout << n1 + n2 << endl;
}

int mainT4() {
    add(1, 2);
    add(1.2f, 2.0f);
    add(12.2, 13.1);

    addAction(1,2);
    addAction(1.2f, 2.0f);
    addAction(12.2, 13.1);
    return 0;
}

