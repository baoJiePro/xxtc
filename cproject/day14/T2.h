//
// Created by baojie on 2021/10/27.
//
// 如果没有定义这个宏  解决循环拷贝的问题
#ifndef DAY14_T2_H
// 我就定义这个宏
#define DAY14_T2_H

// 100 行代码
// 第一次能够进来
// 第二次  第n此进不来    直接 解决循环拷贝的问题了

// 如果没有isRelease这个宏
#ifndef isRelease
// 是否是正式环境下 【我就定义isRelease这个宏】
#define isRelease 1

#if isRelease == true
// 正式环境下 定义RELEASE宏
#define RELEASE
#elif isRelease == false
// 测试环境下  定义DEBUG宏
#define DEBUG
#endif

#endif


// 结束外面的if
#endif //DAY14_T2_H
