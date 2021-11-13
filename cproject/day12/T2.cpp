//2.虚继承，二义性。  在开发过程中，不准出现，如果出现，要知道怎么回事
// Created by baojie on 2021/10/18.
//

#include <iostream>

using namespace std; // 已经声明了

class Object {
public:
    string info;
};

class Base1 : virtual public Object {

};

class Base2 : virtual public Object {

};

class Main1 : public Base1, public Base2 {

};

int mainT2() {
    Object object;
    Base1 base1;
    Base2 base2;
    Main1 main1;

    object.info = "a";
    base1.info = "b";
    base2.info = "c";
    //父类需要虚继承才能使用
    main1.info = "d";

    cout << object.info << endl;
    cout << base1.info << endl;
    cout << base2.info << endl;
    cout << main1.info << endl;

    return 0;
}

