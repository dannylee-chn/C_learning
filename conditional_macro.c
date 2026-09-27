#include<stdio.h>

//判断在C环境还是C++环境
#ifdef __cplusplus
extern "C" {
#endif
//...
#ifdef __cplusplus
};
#endif

/*条件编译：防止头文件被多次引用
 *1.#ifdef 如果定义了
 *2.#inndef如果没定义
 *3.#if    如果：判断真假
 *
 *#endif
 *
 *#if defined(MACRO)==>#ifdef MACRO
 */
void dump(char *message) {
#ifdef DEBUG
    puts(message);
#endif
}
int main(void) {
    dump("main start!");

    dump("HelloWorld!");

    dump("main end");

    printf("__STD_VERSION__:%ld\n",__STDC_VERSION__);

//判断C版本
#if __STD_VERSION__>=201112
    puts("C11!");
#elif __STD_VERSION__>=199901
    puts("C99!");
#else
    puts("maybe C90?");
#endif


    return 0;
}