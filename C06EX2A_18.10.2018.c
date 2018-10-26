/*C06EX2A_18.10.2018.c*/
#include<stdio.h>
int main(void)
{
    int A[5][3], B[5][3], C[5][3], i, j;

    for(i = 0; i < 5; i++){
        for(j = 0; j < 3; j++){
            printf("Entre com o valor %d,%d para A: ",i+1 ,j+1);
            scanf("%d", &A[i][j]);
        }
    }
    for(i = 0; i < 5; i++){
        for(j = 0; j < 3; j++){
            printf("Entre com o valor %d,%d para B: ",i+1,j+1);
            scanf("%d", &B[i][j]);
        }
    }

    for(i = 0; i < 5; i++){
        for(j = 0; j < 3; j++){
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    for(i = 0; i < 5; i++){
        for(j = 0; j < 3; j++){
            printf("%d + %d = %d\n", A[i][j], B[i][j], C[i][j]);
        }
    }
    return 0;
}
