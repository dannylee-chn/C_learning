#include<stdio.h>
#include<stdlib.h>
#include<string.h>


//普通swap函数：传入的是main函数a，b拷贝的副本。swap运行结束后就销毁了。
int swap(int a,int b) {
    int temp=a;
    a=b;
    b=temp;
}

//利用指针
void SwapInt(int *a,int *b) {
    int temp=*a;
    *a=*b;
    *b=temp;
}
//通用版本
void Swap(void *first,void *second,size_t size) {
    void *temp=malloc(size);
    if (temp) {
        memcpy(temp,first,size);
        memcpy(first,second,size);
        memcpy(second,temp,size);
        free(temp);

    }else {

    }
}

//类型不确定：宏,宏大括号可能会出问题，多了一个；
#define SWAP(a,b,type) do{type temp=a;a=b;b=temp;}while(0)
#define SWAP2(a,b) do{typeof(a) temp=a;a=b;b=temp;}while(0)

int main() {
    int a=0;
    int b=1;
    swap(a,b);
    printf("%d\n",a);
    printf("%d\n",b);

    SwapInt(&a,&b);
    printf("%d\n",a);
    printf("%d\n",b);

    double x=3.0;
    double y=4.0;
    Swap(&x,&y,sizeof(double));
    printf("%lf",x);
    printf("%lf\n",y);

    SWAP(a,b,int);
    printf("%d",a);
    printf("%d\n",b);
    SWAP(x,y,double);
    printf("%lf",x);
    printf("%lf",y);
    return 0;
}