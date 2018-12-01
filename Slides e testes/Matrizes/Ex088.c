/* 1. Faça um programa que leia e imprima uma matriz A 5x5. */

#include <stdio.h>

#define LIN 2
#define COL 2

int leMat(int mat[LIN][COL], int linhas, int colunas);
int inicMat(int mat[LIN][COL], int linhas, int colunas);
int printaMat(int mat[LIN][COL], int linhas, int colunas);

int main()
{
    int matriz[LIN][COL];

    inicMat(matriz, LIN, COL);
    leMat(matriz, LIN, COL);
    printaMat(matriz, LIN, COL);

    return 0;
}

int leMat(int mat[LIN][COL], int linhas, int colunas)
{
    int i, j;

    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            printf("[%i][%i] = ", i, j);
            scanf("%i", &mat[i][j]);
        }
    }
    return 0;
}

int inicMat(int mat[LIN][COL], int linhas, int colunas)
{
    int i, j;

    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            mat[i][j] = 0;
        }
    }

    return 0;
}

int printaMat(int mat[LIN][COL], int linhas, int colunas)
{
    int i, j;

    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            printf("%i  ", mat[i][j]);
        }
        printf("\n\n");
    }

    return 0;
}
