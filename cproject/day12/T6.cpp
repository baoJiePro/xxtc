// 虚函数  纯虚函数 全纯虚函数（C++没有接口） 等价于  6.全纯虚函数（Java版接口）。
// Created by baojie on 2021/10/18.
//
#include <iostream>
using namespace std;

class Student{
    int _id;
    string name;
    int age;
};

// 此类所有的函数 ，都是纯虚函数，就相当于 Java的接口了
class IStudent_DB{
    virtual void insertStudent(Student & student) = 0;
    virtual void deleteStudent(int _id) = 0;
    virtual void updateStudent(int _id, Student & student) = 0;
    virtual void queryByStudent(Student & student) = 0;
};

class Student_DBImpl : public IStudent_DB{
    void insertStudent(Student & student){
        // 插入操作，省略代码...
    };
    void deleteStudent(int _id){
        // 删除操作，省略代码...
    };
    void updateStudent(int _id, Student & student) {
        // 更新操作，省略代码...
    };
    void queryByStudent(Student & student){
        // 查询操作，省略代码...
    };
};

class Student_DBImpl2 : public IStudent_DB{
    void insertStudent(Student & student){
        // 插入操作，省略代码...
    };
    void deleteStudent(int _id){
        // 删除操作，省略代码...
    };
    void updateStudent(int _id, Student & student) {
        // 更新操作，省略代码...
    };
    void queryByStudent(Student & student){
        // 查询操作，省略代码...
    };
};

class Student_DBImpl3 : public IStudent_DB{
    void insertStudent(Student & student){
        // 插入操作，省略代码...
    };
    void deleteStudent(int _id){
        // 删除操作，省略代码...
    };
    void updateStudent(int _id, Student & student) {
        // 更新操作，省略代码...
    };
    void queryByStudent(Student & student){
        // 查询操作，省略代码...
    };
};

int mainT6(){
    Student_DBImpl studentDb1;
    Student_DBImpl2 studentDbImpl2;
    Student_DBImpl3 studentDbImpl3;
    return 0;
}
