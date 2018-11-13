/* 13) Crie uma função para somar dois arrays. Esta função deve receber dois arrays e retornar
a soma em um terceiro array. Caso o tamanho do primeiro e segundo array seja
diferente então a função retornará ZERO (0). Caso a função seja concluída com sucesso
a mesma deve retornar o valor UM (1). Utilize aritmética de ponteiros para manipulação
do array. */

#include <stdio.h>
#include <stdlib.h>

// merdaaaaaaaaaaaaaaaaaaaaa

void leArray(int *V, int t)
{
    int i;

    printf("Informe os valores do primeiro array:\n");
    for (i = 0; i < t; i++)
    {
        scanf("%i", &V[i]);
    }
}

int somaArray(int A[], int tA, int B[], int tB, int *S)
{
    int i;

    if (tA != tB)
    {
        printf("\n\n0\n");
        return 0;
    }

    else
    {
        S = (int *)malloc(tA * sizeof(int));

        for (i = 0; i < tA; i++)
        {
            *(S + i) = *(A + i) + *(B + i);
        }

        printf("\n\n1\n");
        free(S);
        return 1;
    }
}

void printaArray(int A[], int tA)
{
    int i;

    for (i = 0; i < tA; i++)
    {
        printf("%i ", A[i]);
    }
}

int main()
{
    int *A, tA, *B, tB, *S;

    printf("Informe o tamanho do primeiro array: ");
    scanf("%i", &tA);
    A = (int *)malloc(tA * sizeof(int));

    leArray(A, tA);
    printaArray(A, tA);

    printf("Informe o tamanho do segundo array: ");
    scanf("%i", &tB);
    B = (int *)malloc(tB * sizeof(int));

    leArray(B, tB);
    printaArray(B, tB);

    somaArray(A, tA, B, tB, S);
    printaArray(S, tA);
}
