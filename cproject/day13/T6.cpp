// 6.set容器  来引出函数谓词。

// set（内部：红黑树结构），会对你存入的数据进行排序，但是绝对不允许元素相同
// Created by baojie on 2021/10/20.
//

#include <iostream>
#include <set>

using namespace std;

int mainT6(){

    set<int, less<int>> setVar;
    setVar.insert(1);
    setVar.insert(3);
    setVar.insert(2);
    setVar.insert(4);

    for (auto iter = setVar.begin(); iter != setVar.end(); iter++){
        cout << *iter << endl;
    }

    return 0;
}
