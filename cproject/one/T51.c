//
// Created by baojie on 2021/10/12.
//

#include <stdio.h>

typedef enum {
    AUDIO = 111,
    VIDEO,
    INFO
} AV;

int mainT51(){

    AV av1 = AUDIO;
    AV av2 = VIDEO;
    AV av3 = INFO;

    printf("audio:%d, video:%d, info:%d,\n", av1, av2, av3);

    return 0;
}
