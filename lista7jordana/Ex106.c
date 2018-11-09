/* 5) Faça um programa que permita ao usuário entrar com uma matriz de 3 x 3 números
inteiros. Em seguida, gere um vetor pela soma dos números de cada coluna da matriz e
mostre esse vetor na tela. Por exemplo, a matriz:
Gerará um vetor onde cada posição é a soma das colunas da matriz. Ficando da seguinte
forma: */

#include <stdio.h>

void leMat(int matriz[3][3])
{
    int i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%i", &matriz[i][j]);
        }
    }
}

void printaMat(int matriz[3][3])
{
    int i, j;

    printf("\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%i ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n");
}

void somaCol(int matriz[3][3], int vetor[3])
{
    int i, j, somaCol = 0;

    for (i = 0; i < 3; i++)
    {
        somaCol = 0;

        for (j = 0; j < 3; j++)
        {
            somaCol += matriz[j][i];
        }

        vetor[i] = somaCol;
    }
}

void printaVet(int vetor[3])
{
    int i;

    printf("[ ");
    for (i = 0; i < 3; i++)
    {
        printf("%i ", vetor[i]);
    }
    printf("]");

    printf("\n");
}

int main()
{
    int A[3][3], somaC[3];

    leMat(A);
    printaMat(A);

    somaCol(A, somaC);
    printf("Vetor da soma das colunas da matriz:\n");
    printaVet(somaC);

    return 0;
}
