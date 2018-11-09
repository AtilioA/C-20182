/* 3) Dizemos que uma matriz quadrada inteira é um quadrado mágico se a soma dos
elementos de cada linha, a soma dos elementos de cada coluna e a soma dos elementos
das diagonais principal e secundária são todas iguais. Leia uma matriz 10x10 do usuário
e imprima se ela é um quadro mágico ou não. */

#include <stdio.h>

#define I 3
#define J 3

void leMat(int matriz[I][J])
{
    int i, j;

    for (i = 0; i < I; i++)
    {
        for (j = 0; j < J; j++)
        {
            scanf("%i", &matriz[i][j]);
        }
    }
}

void printaMat(int matriz[I][J])
{
    int i, j;

    for (i = 0; i < I; i++)
    {
        for (j = 0; j < J; j++)
        {
            printf("%i ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int quadMagico(int matriz[I][J])
{
    int i, j, k, somaL = 0, antL = 0, somaC = 0, antC = 0, somaDP = 0, somaDS = 0;

    for (i = 0; i < I; i++)
    {
        somaDP += matriz[i][i];
    }

    for (j = I - 1, k = 0; j >= 0; j--, k++)
    {
        somaDS += matriz[j][k];
    }

    for (i = 0; i < I; i++)
    {
        antL = somaL;
        somaL = 0;

        for (j = 0; j < J; j++)
        {
            somaL += matriz[i][j];
        }

        if (i > 0 && somaL != antL)
        {
            return 0;
        }
    }

    for (i = 0; i < I; i++)
    {
        antC = somaC;
        somaC = 0;

        for (j = 0; j < J; j++)
        {
            somaC += matriz[j][i];
        }

        if (i > 0 && somaC != antC)
        {
            return 0;
        }
    }

    if (somaL == somaC && somaC == somaDP && somaDP == somaDS)
    {
        return 1;
    }

    return 0;
}

int main()
{
    int A[I][J];

    leMat(A);
    printaMat(A);

    if (quadMagico(A) == 1)
    {
        printf("A matriz eh um quadrado magico.\n");
    }
    else
    {
        printf("A matriz NAO eh um quadrado magico.\n");
    }

    return 0;
}
