//
// Created by 鲍杰 on 2021/10/11.
//

#include <stdio.h>

struct Person {
    char *name;
    int age;
    char sex;
} person = {"anJin", 18, 'M'},
person1,
person2;

int mainT43() {

    printf("name: %s, age: %d, sex: %c\n", person.name, person.age, person.sex);

    person1.name = "aa";
    person1.age = 12;
    person1.sex = 'F';
    printf("name: %s, age: %d, sex: %c", person1.name, person1.age, person1.sex);

    return 0;
}