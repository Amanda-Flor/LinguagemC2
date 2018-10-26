/*C06EX2F_18.10.2018.c*/
#include<stdio.h>
int main(void)
{
    float A[4][4], B[4][4], C[4][4];
    int i, j;

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("Entre com o valor A:");
            scanf("%f", &A[i][j]);
        }
    }
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("Entre com o valor B:");
            scanf("%f", &B[4]);
        }
    }
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            C[i][j] = A[i][j] - B[i][j];
        }
    }
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("%f\n", C[i][j]);
        }
    }
    return 0;

}
