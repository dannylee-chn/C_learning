#include<stdio.h>
#define MAX(a,b) (a)>(b)? (a):(b)//加上括号，防止表达式
//多行宏函数
#define IS_HEX_CHARATER(ch)\
((ch)>='0'&&(ch)<='9')||\
((ch)>='A'&&(ch)<='F')||\
((ch)>='a'&&(ch)<='f')

//宏函数：只会无脑复制替换参数为传入的东西，传入的要是没有副作用的//宏的参数，返回值没有类型要求
int main(void) {
    int max=MAX(1,3);
    int max2=(1,MAX(3,4));
    printf("max2:%d\n",max2);
    printf("is A a hex character?%d\n",IS_HEX_CHARATER('A'));
    return 0;
}