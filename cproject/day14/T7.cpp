// 专业的C++工程师开发有用 ，知识补充： 对象存入到容器后  对象的生命周期 状态
// Created by baojie on 2021/10/24.
//

#include <iostream>
#include <set> // set 存入对象 奔溃（set会自动排序，对象没法排序，所以奔溃）  解决方案：自定义仿函数解决
#include <vector>  // 存入对象

using namespace std;

class Person{
private:
    string name;
public:
    Person(string name): name(name){}

    void setName(string name){
        this->name = name;
    }

    string getName(){
        return this->name;
    }

    ~Person(){
        cout << "析构函数" << endl;
    }

    Person(const Person & person){
        this->name = person.name;
        cout << "执行拷贝函数" << endl;
    }

};

int mainT7(){

    vector<Person> vectorVar;

    //释放调用析构函数
    Person person("anJin");
    //调用拷贝函数，释放调用析构函数
    vectorVar.insert(vectorVar.begin(), person);
    person.setName("aa");
    //调用拷贝函数，释放调用析构函数
    Person newPerson = vectorVar.front();
    cout << "newPerson:" << newPerson.getName() << endl;

    return 0;
}
