// C++ 预定义函数（C++ 内置函数）
// Created by baojie on 2021/10/24.
//
#include <iostream>
#include <set>
#include <algorithm>


using namespace std;

int mainT8(){

    // C++已经提供了 预定义函数  plus,minus,multiplies,divides,modulus ...
    plus<int> add_func;

    int r = add_func(1,1);
    cout << r << endl;

    plus<string> add_func2;

    string r2 = add_func2("aaa", "bbb");
    cout << r2 << endl;


    return 0;
}
