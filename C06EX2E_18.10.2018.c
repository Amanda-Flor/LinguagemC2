/*C06EX2E_18.10.2018.c*/
#include<stdio.h>
int main(void)
{
    float A[6], B[6], C[6][2];
    int i, j;

    for(i = 0; i < 6; i++){
        for(j = 0; j < 2; j++){
            printf("Entre com o valor %d para A:", i+1);
            scanf("%f", &A[i]);
        }
    }
    for(i = 0; i < 6; i++){
        for(j = 0; j < 2; j++){
            printf("Entre com o valor %d para B:", i+1);
            scanf("%f", &B[i]);
        }
    }
    for(i = 0; i < 6; i++){
        for(j = 0; j < 2; j++){
            if(i == 0){
                B[i][j] = A[i] * 2;
            }
            else{
                B[i][j] = A[i] - 5;
            }
        }
    }
    for(i = 0; i < 6; i++){
        for(j = 0; j < 2; j++){
            printf("%f", B[i][j]);
        }
    }
    return 0;
}
