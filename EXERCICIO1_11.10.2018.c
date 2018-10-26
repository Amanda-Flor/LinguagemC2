/*Elaborar um programa que leia uma matriz A de duas dimensões com 15 linhas e 15 colunas. Apresentat o somatório dos elementos pares
situados na diagonal principal da referida matriz*/
/*EXERCICIO1_11.10.2018.c*/

#include<stdio.h>
int main(void)
{
    int A[3] [3], i, j, soma = 0;

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("Entre com um valor:");
            scanf("%d", &A[i][j]);
        }
    }

    /*PROCESSMANTO*/
     for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            if(j == i)
            {
                soma = soma + A[i][j];
            }
        }
    }
    /*SAIDA*/
    printf("Somantorio = %d", soma);
    return 0;
}
