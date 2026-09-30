#include<stdio.h>
#define ARRAY_SIZE 5

int main() {
    int array[ARRAY_SIZE];

    //array：首地址 array[5]=>array地址+5

    //VLA:ARRAY_SIZE是一个变量 C99支持 gcc
    int value=5;
    int array_value[value];

    //const只读变量，还是变量
    const int kSize=4;
    int array_const[kSize];
    return 0;
}