#include<stdio.h>

//内存对齐问题:自己设置解决,避免空间浪费
#pragma pack(2)
typedef struct {
    char a;//1
    char b;//1
    //__attribute((aligned(2)))int c;//4
    _Alignas(8)int c; //4
    short d;//2
    double e;//8
}OptimizeAlign;
OptimizeAlign test={'a','b',3,4,5.9};

int main() {
    printf("%d",test.c);
    return 0;
}




