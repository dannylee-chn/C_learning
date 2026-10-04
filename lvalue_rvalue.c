#include<stdio.h>


//左值右值：出现在赋值表达式左边右边的值
int main() {
    int a;
    a=2;//左值：内存的空间 右值：存入的值

    int *p=&a;
    *p=2;

    int b=*p;//左：b内存空间；右：*p从左值被读取成右值

    //&a=p; ERROR!右边出现的值不能变成内存空间
    //*p+1=3;ERROR!//左边读取了*p，不是内存空间了
    *(p+1)=3;

    int array[4]={0};
    int *pa=array;
    *pa=2;
    *pa++=3;//快捷键优先级：option+⬆️,但是先返回 pa 原来的值，语句结束之后，pa 才 + 1。
    *(pa+3)=4;
    printf("%d\n",*pa);//pa现在+1了，后面一个元素的地址
    for (int i=0;i<4;i++)
        printf("%d\n",array[i]);


    return 0;
}
