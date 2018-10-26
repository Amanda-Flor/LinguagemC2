/*EXERCICIO_1A_18.10.2018.c*/

#include<stdio.h>
int main (void)
{
    int A[10], i;

    for(i = 0; i < 10; i++){
        printf("Entre com um valor para A[%d]: ",i+1);
        scanf("%d", &A[i]);
    }
    for(i = 0; i < 10; i++){
        printf("A[%d] : %d\n", i+1, A[i]);
    }
    return 0;
}
