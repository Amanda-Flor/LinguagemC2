/*EXERCICIO_1C_18.10.2018.c*/

#include<stdio.h>
int main (void)
{
    {
    int A[15], B[15], i, k;

    for(i = 0; i < 15; i++){
        printf("Entre com um valor para A[%d]: ",i+1);
        scanf("%d", &A[i]);
    }
    for(i = 0; i < 15; i++){
        B[i] = 1;
        for(k = 1; k < A[i]; k++){
           B[i] = B[i] * k;
        }
    }
    for(i = 0; i < 15; i++){
        printf("B[%d] : %d\n", i+1, B[i]);
    }
    return 0;
}
}
