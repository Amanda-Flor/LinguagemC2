/*Escreva um programa em C que faça a leitura de uma matriz bidimencional A. Calcule e apresente a sua Transposta -
o que é linda vira coluna e vice versa.*/
/*EXERCICIO5_16.10.2018.c*/
#include<stdio.h>
int main (void)
{
    int A[2][2], i, j, B[2][2];

    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("Entre um valor A[%d,%d]:", i+1, j+1);
            scanf("%d", &A[i][j]);
        }
    }
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            B[j][i] = A[i][j];
        }
    }
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("B[%d,%d] = %d\n", i+1, j+1, B[i][j]);
        }
    }

}
