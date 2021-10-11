//
// Created by 鲍杰 on 2021/10/11.
//

#include <stdio.h>
#include <string.h>

void substrAction1(char *result, char *str, int start, int end) {
    char *temp = str;// 定义临时指针，不破坏str指针
    int count = 0;// 记录当前的位置
    while (*temp) {
        // 2 到 5 的位置  在截取的范围内
        if (count >= start && count < end) {
            *result = *temp;// *temp 取出bao...
            result++;// （接收值也要挪动）挪动指针来接收   =   *temp给我的值
        }
        temp++;// 取值也要挪动
        count++;// 当前的位置要同步
    }
}

void substrAction2(char *result, char *str, int start, int end) {
    for (int i = start; i < end; ++i) {
        *(result++) = *(str + i);
    }
}

void substrAction3(char *result, char *str, int start, int end) {
    strncpy(result, str+start, end - start);
}

int mainT41() {

    char *str = "baoJieAnJin";
    // char * 不需要结尾符\0
    char result[4];
//    char * result;
    // 截取第二个位置到第五个位置 2，5
//    substrAction1(result, str, 2, 5);
//    substrAction2(result, str, 2, 5);
    substrAction3(result, str, 2, 5);
    printf("main 截取的内容是：%s", result); // 最终截取：

    return 0;
}