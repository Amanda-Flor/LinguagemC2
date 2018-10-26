/*C06EX2H_18.10.2018.c*/
#include<stdio.h>
int main(void)
{
    float A[3][3], B[3][3];
    int i, j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Entre o valor %d,%d de A: ", i+1, j+1);
            scanf("%f", &A[i][j]);
        }
    }
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(i == j){
                printf("[%d][%d] %f * 2 = %f\n", i+1, j+1, A[i][j], A[i][j]*2);
            }
            else{
                printf("[%d][%d] %f * 3 = %f\n", i+1, j+1, A[i][j], A[i][j]*3);
            }
        }
    }
    return 0;
}
