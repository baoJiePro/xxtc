//
// Created by baojie on 2021/10/20.
//

// C++ 都是一些常规的 谓词  不能满足功能， 模仿C++源码的谓词 自定义谓词 解决这个问题

// C++缔造者写的这个源码 没有对象比较的功能 【系统源码谓词 做不到对象比较功能】
// bool operator()(const _Tp& __x, const _Tp& __y) const { return __x < __y; }
#include <iostream>
#include <set>

using namespace std;

class Person{
public:
    string name;
    int id;
    Person(string name, int id): name(name), id(id){}
};

bool doCompareAction(const Person & person1, const Person & person2){
    return person1.id < person2.id;
}

struct doCompareAction2{
public:
    bool operator()(const Person & person1, const Person & person2){
        return person1.id < person2.id;
    }
};

struct doCompareAction3{
public:
    bool operator()(const Person& __x, const Person& __y){
        return __x.id > __y.id;
    }
};

//struct less : public binary_function<_Tp, _Tp, bool>
//{
//    _GLIBCXX14_CONSTEXPR
//    bool
//    operator()(const _Tp& __x, const _Tp& __y) const
//    { return __x < __y; }
//};

int main(){

//    set<Person, doCompareAction> setVar;
//    set<Person, doCompareAction2> setVar;
    set<Person, doCompareAction3> setVar;

    Person p1("a", 1);
    Person p2("b", 2);
    Person p3("c", 3);

    setVar.insert(p2);
    setVar.insert(p1);
    setVar.insert(p3);

    for (auto iter = setVar.begin(); iter != setVar.end(); iter++){
        cout << *iter->name.c_str() << endl;
    }

    return 0;
}