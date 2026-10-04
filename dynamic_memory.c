#include<stdio.h>
#include<stdlib.h>

//动态分配的数组
#define PLAYER_COUNT 10

void InitPointer(int **ptr,int length,int default_value) {//指针如果要在函数里面修改，要传入指针的指针，因为c语言的函数传参是复制
    *ptr=malloc(sizeof(int)*length);
    for (int i=0;i<length;i++) {
        (*ptr)[i]=default_value;
    }
}

int main() {
    int *players=malloc(sizeof(int)*PLAYER_COUNT);//创建内存，记得初始化，malloc可能是圣遗物
    InitPointer(&players,PLAYER_COUNT,0);
    players=calloc(PLAYER_COUNT,sizeof(int));//清空内存
    for (int i3=0;i3<PLAYER_COUNT;i3++)
        printf("%d\n",players[i3]);
    for (int i=0;i<PLAYER_COUNT;++i) {
        players[i]=i;
    }
    for (int i2=0;i2<PLAYER_COUNT;i2++)
        printf("%d\n",players[i2]);

    players=realloc(players,PLAYER_COUNT*2*sizeof(int));

    //内存可能分配失败
    if (players) {
        free(players);
    }else {

    }

    free(players);//堆区的内存：不会随着函数退出而销毁，free释放：生命周期停止

    return 0;
}