#include<stdio.h>

#define ARRAY_SIZE 10

int global_array[ARRAY_SIZE];//全局数组未初始化，默认为0

int main() {
    int array[ARRAY_SIZE]; //自动变量数组声明完==开辟内存，记得初始化

    int array_2[]={1,2,3,4,5,6,7,8,9,10};

    double array_double[5]={2.3,1.3,5.2,6.7,9.1};

    char array_char[5]={[2]='o','l','l'};//指定位置初始化

    //访问数组
    for (int i=0;i<ARRAY_SIZE;i++) {
        array[i]=i;
    }
        for (int i2=0;i2<ARRAY_SIZE;i2++) {
            printf("%d ", array[i2]);
        }

    return 0;

}