#include<stdio.h>

//不要将硬编码赋值给指针
//空指针 NULL 的用法
//注意避免产生野指针

int *pointer_at_larger;

void DangerousPointer() {
    int a=2;
    pointer_at_larger=&a;

    pointer_at_larger=NULL;
}



int main() {
    int *p=(int *)100;

    int *t=NULL;

    //指针四则运算
    int b=3;
    int *o=&b;
    printf("%d\n",o+1);
    printf("%d\n",o);
    printf("%d\n",sizeof(int));//往后移动对应类型的个数

    double c=2.4;
    double *q=&c;
    double **qq=&q;
    printf("%d\n",qq+1);
    printf("%d\n",qq);
    printf("%d\n",sizeof(double));

    {
        int array[]={1,2,3,4,5};
        int *p=array;
        printf("%d\n",*(p+3));
        printf("%d\n",*(3+p));//地址本身是个整数
        //array指针：int *const指针
        //array[3]=p[3] p+3==array+3

        //也可以比较大小(仅限连续内存中:一个里面：array和array2就没意义）：eg：p+3>p+1

        int array2[]={5,3,6,2,8};
        int *p2=array2;





    }

    return 0;
}