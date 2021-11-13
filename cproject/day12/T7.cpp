// 7.回调。  Java的登录 简单的 接口
// Created by baojie on 2021/10/19.
//


#include <iostream>

using namespace std;

// 登录成功的Bean
class SuccessBean {
public:
    string userName;
    string userPwd;

    SuccessBean(string userName, string userPwd) : userName(userName), userPwd(userPwd) {

    }
};

// 登录响应的接口  成功，错误
class ILoginResponse {
public:
    virtual void loginSuccess(int code, string msg, SuccessBean &successBean) = 0;

    virtual void loginError(int code, string msg) = 0;
};

// 登录的API动作
void loginAction(string userName, string userPwd, ILoginResponse &loginResponse) {
    if (userName.empty() || userPwd.empty()) {
        cout << "用户名或密码为空!" << endl;
        return;
    }
    if ("anJin" == userName && "123" == userPwd) {
        SuccessBean successBean(userName, userPwd);
        loginResponse.loginSuccess(200, "登录成功", successBean);
    } else {
        loginResponse.loginError(-1, "登录失败, 用户名或密码错误");
    }
}

class ILoginResponseImpl: public ILoginResponse{
    void loginSuccess(int code, string msg, SuccessBean &successBean){
        cout << "恭喜登录成功 " << "code:" << code << " message:" << msg
             << "successBean:" << successBean.userName << "," << successBean.userPwd << endl;
    }

    void loginError(int code, string msg){
        cout << " 登录失败 " << "code:" << code << " message:" << msg << endl;
    }
};


int mainT7() {

    string userName;
    cout << "请输入用户名：" << endl;
    cin >> userName;

    string userPwd;
    cout << "请输入密码：" << endl;
    cin >> userPwd;

    ILoginResponseImpl loginResponse;
    loginAction(userName, userPwd, loginResponse);

    return 0;
}
