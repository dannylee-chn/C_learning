#include<stdio.h>
void SumIntArray(int rows,int columns,int array[][columns],int result[rows]) {
    for (int i=0;i<rows;i++) {
        for (int j=0;j<columns;j++) {
            result[i] += array[i][j];//每一列加起来
        }
    }
}

int main() {
    int vehicle_limits[5][2]={
        0,5,[1][1]=1,6,2,7,3,8,4,9
    };
    //int[2]
    //vehicle_limits[0];

    for (int i=0;i<5;i++) {
        for (int j=0;j<2;j++) {
            vehicle_limits[i][j]=i+j;
        }
    }
        int scores[5][4] = {
            {135, 135, 138, 277},
            {105, 134, 108, 265},
            {113, 107, 145, 232},
            {123, 99, 140, 227},
            {98, 118, 127, 242}
        };
        int result[5] = {0};//清零空间

        SumIntArrays(5, 4, scores, result);
    for(int i2 = 0; i2 < 5; i2++){
        printf("第%d行总和：%d\n", i2, result[i2]);
    }
    return 0;
}