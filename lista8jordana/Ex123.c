/* 5) Desenvolva um programa que calcule a soma de duas matrizes MxN de números reais.
A implementação deste programa deve considerar as dimensões fornecida pelo usuário. */

#include <stdio.h>
#include <stdlib.h>

void printaMat(float **A, int M, int N);
void somaMat(float **A, float **B, float **S, int M, int N);
void leMat(float **A, int M, int N);

int main()
{
    int i, M, N;
    float **matriz1, **matriz2, **soma;

    printf("Informe o tamanho das matrizes: ");
    scanf("%i%i", &M, &N);

    matriz1 = (float **)malloc(M * sizeof(float *));

    for (i = 0; i < M; i++)
    {
        matriz1[i] = (float *)malloc(N * sizeof(float));
    }

    matriz2 = (float **)malloc(M * sizeof(float *));

    for (i = 0; i < M; i++)
    {
        matriz2[i] = (float *)malloc(N * sizeof(float));
    }

    soma = (float **)malloc(M * sizeof(float *));

    for (i = 0; i < M; i++)
    {
        soma[i] = (float *)malloc(N * sizeof(float));
    }

    printf("Informe os valores da primeira matriz:\n");
    leMat(matriz1, M, N);

    printf("Informe os valores da segunda matriz:\n");
    leMat(matriz2, M, N);

    somaMat(matriz1, matriz2, soma, M, N);
    printaMat(soma, M, N);

    return 0;
}

void somaMat(float **A, float **B, float **S, int M, int N)
{
    int i, j;

    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            S[i][j] = A[i][j] + B[i][j];
        }
    }
}

void printaMat(float **A, int M, int N)
{
    int i, j;

    for (i = 0; i < M; i++)
    {
        printf("\n");
        for (j = 0; j < N; j++)
        {
            printf("%g ", A[i][j]);
        }
        printf("\n");
    }
}

void leMat(float **A, int M, int N)
{
    int i, j;

    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            scanf("%f", &A[i][j]);
        }
    }
}
