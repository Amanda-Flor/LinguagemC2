/* Escreva um programa em C que faça a leitura de duas matrizes bidimencionais A e B. Faça a multiplicação de A por B apresente o resultado.
EXERCICIO4_16.10.2018.c*/
#include<stdio.h>
int main(void)
{
    /*linha de A com coluna de B*/
    int A[2][2], B[2][2], i, j, k, C[2][2];

    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("Entre com valor para matriz A %d,%d:", i+1, j+1);
            scanf("%d", &A[i][j]);
        }
    }
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("Entre com valor para matriz B %d,%d:", i+1, j+1);
            scanf("%d", &B[i][j]);
        }
    }
    /*MULTIPLICAÇÃO */
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            C[i][j] = 0;
            for(k = 0; k < 2; k++){
                C[i][j] = C[i][j] + (A[i][k] * B[k][i]);
            }
        }
    }
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("C[%d,%d] = %d\n", i+1, j+1, C[i][j]);
        }
    }
    return 0;
}
