/* 3) Faça um programa que leia dois números M e N e:
a) Crie dinamicamente e preencha uma matriz de inteiros M x N*;
b) Localize os três maiores números da matriz e mostre a linha e a coluna onde estão.
c) Crie dinamicamente e construa a matriz transposta N X M de inteiros. */

#include <stdio.h>
#include <stdlib.h>

int *alocaLinha(int nLinhas);
int **mallocaMatriz(int l, int c);
void maiores(int **M, int *maiores, int *posicoes, int l, int c);
int tresMaiores(int **M, int l, int c, int maior);
void transpoeDinamica(int **mOriginal, int **mTransposta, int l, int c);
void printaVet(int V[], int t);
void printaMat(int **M, int l, int c);
void leMat(int **M, int l, int c);

int main()
{
    int M, N, **matriz, **transposta, *maior, *posicoes;

    printf("Informe o tamanho da matriz [M x N]: ");
    scanf("%i %i", &M, &N);

    matriz = mallocaMatriz(M, N); // opora
    transposta = mallocaMatriz(N, M);

    leMat(matriz, M, N);
    printaMat(matriz, M, N);

    transpoeDinamica(matriz, transposta, M, N);
    printaMat(transposta, N, M);

    maior = (int *)malloc(4 * sizeof(int));
    posicoes = (int *)malloc(10 * sizeof(int));
    maiores(matriz, maior, posicoes, M, N);

    for (int i = 0; i < N; i++)
    {
        free(matriz[i]);
    }
    free(matriz);
    free(maior);
    free(posicoes);
    return 0;
}

int *alocaLinha(int l)
{
    int *linha;
    linha = (int *)malloc(l * sizeof(int));

    return linha;
}

int **mallocaMatriz(int l, int c)
{
    int i;

    int **matriz = malloc(c * sizeof(int *));

    for (i = 0; i < c; i++)
    {
        matriz[i] = alocaLinha(l);
    }

    return matriz;
}

void maiores(int **M, int *maiores, int *posicoes, int l, int c)
{
    int i, j, k, maior, qtd = 0;

    printf("foi");

    maiores[qtd] = M[0][0];
    maior = M[0][0];
    posicoes[qtd] = 0;
    posicoes[qtd + 1] = 0;

    printf("foi!");

    for (k = 0; k < 3; k++)
    {
        for (i = 0; i < l; i++)
        {
            for (j = 0; j < c; j++)
            {
                if (M[i][j] > maior)
                {
                    if (tresMaiores(M, l, c, M[i][j]))
                    { // Guarda elemento e posição
                        maior = M[i][j];
                        maiores[qtd] = maior;
                        posicoes[qtd] = i;
                        posicoes[qtd + 1] = j;

                        qtd++;
                    }
                }
            }
        }
    }

    printf("\nfui.\n");
    printaVet(maiores, qtd);
}

int tresMaiores(int **M, int l, int c, int maior)
{
    int i, j, outrosMaiores;

    for (i = 0; i < l; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (maior < M[i][j])
            {
                outrosMaiores++;
            }
        }
    }

    if (outrosMaiores < 3)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void transpoeDinamica(int **mOriginal, int **mTransposta, int l, int c)
{
    int i, j;

    for (i = 0; i < l; i++)
    {
        for (j = 0; j < c; j++)
        {
            mTransposta[i][j] = mOriginal[j][i];
        }
    }
}

void printaVet(int V[], int t)
{
    int i;

    printf("\n");
    for (i = 0; i < t; i++)
    {
        printf("%i ", V[i]);
    }
    printf("\n");
}

void printaMat(int **M, int l, int c)
{
    int i, j;

    for (i = 0; i < l; i++)
    {
        printf("\n");

        for (j = 0; j < c; j++)
        {
            printf("%i ", M[i][j]);
        }

        printf("\n");
    }
}

void leMat(int **M, int l, int c)
{
    int i, j;

    for (i = 0; i < l; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%i", &M[i][j]);
        }
    }
}
