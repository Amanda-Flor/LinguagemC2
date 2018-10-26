/*C06EX2_18.10.2018.c*/
#include<stdio.h>
int main (void)
{
    float A[4][5];
    int i, j;

    for(i = 0; i < 4; i++){
        for(j = 0; j < 5; j++){
            printf("Entre com o valor %d,%d para A:", i+1, j+1);
            scanf("%f",&A[i][j]);
        }
    }
    for(i = 0; i < 4; i++){
        for(j = 0; j < 5; j++){
            printf("A[%d][%d] =%f\n",i+1, j+1, A[i][j]);
        }
    }
    return 0;
}
