/* 2. Faça um programa que leia uma matriz A 5x5 e imprima sua diagonal principal. */

#include <stdio.h>

#define LIN 5
#define COL 5

int leMat(int matriz[LIN][COL], int linhas, int colunas);
int printaDPMat(int matriz[LIN][COL], int linhas, int colunas);

int main()
{
    int matriz[LIN][COL];

    leMat(matriz, LIN, COL);
    printaDPMat(matriz, LIN, COL);

    return 0;
}

int leMat(int matriz[LIN][COL], int linhas, int colunas)
{
    int i, j;

    for (i = 1; i <= linhas; i++)
    {
        for (j = 1; j <= colunas; j++)
        {
            printf("[%i][%i] = ", i, j);
            scanf("%i", &matriz[i][j]);
        }
    }
    return 0;
}

int printaDPMat(int matriz[LIN][COL], int linhas, int colunas)
{
    int i, j;

    for (i = 1; i < linhas; i++)
    {
        printf("%i\n", matriz[i][i]);
    }

    return 0;
}
