/*Elaborar um programam que leia uma matriz A do tipo rela de duas dimensões com oito linhas e sete colunas. Contruir a matriz B de uma dimensão
que seja formada pela soma de cada linha da matriz A. Ao final apresentar o somatório dos elementos da matriz B.*/
/*EXERCICIO2_11.10.2018.c*/

#include<stdio.h>
int main(void)
{
    int A[8][7], B[8], i, j, soma = 0;

    for(i = 0; i < 8; i++)
    {
        for(j = 0; j < 7; j++)
        {
            printf("Entre com um valor %d,%d: ",i+1, j+1);
            scanf("%d", &A[i][j]);
        }
    }

    for(i = 0; i < 8; i++)
    {
        B[i] = 0;
        for(j = 0; j < 7; j++)
        {
            B[i] = B[i] + A[i][j];
        }
    }

    for(i = 0; i < 8; i++)
    {
        printf("B|%d| = %d\n", i+1, B[i]);
    }
    return 0;
}
