/*C06EX2B_18.10.2018.c*/
#include<stdio.h>
int main(void)
{
    int A[7], B[7], C[7][2], i, j;

    for(i = i; i < 7; i++){
        printf("Entre com o valor %d para A:", i+1);
        scanf("%d", A[i]);
    }
    for(i = i; i < 7; i++){
        printf("Entre com o valor %d para B:", i+1);
        scanf("%d", B[i]);
    }

    for(i = 0; i < 7; i++){
        for(j = 0; j < 2; j){
            if(j = 1){
                C[i][j] = B[i];
            }
            else{
                C[i][j] = A[i];
            }
        }
    }
    for(i = 0; i < 7; i++){
        for(j = 0; j < 2; j++){
            printf("C[%d][%d] = %d", i+1, j+1, C[i][j]);
        }
    }
    return 0;
}
