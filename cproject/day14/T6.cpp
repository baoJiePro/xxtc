// 类型传递 的 仿函数 怎么看源码得知 写法  同学们看懂了吗
// Created by baojie on 2021/10/23.
//
#include <iostream>
#include <set>
using namespace std;

//template<typename _Tp>
//struct less : public binary_function<_Tp, _Tp, bool>
//{
//    _GLIBCXX14_CONSTEXPR
//    bool
//    operator()(const _Tp& __x, const _Tp& __y) const
//    { return __x < __y; }
//};

class lessObj{
public:
    bool operator()(const string & x, const string y){
        return x > y;
    }
};

int mainT6(){

    set<string, lessObj> setVar;

    setVar.insert(setVar.begin(), "aaaa");
    setVar.insert(setVar.begin(), "bbbb");
    setVar.insert(setVar.begin(), "cccc");
    setVar.insert(setVar.begin(), "dddd");
    setVar.insert(setVar.begin(), "ffff");
    setVar.insert(setVar.begin(), "eeee");

    for (set<string>::iterator iterator = setVar.begin(); iterator != setVar.end(); iterator++){
        cout << "循环item：" << *iterator << endl;
    }

    return 0;
}
