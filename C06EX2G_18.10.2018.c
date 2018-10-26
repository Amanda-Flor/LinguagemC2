/*C06EX2G_18.10.2018.c*/
#include<stdio.h>
int main(void)
{
    float A[4][4];
    int i, j;

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("Entre com o valor %d,%d para A:", i+1, j+1);
            scanf("%f", &A[i][j]);
        }
    }
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            if(i == j){
                printf("%f\n", A[i][j]);
            }
        }
    }
    return 0;
}
