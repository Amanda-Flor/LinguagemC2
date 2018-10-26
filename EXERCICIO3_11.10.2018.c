/*Escreva um algoritmo que lê uma matriz A(10,5)e a escreva. Verifique, a seguir quais os elementos de A que estão repetidos e quantas vezes
 cada um está repetido. Escreva cada elementos repetido com uma mensagem dizendo que o elemento aparece X vezes em A.*/
/*EXERCICIO3_11.10.2018.c*/

#include<stdio.h>
int main(void)
{
    int A[3][2],i, j, cont = 0, fixo, k, l;

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 2; j++)
        {
            printf("Entre com um valor para %d,%d:", i+1, j+1);
            scanf("%d", &A[i][j]);
        }
    }

    for(i = 0; i < 3; i++){
        for(j = 0; j < 2; j++){
            cont = 0;
            fixo = A[i][j];
            /*comparação com todos os números da tabela*/
            for(k = 0; k < 3; k++){
                for(l = 0; l < 2; l++){
                    if(fixo == A[k][l]){
                        cont++;
                    }
                }
            }

            printf("Valor %d se repete = %d\n", fixo, cont);
        }
    }

    return 0;

}
