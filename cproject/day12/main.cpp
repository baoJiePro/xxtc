// 1.源码中属性初始化的方式。
#include <iostream>

using namespace std;

class Person{
private:
    string name;
    int age;
public:
    //构造函数
    Person(string name, int age): name(name), age(age){
        cout << "构造函数" << endl;
    }

public:
    string getName(){
        return this->name;
    }
};

class Course{
private:
    string name;
public:
    Course(string name): name(name){}
};

class Student: public Person{
private:
    Course course;
public:
    Student(string name, int age, const Course& course1) : Person(name, age), course(course1) {}

    Student(string name, int age, string courseInfo): Person(name, age), course(courseInfo){}
};

int mainT1() {
    Course course("c++");
    Student student("anJin", 22, course);
    std::cout << student.getName() << std::endl;
    return 0;
}
