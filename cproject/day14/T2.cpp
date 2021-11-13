// 2.multimap容器学习。
// Created by baojie on 2021/10/22.
//

#include <iostream>
#include <map>

using namespace std;

int mainT2(){
    // 1.key可以重复， 2.key重复的数据可以分组,  3.key会排序，  4.value不会排序
    multimap<int, string> multimapVar;
    multimapVar.insert(make_pair(10, "a"));
    multimapVar.insert(make_pair(10, "aa"));
    multimapVar.insert(make_pair(10, "aaa"));
    multimapVar.insert(make_pair(30, "ab"));
    multimapVar.insert(make_pair(30, "aa"));
    multimapVar.insert(make_pair(30, "ac"));
    multimapVar.insert(make_pair(20, "bb"));
    multimapVar.insert(make_pair(20, "ab"));
    multimapVar.insert(make_pair(20, "aaa"));
    multimapVar.insert(make_pair(25, "dd"));
    multimapVar.insert(make_pair(28, "cc"));

    for (auto iterator = multimapVar.begin(); iterator != multimapVar.end(); iterator++){
        cout << "key: " << iterator->first << " , value: " << iterator->second << endl;
    }

    int result;
    cout << "请输入你要查询的key：" << endl;
    cin >> result;

    multimap<int, string>::iterator iterator2 = multimapVar.find(result);
    while (iterator2 != multimapVar.end()){
        cout << iterator2->first << ", " << iterator2->second << endl;
        // 需要自己做逻辑控制，不然有问题
        iterator2++;
        if (iterator2->first != result){
            break;
        }
        if (iterator2 == multimapVar.end()){
            break;
        }
    }

    return 0;
}