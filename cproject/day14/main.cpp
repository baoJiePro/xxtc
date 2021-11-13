// 1.map容器学习。
#include <iostream>
#include <map>

using namespace std;
int mainT1() {
    std::cout << "Hello, World!" << std::endl;

    map<int, string> mapVar;
    // TODO 添加数据
    // 第一种方式
    mapVar.insert(pair<int, string>(10, "aa"));
    // 第二种方式
    mapVar.insert(make_pair(30, "bb"));
    // 第三种方式
    mapVar.insert(map<int, string>::value_type(20, "cc"));
    // 上面三种方式 key不能重复
    // 第四种方式覆盖/替换（常用）
    mapVar[40] = "dd";

    for (map<int, string>::iterator iterator = mapVar.begin(); iterator != mapVar.end(); iterator++){
        cout << "循环遍历的key：" << iterator->first << ", value: " << iterator->second << endl;
    }

    std::pair<map<int, string>::iterator, bool> result = mapVar.insert(map<int, string>::value_type (40, "66三san"));
    if (result.second){
        cout << "插入成功" << endl;
    } else{
        cout << "插入失败" << endl;
    }

    // 我想知道插入后的 数据
    for (result.first == mapVar.begin(); result.first != mapVar.end(); result.first++){
        cout << result.first->first << ", " << result.first->second << endl;
    }

    for (map<int, string>::iterator iterator = mapVar.begin(); iterator != mapVar.end(); iterator++){
        cout << "循环遍历的key：" << iterator->first << ", value: " << iterator->second << endl;
    }

    map<int, string>::iterator findResult = mapVar.find(30);
    if (findResult != mapVar.end()){
        cout << "恭喜，找到了 " << findResult->first << "," << findResult->second << endl;
    } else{
        cout << "查询失败" << endl;
    }

    return 0;
}
