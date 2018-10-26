/*C06EX2D_18.10.2018.c*/
#include<stdio.h>

int main(void)
{
    int A[5], B[5][3], i, j, fat;

    for(i = 0; i < 5; i++){
        printf("Entre com o valor %d para A:", i+1);
        scanf("%d", &A[i]);
    }

    for(i = 0; i < 5; i++){
        for(j = 0; j < 3; j++);{
            if(j == 0){
                B[i][j] = A[i] + 5;
            }
            else if(j == 1){
                fat = 1;
                B[i][j] = 1;
                for(fat = 1; fat < A[i]; fat++){
                   B[i][j] =  B[i][j] * fat;
                }
            }
            else{
                B[i][j] = A[i] * A[i];
            }
        }
    }
    for(i = 0; i < 5; i++){
        for(j = 0; j < 3; j++){
            if(j == 0){
                printf("%d + 5 = %d\n", A[i], B[i][j]);
            }
            else if(j == 1){
                printf("fat de %d = %d\n", A[i], B[i][j]);
            }
            else{
                printf("%d * %d = %d\n", A[i], A[i], B[i][j]);
            }
        }
    }
    return 0;
}
