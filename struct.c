#include <stdio.h>
//结构体：数值的聚合，对人的整体理解

int main() {
    /*
     *struct<结构体名>{
     *<成员类型><成员名>;
     *...
     *}<结构体变量>;
     */

    //嵌套结构体
    typedef struct Company {
        char* name;
        char* id;
        char* location;
    }Company;

    typedef struct Person {
        char *name;
        int age;
        char* id;
        Company *company;
    }Person;//类型

    //初始化成员
    Company company={"immoc","121212","newyork"};
    struct Person person2={.name="dannylee",.id="us511"};//. 成员选择运算符

    person2.company->location;

    printf("%d\n",person2.age);
    person2.age=18;

    struct Person *person_ptr=&person2;
    person_ptr->name; //指针访问用箭头，变量用.
    puts(person_ptr->name);
    printf("%d\n",sizeof(struct Person));

    printf("%#x\n",&person2);

    //用typedef给结构体一个名字
    typedef struct Person Person;
    Person person3={.age=20};

    struct {
        char *name;
        int age;
        char* id;
    }person;//一次性使用定义的结构体，不需要结构体名


    return 0;
}