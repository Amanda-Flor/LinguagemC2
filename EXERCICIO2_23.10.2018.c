/*Leia uma matriz 4x4, conte e escreva quantos valores maiores que 10 ela possui.*/
/*EXERCICIO2_23.10.2018.c*/
#include<stdio.h>

int main(void)
{
    int A[4][4], i, j;

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("Entre com um valor para[%d][%d]: ",i+1, j+1);
            scanf("%d", &A[i][j]);
        }
    }
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            if(A[i][j] > 10){
                printf("Elemento[%d][%d]: %d \n",i+1, j+1, A[i][j]);
            }
        }
    }
    return 0;
}

