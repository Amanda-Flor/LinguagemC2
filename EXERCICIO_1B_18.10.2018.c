/*EXERCICIO_1B_18.10.2018.c*/

#include<stdio.h>
int main (void)
{
    {
    int A[8], B[8], i;

    for(i = 0; i < 8; i++){
        printf("Entre com um valor para A[%d]: ",i+1);
        scanf("%d", &A[i]);
    }
    for(i = 0; i < 8; i++){
        B[i] = A[i] * 3;
    }
    for(i = 0; i < 8; i++){
        printf("B[%d] : %d\n", i+1, B[i]);
    }
    return 0;
}
}
