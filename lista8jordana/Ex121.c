/* 3) Faça um programa que leia dois números M e N e:
a) Crie dinamicamente e preencha uma matriz de inteiros M x N*;
b) Localize os três maiores números da matriz e mostre a linha e a coluna onde estão.
c) Crie dinamicamente e construa a matriz transposta N X M de inteiros. */

#include <stdio.h>
#include <stdlib.h>

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

        // printf("\n");
    }
    printf("\n");
}

int *matrizParaVetor(int **matriz, int l, int c)
{
    int i, j, vTam = 0;
    int *v;
    v = malloc(l * c * sizeof(int));

    for (i = 0; i < l; i++)
    {
        for (j = 0; j < c; j++)
        {
            v[vTam] = matriz[i][j];
            vTam++;
        }
    }

    return v;
}

int *bolhaSorteInvertidoFortnite(int *v, int tam)
{
    int i, j, aux;
    int *ordenado = v;

    for (i = 0; i < tam; i++)
    {
        for (j = 0; j < tam - 1; j++)
        {
            if (ordenado[j] < ordenado[j + 1])
            {
                aux = ordenado[j];
                ordenado[j] = ordenado[j + 1];
                ordenado[j + 1] = aux;
            }
        }
    }

    return ordenado;
}

int *nMaiores(int **matriz, int l, int c, int qtdMaiores, int *maiores, int *posMaiores)
{
    int i, j, k, p = 0;
    int maior;
    int *v, vTam = l * c;
    v = malloc(vTam * sizeof(int));

    v = matrizParaVetor(matriz, l, c);
    v = bolhaSorteInvertidoFortnite(v, vTam);

    for (k = 0; k < 3; k++)
    {
        for (i = 0; i < l; i++)
        {
            for (j = 0; j < c; j++)
            {
                if (v[k] == matriz[i][j])
                {
                    maiores[k] = matriz[i][j];
                    posMaiores[p] = i;
                    posMaiores[p + 1] = j;

                    p += 2;
                }
            }
        }
    }

    return maiores;
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

// Não funciona direito
void transpoeDinamica(int **mOriginal, int **mTransposta, int l, int c)
{
    int i, j;

    for (i = 0; i < l; i++)
    {
        for (j = 0; j < c; j++)
        {
            mTransposta[j][i] = mOriginal[i][j];
        }
    }
}

void leMat(int **M, int l, int c)
{
    int i, j;

    printf("\nInforme os elementos da matriz:\n");
    for (i = 0; i < l; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%i", &M[i][j]);
        }
    }
}

int main()
{
    int M, N, **matriz, **transposta, qtdMaiores = 3, *maiores, *posMaiores;

    printf("Informe o tamanho da matriz [M x N]: ");
    scanf("%i %i", &M, &N);

    matriz = mallocaMatriz(M, N);
    transposta = mallocaMatriz(N, M);

    leMat(matriz, M, N);
    printf("\nMatriz:");
    printaMat(matriz, M, N);

    transpoeDinamica(matriz, transposta, M, N);
    printf("\nMatriz transposta:");
    printaMat(transposta, N, M);

    maiores = (int *)malloc(qtdMaiores * sizeof(int));
    posMaiores = (int *)malloc(qtdMaiores * 2 * sizeof(int));

    maiores = nMaiores(matriz, M, N, qtdMaiores, maiores, posMaiores);

    printf("\n%i maiores elementos da matriz:", qtdMaiores);
    printaVet(maiores, qtdMaiores);
    printf("\nSuas respectivas posicoes:");
    printaVet(posMaiores, qtdMaiores * 2);

    for (int i = 0; i < N; i++)
    {
        free(matriz[i]);
    }
    for (int i = 0; i < M; i++)
    {
        free(transposta[i]);
    }
    free(matriz);
    free(transposta);
    free(maiores);
    free(posMaiores);
    return 0;
}
