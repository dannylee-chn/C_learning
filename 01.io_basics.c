#include<stdio.h>
#include<errno.h>
#include<string.h>

//给文件流设置缓冲，保证文件流的缓冲的内存的作用域与文件流保持一致:1:全局作用域,2:malloc开辟+释放
char std_buffer[BUFSIZ];

int main() {
    setbuf(stdout,std_buffer);//只传入指针，没有大小信息

    FILE *file=fopen("CMakeLists.txt","r");//不在目录下，读不到

    //设置缓冲区大小：输入流：文件（磁盘上）---DMA---缓冲区---CPU---程序
    char buf[BUFSIZ];//在内存开辟一块大小为`BUFSIZ`的字符数组，作为我们手动准备的缓冲区
    setbuf(file,buf);//不可更改大小，buf缓冲区首地址，控制缓冲区开闭：BUF==>NULL关闭

    if (file) {
        setvbuf(file,buf,_IOFBF,8192);//mode:_IOFBF：全量缓冲  _IOLBF：按行缓冲  _IONBF：禁用缓冲;;size

        puts("Open successfully");
        int err=ferror(file);//文件是否有错误:0没错误
        feof(file);//文件是否结束：0没结束
        fclose(file);
    }else {
        printf("%d\n",errno);//整形
        puts(strerror(errno));//errno对应的字符串
        perror("fopen");
    }

    //清空缓冲区
    fflush(stdout);
    return 0;
}