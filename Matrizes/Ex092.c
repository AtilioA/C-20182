/* 2. Faça um programa que leia uma matriz A 5x5 e imprima sua diagonal principal. */

#include <stdio.h>

#define LIN 5
#define COL 5

int leMat(int mat[LIN][COL], int linhas, int colunas);
int printaDPMat(int mat[LIN][COL], int linhas, int colunas);

int main()
{
    int matriz[LIN][COL];

    leMat(matriz, LIN, COL);
    printaDPMat(matriz, LIN, COL);

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

int printaDPMat(int mat[LIN][COL], int linhas, int colunas)
{
    int i, j;

    for (i = 0; i < linhas; i++)
    {
        printf("%i\n", mat[i][j]);
    }

    return 0;
}
