// 5.纯虚函数（Java版抽象类）
// C++纯虚函数(C++没有抽象类)  相当于 Java的抽象类  为了更好理解
// Created by baojie on 2021/10/18.
//
#include <iostream>
using namespace std;

class BaseActivity{
private:
    void setContentView(string layoutId){
        cout << "XmlResourceParser解析布局文件信息... 反射" << endl;
    }

public:
    void onCreate(){
        setContentView(getLayoutId());

        initView();
        initData();
        initListener();
    }

    // 纯虚函数是必须继承的（如果子类没有重写纯虚函数，子类就是抽象类）， 虚函数是不是不必须的
    // 2.抽象函数/纯虚函数
    // virtual string getLayoutID(); // 虚函数
    virtual string getLayoutId() = 0; // 纯虚函数

    virtual void initView() = 0;

    virtual void initData() = 0;

    virtual void initListener() = 0;
};

class MainActivity: public BaseActivity{
    string getLayoutId(){
        return "R.layout.ac_main";
    }

    void initView(){
        // Button btLogin = findViewById(R.id.bt_login);
        // Button btRegister = findViewById(R.id.bt_register);
        // TextView tvInfo = findViewById(R.id.tv_info);
        // ... 省略
    }

    void initData(){
        // tvInfo.setText("info...");
        // ... 省略
    }

    void initListener(){
        /*btLogin.setOnClickListener(new View.OnClickListener() {
                  @Override
                  public void onClick(View v) {
                      // 点击做事情
                  }
              });*/
        // ... 省略
    }
};

class HomeActivity: public BaseActivity{
    string getLayoutId(){
        return "R.layout.ac_home";
    }

    void initView(){
        // Button btLogin = findViewById(R.id.bt_login);
        // Button btRegister = findViewById(R.id.bt_register);
        // TextView tvInfo = findViewById(R.id.tv_info);
        // ... 省略
    }

    void initData(){
        // tvInfo.setText("info...");
        // ... 省略
    }

    void initListener(){
        /*btLogin.setOnClickListener(new View.OnClickListener() {
                  @Override
                  public void onClick(View v) {
                      // 点击做事情
                  }
              });*/
        // ... 省略
    }
};

class LoginActivity: public BaseActivity{
    string getLayoutId(){
        return "R.layout.ac_login";
    }

    void initView(){
        // Button btLogin = findViewById(R.id.bt_login);
        // Button btRegister = findViewById(R.id.bt_register);
        // TextView tvInfo = findViewById(R.id.tv_info);
        // ... 省略
    }

    void initData(){
        // tvInfo.setText("info...");
        // ... 省略
    }

    void initListener(){
        /*btLogin.setOnClickListener(new View.OnClickListener() {
                  @Override
                  public void onClick(View v) {
                      // 点击做事情
                  }
              });*/
        // ... 省略
    }
};

int mainT5(){
    MainActivity mainActivity;

    HomeActivity homeActivity;
    LoginActivity loginActivity;
    return 0;
}


