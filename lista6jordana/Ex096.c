/* 6. Faça um programa que leia uma matriz A 5x5 e uma matriz B 5x5 e realize o produto das
duas matrizes, criando uma matriz C que guarde a matriz resultante e imprima a matriz
C ao final do programa. */

#include <stdio.h>

#define LIN 2
#define COL 2

int leMat(int matriz[LIN][COL]);
int printaMat(int matriz[LIN][COL]);
int prodMat(int A[LIN][COL], int B[LIN][COL], int C[LIN][COL]);

    int main()
{
    int A[LIN][COL], B[LIN][COL], C[LIN][COL];

    leMat(A);
    leMat(B);
    printf("Produto das matrizes:\n");
    prodMat(A, B, C);

    return 0;
}

int leMat(int matriz[LIN][COL])
{
    int i, j;

    printf("Informe a matriz:\n");

    for (i = 0; i < LIN; i++)
    {
        for (j = 0; j < COL; j++)
        {
            printf("a%i,%i = ", i + 1 , j + 1);
            scanf("%i", &matriz[i][j]);
        }
    }

    return matriz[LIN][COL];
}

int prodMat(int A[LIN][COL], int B[LIN][COL], int C[LIN][COL])
{
    int i, j, soma[LIN][COL];

    for (i = 0; i < LIN; i++)
    {
        for (j = 0; j < COL; j++)
        {
            C[i][j] = A[i][j] * B[i][j];
            printf("%i ", C[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    return 0;
}

int printaMat(int matriz[LIN][COL])
{
    int i, j;

    for (i = 0; i < LIN; i++)
    {
        for (j = 0; j < COL; j++)
        {
            printf("%i ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
