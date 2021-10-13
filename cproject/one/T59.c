// TODO 【文件的加密，使用密钥】

#include <stdio.h>
#include <stdlib.h> // 文件的操作，是在这个头文件里面的
#include <string.h>

int main() {
    char * fileNameStr = "D:\\android_project\\my_project\\ndk_project\\xxtc\\cproject\\one\\image.jpg";
    char * fileNameStrEncode = "D:\\android_project\\my_project\\ndk_project\\xxtc\\cproject\\one\\imageEncode.jpg";

    // 密钥
    char * password = "123456"; // 我现在做的事情：我的密钥 必须生效

    FILE * file = fopen(fileNameStr, "rb"); // r 必须字节提前准备好文件
    FILE * fileEncode = fopen(fileNameStrEncode, "wb"); // w 创建一个0kb的文件

    if (!file || !fileEncode) {
        printf("文件打开失败，请你个货检测：路径为%s路径的文件，看看有什么问题\n", fileNameStr);
        exit(0); // 退出程序
    }

    int c;
    int index = 0;
    int pass_len = strlen(password);
    while ((c = fgetc(file)) != EOF) {
        char item = password[index%pass_len];
        // 1 2 3 4 5 6  1 2 3 4 5 6  1 2 3 4 5 6 ...

        printf("item:%c%\n", item);
        fputc(c ^ item, fileEncode);
        index ++;
    }

    // 关闭文件
    fclose(file);
    fclose(fileEncode);
}

