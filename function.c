#include <stdio.h>

/*
 *<return type><name> (<parameters>) {
 * ..statement
 * return <return value>;
 * }
 */
// 函数写在main外面，平级
double G(double x,double y,double z){
    return x*y+z;
}

/*函数调用：函数名+函数返回值类型（没写默认为int）+函数的参数列表（参数类型，顺序，形参名不重要）
 *函数原型就可以调用
 */

int ADD(int,int);

int main(void) {
    double res = G(2,3,4);
    printf("%lf", res);
    int res2=ADD(5,4);
    return 0;
}

int ADD(int,int) {
    puts("HelloWORLD");
}

