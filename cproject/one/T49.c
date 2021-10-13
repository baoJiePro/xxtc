// 枚举 int 类型的
// Created by baojie on 2021/10/12.
//

#include <stdio.h>

enum CommentType{
    TEXT = 10,
    TEXT_IMAGE,
    IMAGE
};

typedef enum CommentType CommentType;

int mainT49(){


    CommentType commentType = TEXT;
    CommentType commentType1 = TEXT_IMAGE;
    CommentType commentType2 = IMAGE;

    printf("%d, %d, %d \n", commentType, commentType1, commentType2);

    return 0;
}
