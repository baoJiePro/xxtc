//
// Created by 鲍杰 on 2021/10/10.
//

#include <stdio.h>

void callBackMethod(char *fileName, int current, int total) {
    printf("%s图片压缩的进度是：%d/%d\n", fileName, current, total);
}

void compress(char *fileName, void (*callBackP)(char *, int, int)) {
    callBackP(fileName, 5, 100);
}

int mainT19() {

    // 有种temp的思路一样的感觉
    //  2 再换成这种方式 【第二种写法】
    // Linux  先定义， 再赋值
    void (* call) (char *, int ,int);
    call = &callBackMethod;

    compress("bao.png", call);
    compress("bao.png", callBackMethod);

    return 0;
}
