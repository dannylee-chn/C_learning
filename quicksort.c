#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define PLAYER_COUNT 50
void swapElements(int array[],int first,int second) {
    int temp=array[first];
    array[first]=array[second];
    array[second]=temp;
}

void ShuffleArray(int array[],int length) {
    srand(time(NULL));
    //[0,rand_max]
    for (int i=length-1;i>0;i--) {
        int random_number=rand()%i;
        swapElements(array,i,random_number);
    }
}

int main() {
    int players[PLAYER_COUNT];
    for (int i=0;i<50;i++) {
        players[i]=i;
    }
    for(int m = 0; m < 5; m++) {
        printf("%d",players[m]);
    }

    ShuffleArray(players,PLAYER_COUNT);
    for(int n = 0; n < 5; n++) {
        printf("%d",players[n]);
    }
}


//i是用来遍历数组，partition划分中间位置
int Partition(int array[],int low,int high) {
    int pivot=array[high];
    int partition=low;
    for (int i=low;i<high;i++) {
        if (array[i]<pivot) {
            swapElements(array,i,partition++);
        }
    }
    swapElements(array,partition,high);

    return partition;

}

void  QuickSort(int array[],int low,int high) {
    if (low>=high)return;
    int partition=Partition(array,low,high);
    QuickSort(array,low,partition-1);
    QuickSort(array,partition+1,high);
}