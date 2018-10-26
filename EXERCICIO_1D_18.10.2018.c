/*EXERCICIO_1D_18.10.2018.c*/

#include<stdio.h>
int main(void)
{
    int A[20], B[20], C[20], i;

    for(i = 0; i < 20; i++){
        printf("Entre com um valor para A[%d]: ",i+1);
        scanf("%.2d", &A[i]);
    }
    for(i = 0; i < 20; i++){
        printf("Entre com um valor para B[%d]: ",i+1);
        scanf("%.2d", &B[i]);
    }

    for(i = 0; i < 20; i++){
        C[i] = A[i] - B[i];
    }

    for(i = 0; i < 20; i++){
        printf("C[.2%d] : %.2d\n", i+1, C[i]);
    }
    return 0;

}
