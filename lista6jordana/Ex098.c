/* 8. Faça um programa que lê um vetor de 3 elementos e uma matriz de 3 x 3 elementos.
Em seguida o programa deve fazer a multiplicação do vetor pelas colunas da matriz */

#include <stdio.h>

#define LIN 3
#define COL 3

int leMat(int matriz[LIN][COL])
{
    int i, j;

    for (i = 0; i < LIN; i++)
    {
        for (j = 0; j < COL; j++)
        {
            printf("a%i,%i: ", i + 1, j + 1);
            scanf("%i", &matriz[i][j]);
        }
    }

    return matriz[i][j];
}

int leVet(int vet[LIN])
{
    int i, j;

    for (i = 0; i < LIN; i++)
    {
        scanf("%i", &vet[i]);
    }

    return vet[i];
}

void printaMat(int matriz[LIN][COL])
{
    int i, j;

    printf("\n");

    for (i = 0; i < LIN; i++)
    {
        for (j = 0; j < COL; j++)
        {
            printf("%i ", matriz[i][j]);
        }
        printf("\n");
    }
}

void printaVet(int vet[LIN])
{
    int i, j;

    for (i = 0; i < LIN; i++)
    {
        printf("%i ", vet[i]);
    }

    printf("\n");
}

int vetXMat(int matriz[LIN][COL], int vet[LIN])
{
    int i, j;

    for (i = 0; i < LIN; i++)
    {
        for (j = 0; j < COL; j++)
        {
            matriz[i][j] = vet[i] * matriz[i][j];
            printf("%i ", matriz[i][j]);
        }
        printf("\n");
    }

    return matriz[i][j];
}

int main()
{
    int A[LIN][COL], b[LIN];

    printf("Insira uma matriz 3x3:\n");
    leMat(A);
    printaMat(A);
    printf("Insira um vetor de tamanho 3:\n");
    leVet(b);
    printaVet(b);

    printf("Colunas da matriz multiplicadas pelo vetor:\n");
    vetXMat(A, b);

    return 0;
}
