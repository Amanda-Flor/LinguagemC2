/*Ler 16 elementos numéricos inteiros positivos para uma matriz A, considerando uma matriz com 4 linha e 4 colunas.
Em seguida, apresentar os valores da diagonal inversa da matriz A.*/
/*EXERCICIO1_23.10.2018.c*/
#include<stdio.h>
int main(void)
{
    float A[4][4];
    int i, j;

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            printf("Entre com um valor para[%d][%d]: ",i+1, j+1);
            scanf("%f", &A[i][j]);
        }
    }
    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            if(i + j == 3){
                printf("Elemento[%d][%d]: %f \n",i+1, j+1, A[i][j]);
            }
        }
    }
    return 0;
}
