#include<stdio.h>

#define M_R 10
#define M_C 10

int main(){

int m1[M_R][M_C];
int m2[M_R][M_C];
int sum[M_R][M_C];
int rows,cols,i,j;

printf("enter numbers rows (1-%d)",M_R);
scanf("%d",&rows);
printf("enter numbers cols (1-%d)",M_C);
scanf("%d",&cols);

printf("\nEnter  first matrix:\n");
    for (i = 0; i < rows; ++i) {
        for (j = 0; j < cols; ++j) {
            printf("Enter element m1[%d][%d]: ", i, j);
            scanf("%d", &m1[i][j]);
        }
    }


    printf("\nEnter  second matrix:\n");
    for (i = 0; i < rows; ++i) {
        for (j = 0; j < cols; ++j) {
            printf("Enter element m2[%d][%d]: ", i, j);
            scanf("%d", &m2[i][j]);
        }
    }


    for (i = 0; i < rows; ++i) {
        for (j = 0; j < cols; ++j) {
            sum[i][j] = m1[i][j] + m2[i][j];
        }
    }


    printf("\nSum  two matrices:\n");
    for (i = 0; i < rows; ++i) {
        for (j = 0; j < cols; ++j) {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
