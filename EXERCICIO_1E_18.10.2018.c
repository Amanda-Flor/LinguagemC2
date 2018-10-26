/*EXERCICIO_1E_18.10.2018.c*/

#include<stdio.h>
int main(void)
{
    int A[10], B[10], C[20], i;

    for(i = 0; i < 10; i++){
        printf("Entre com um valor para A[%d]: ",i+1);
        scanf("%d", &A[i]);
    }
    for(i = 0; i < 10; i++){
        printf("Entre com um valor para B[%d]: ",i+1);
        scanf("%d", &B[i]);
    }

    for(i = 0; i < 20; i++){
        if(i <= 10){
            C[i] = A[i];
        }
        else{
            C[i] = B[i-10];
        }
    }

    for(i = 0; i < 20; i++){
        printf("C[%d] : %d\n", i+1, C[i]);
    }
    return 0;

}

