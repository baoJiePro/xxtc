//3.多态（虚函数）。   动态多态（程序的角度上：程序在运行期间才能确定调用哪个类的函数 == 动态多态的范畴）
// Created by baojie on 2021/10/18.
//

// Java语言默认支持多态
// C++默认关闭多态，怎么开启多态？ 虚函数  在父类上给函数增加 virtual关键字

#include <iostream>

using namespace std;

class BaseActivity {
public:
    virtual void onStart() {
        cout << "BaseActivity onStart" << endl;
    }
};

class HomeActivity: public BaseActivity{
public:
    void onStart(){// 重写父类的函数
        cout << "HomeActivity onStart" << endl;
    }
};

class LoginActivity: public BaseActivity{
public:
    void onStart(){
        cout << "LoginActivity onStart" << endl;
    }
};

// 在此函数 体系多态，例如：你传入HomeActivity，我就帮你运行HomeActivity
void startToActivity(BaseActivity & baseActivity){
    baseActivity.onStart();
}


int mainT3() {

    BaseActivity baseActivity;
    HomeActivity homeActivity;
    LoginActivity loginActivity;

    startToActivity(baseActivity);
    startToActivity(homeActivity);
    startToActivity(loginActivity);

    cout << endl;

    BaseActivity * activity1 = new HomeActivity();
    BaseActivity * activity2 = new LoginActivity();
    startToActivity(*activity1);
    startToActivity(*activity2);
    delete activity1;
    delete activity2;

    // TODO 抛开 C++ 抛开Java 等等，请问什么是多态？ 父类的引用指向之类的对象，同一个方法有不同的实现，重写（动态多态）和   重载(静态多态)

    return 0;
}
