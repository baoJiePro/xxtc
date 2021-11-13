//
// Created by baojie on 2021/10/27.
//

#include <iostream>

using namespace std;
// 参数列表 无需类型  返回值 看不到
#define SHOW(V) cout << "输出：" << V << endl;
#define ADD(n1, n2) n1+n2;

#define LOGIN(V) if(V==1){ \
    cout << "满足" << endl;                          \
}else{                     \
    cout << "不满足" << endl;                           \
}

int main() {

    SHOW("aaa")
    SHOW(123)
    SHOW(12.34f)

    int r = ADD(1, 2);
    cout << r << endl;

    LOGIN(10)

    return 0;
}

// 宏函数
/*
 * 优点：
 *   1.文本替换，不会造成函数的调用开销(开辟栈空间，形参压栈，函数弹栈释放 ..)
 *
 * 缺点：
 *   1.会导致代码体积增大
 *
 */