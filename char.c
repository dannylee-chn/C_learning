#include<stdio.h>
#include <wchar.h>

int main() {
    char string[]="Hello world";

    //C语言字符串以NULL:\0结尾
    //size少给一个，只给11:数组要最后取到\0，越界
    printf("%s",string);

    char string_ch[]="你好，中国！";
    wchar_t ws[]= L"你好，中国";
    return 0;
}