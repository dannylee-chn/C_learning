#include<stdio.h>

//文件作用域：全局
int global_var=1;

//static具有文件作用域的变量（int默认值为0），non只是auto：函数、块作用域，无初值
void LocalStaticVar(void) {
    static int static_var;
    int non_static_var;
    printf("%d\n",static_var++);
    printf("%d\n",non_static_var++);
}

//寄存器变量
void PassByMemory(int parameter) {
    printf("%d\n",parameter);
}
void PassByRegister(register int parameter) {
    printf("%d\n",parameter);
}

int main(void) {
    //自动变量：在函数作用域里存亡
    auto int value=0;//变量类型+数据类型

    {//块作用域：变量在块里存亡---if/else
        auto int a=0;
    }

    //函数原型作用域
    double Sort(int size,int array[size]);

    LocalStaticVar();
    LocalStaticVar();

    return 0;
}