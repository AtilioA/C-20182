/* 3) Faça um programa que leia dois números M e N e:
a) Crie dinamicamente e preencha uma matriz de inteiros M x N*;
b) Localize os três maiores números da matriz e mostre a linha e a coluna onde estão.
c) Crie dinamicamente e construa a matriz transposta N X M de inteiros. */

#include <stdio.h>
#include <stdlib.h>

void mallocaMatriz(int ***M, int l, int c);
void leMat(int **M, int l, int c);
void printaMat(int **M, int l, int c);

int main()
{
    int **matriz;
    int M, N;

    printf("Informe o tamanho da matriz [M x N]: ");
    scanf("%i %i", &N, &M);

    mallocaMatriz(&matriz, M, N);
    leMat(matriz, M, N);
    printaMat(matriz, M, N);

    free(matriz);
    return 0;
}

// vsf
void mallocaMatriz(int ***M, int l, int c)
{
    int i;

    **M = malloc(l * sizeof(int *));

    for (i = 0; i < c; i++)
    {
        *M[i] = (int *)malloc(c * sizeof(int));
    }
}


// olha ta foda
void maiores(int **M, int l, int c)
{
    int i, j, k, p = 0, *maiores, maior = 0, qtd = 3;

    maiores[0] = M[0][0];

    for (qtd = 0; qtd < 2; qtd++)
    {
        for (k = 0; k < l; k++)
        {
            for (p = 0; p < c; p++)
            {
                for (i = 0; i < l; i++)
                {
                    for (j = 0; j < c; j++)
                    {
                        if (M[k][p] > M[l][c])
                        {
                            maior++;
                        }
                    }
                }
            }
        }
        // if maior >
    }
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
