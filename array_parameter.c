#include <stdio.h>

int SUMINTARRAY(int array[],int length) {//array只是首地址，传入的时候只是传入了首地址，未附带信息，需要传入length
    int sum=0;
    for (int i=0;i<length;i++) {
        sum+=array[i];
    }
    return sum;
}

int main() {
    int array_big[9]={4,6,9,3,7,563,6734,3,78};
    printf("%d\n",SUMINTARRAY(array_big,9));
}