//
// Created by baojie on 2021/10/24.
//
#include <iostream>

using namespace std;

template<typename T>
struct plus_d{
    T operator()(const T & x, const T & y){
        return x + y;
    }
};

int mainT9(){

    plus_d<int> add_func;

    int r = add_func(1, 2);
    cout << r << endl;

    plus_d<string> add_func2;
    string r2 = add_func2("aa", "bb");
    cout << r2 << endl;

    return 0;
}