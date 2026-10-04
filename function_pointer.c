#include<stdio.h>
#include<stdlib.h>

int *f(int,double);//运算优先级：返回的是int型指针

int (*f2)(int,double);//函数指针

int *(*f3)(int,double);//`f3` 保存**某一个函数的地址**【被 f3 指向的那个函数】**，调用之后，会返回一个`int*`。

//int (*f5)[](int,double);//(*f5)==f

//自己定义类型名
typedef int (*Func)(int,double);
typedef int*INTPTR;//给int*变量一个名字INTPTR
typedef IntArray[];//用IntArray代替int[]

void InitPointer(int **ptr,int length,int default_value) {
    *ptr=malloc(sizeof(int)*length);
    for (int i=0;i<length;i++) {
        (*ptr)[i]=default_value;
    }
}

int main() {
    printf("%#x\n",&InitPointer);

    //函数指针的类型
    void (*func)(int **ptr,int length,int default_value)=&InitPointer;//指针变量类型：变量名==>*+指针变量名字
    func(&p,10,0);
    InitPointer(&p,10,0);

    free(p);

    (*func)(&p,10,0);
    (*InitPointer)(&p,10,0);

    return 0;
}