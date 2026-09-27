#include <stdio.h>
#include<limits.h>
#include<stdbool.h>
#include <sys/_types/_wchar_t.h>

int main() {
    //整数类型
    short int short_int=0;
    long int long_int=0;
    long long long_long_int=0;
    int i=10;

    //无符号整型
    unsigned int unsigned_int=123;
    unsigned long int unsigned_long_int=111;

    printf("int in hex:%x\n",i);

    //%d:decimal
    //%x:hex
    //%o:oct
    //%ld:long decimal
    //%hd:short decimal
    //%hu:short unsigned decimal
    //\n:new line
    //size_t:可能是unsigned int的别名，不同编译器不一样
    size_t size_of_int=sizeof(int);
    printf("short int:%d\n",sizeof(short int));
    printf("int:%d\n",sizeof(int));
    printf("long int:%d\n",sizeof(long int));
    printf("long long int:%llu\n",sizeof(long long int));

    printf("max int:%d,min int:%d\n",INT_MAX,INT_MIN);
    printf("unsigned max int:%u,unsigned min int:%d\n",UINT_MAX ,0);

    //特殊字符：
    // \n:newline
    // \b:backspace
    // \r:return
    // \t:table
    // \':'字符的字面量
    // \":"字符串的字面量

    //字符：字符集 ASCII 127
    char a='a';//97
    char char_1='1';//49
    char e=0;//相当于传入ASCII码

    printf("char a:%d\n",a);
    printf("char_1:%d\n",char_1);

    // \+字符:所有字符都可以用\+对应ASCII码整数表示（八进制/十六进制）
    char newline= '\n';
    char char_1_escape_oct='\61'; //表示字符=‘1’
    char char_i_escape_hex='\x31';

    //格式化：%c
    printf("char'e':%c\n",e);

    //Unicode CJK
    wchar_t zhong=L'中';
    wchar_t zhong_hex=L'\u4E2D';
    //wprintf(L"中:%lc",zhong);

    //字符串
    char *string ="中";
    printf("中:%d\n",zhong);


    //浮点型：科学计数法
    float a_float= 3.14f;//单精度:6位有效数字 范围：+-10^-37--10^37之间
    printf("size of float:%d\n",sizeof(float));
    double a_double=3.14;//双精度：15，16位有效数字
    printf("size of double:%d\n",sizeof(double));

    float lat=39.908125f;
    int lat06=(int)(lat*1e6);//避免精度损失，将浮点数转换成整形计算
    printf("%f",39.908156f-lat);

    float money=3.14f;//error

    //变量 ：声明+赋值(建了个房子）
    //<type><name>
    int value;

    //<type><name>=<initialized value>
    int value_init=3;

    value=4;
    value_init=6;

    printf("value:%d\n",value);

    value_init=value;

    printf("size of value:%d\n",sizeof(value));//占据的内存空间
    printf("address of value:%#x\n",&value);//得到地址

    //identifier名字--标识符：
    //a-z A-Z 0-9 _
    //数不能在第一个
    //google code style a-z_a-z:person_name


    //常量：不变的量
    // const <type> read only variable
    const int kRED=0xFF0000;
    const int kGREEN=0x00FF00;
    const int kBLUE=0x0000FF;

    //macro:宏：预处理过程将COLOR_RED替换成0xFF0000（常量）：define：只是帮你做替换
#define COLOR_RED 0xFF0000

    //取消宏
#undef COLOR_RED

    //字面量literal
    //3；3u；3l；3.f；3.9；'c';"cs";L'中';L"中国";


    //运算符：
    //赋值运算符：=
    int first=0;
    int second;
    int third;
    third=second=first;

    //四则运算符
    int left,right;
    left=2;
    right=3;
    int sum;
    sum=left+right;
    int diff;
    diff=left-right;
    int product=left*right;
    int quotient=left/right;//得到整形0:看运算符两边的变量类型，再赋值，不看左边接收的变量类型
    int quotient_correct=left*1.f/right; //用%f接收
    int remainder= left%right;//取余数：2

    //关系运算符：< > <= >= == !=,结果：true:1 false:0
    printf("3>2:%d\n",3>2);
    printf("3<2:%d\n",3<2);

    //逻辑运算符：&& 与  ||或
    printf("3>2% && 3<2:%d\n",3>2 && 3<2);
    printf("3>2% || 3<2:%d\n",3>2 || 3<2);

    //自增自减++ ：只能对于变量
    int p=1;
    int j=p++;//返回的值：p原来的值1  p=2
    int k =++p;//返回：k=p=3

    //位运算符：


    //条件分支语句：
    //Bool: true=1 false=0
    _Bool is_enabled=true;//true是宏，还是整数1
    bool is_visible=false;

    //if else
    /*
     *if(<condition>){
     *...statement
     *}else{
     *...statement
     *}
     */
    /*
    *if(<condition>){
    *...statement
    *}else if(<condition2>){
    *...statement
    *}
    *else{
    *...statement}
    */
#define MAGIC_NUMBER 10
    int user_input;
    printf("please input a number:\n");
    scanf("%d",&user_input);
    if (user_input>MAGIC_NUMBER)
        printf("your number is bigger");
    else if (user_input<MAGIC_NUMBER)
        printf("your number is smaller");
    else
        printf("Yes!You got it!");

    //三元运算符?:---><expr>?<expe1>:<expr2>  expr==true,expr1  expr==false,expr2
    int res=is_enabled && is_visible ? 1:0;
    printf("is_open:%d\n",res);

    //switch
    /*
     *switch(<condition>)
     *case 0:{
     *}
     *break; 不往下掉
     *case 1:{
     *}
     *default:{
     *}
     */
#define ADD '+'
#define SUB'-'
#define MULTIPLY'*'
#define DIVIDE'/'
#define REM'%'


    //循环语句:无限进行， 比条件好
    /*
     *while(<condition>){
     *statement
     *}
     *
     *
     */


    /*do{
     *...statement}
     *while(<condition>);
     */


    // int left2;
    // int right2;
    // char operator;
    // char command;
    //
    // do {
    //     printf("Please input an expression:\n");
    //     scanf("%d %c %d",&left2,&operator,&right2);
    //
    //     int result;
    //     switch (operator) {
    //         case ADD:
    //             result=left2+right2;
    //             break;
    //         case SUB:
    //             result=left2-right2;
    //             break;
    //
    //         case DIVIDE:
    //             result=left2/right2;
    //             break;
    //         default:
    //             printf("Unsupported operation:%c\n",operator);
    //             return 1;
    //     }
    //
    //     printf("Result:%d\n",result);
    //
    //     printf("Again? type 'q' for quit:\n");
    //     //puts("Again? type 'q' for quit:");
    //     getchar();
    //     command=getchar();
    // }while (command!='q' );



    /*
     *for:(<initialization>;<condition>;<state>){
     *...statement}
     *有序列化的，有迭代次数的循环
     */

    // int num=1;
    // int sum2=0;
    // while (num<100) {
    //     sum+=num;
    //     num++;
    // }
    // printf("%d\n",sum);

     int sum2=0;
     for (int i=1;i<100;i++) {
         sum2+=i;
     }
    printf("%d\n",sum2);

    //多个变量：如果用， 看后面的表达式。用&&与
    int sumij=0;
    for (int i=0,j=0;i<=100&&j<=100;++i,++j) {
        sumij+=i*(i+j);
    }
    printf("%d\n",sumij);

    //continue:执行下次循环，不执行后面的语句 break：退出
    for (int m=0;m<10;m++) {
        if (m==2)continue;
        if (m==8)break;
        printf("%d",m);
    }
    //goto:begin:


    return 0;


}
