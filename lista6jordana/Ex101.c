/* 10. Faça um programa para ler 3 matrizes A, B e C, e imprimir “IGUAL” se A vezes
B for igual a C, e imprimir “DIFERENTE” caso contrário. Lembrar que na
multiplicação de matrizes, o elemento (i,j) da matriz resultante é dado pela soma
das multiplicações elemento a elemento da linha i da primeira matriz com a coluna
j da segunda matriz.

Entrada: número de linhas de A; número de colunas de A; os elementos de A;
número de linhas de B; número de colunas de B; os elementos de B;
número de linhas de C; número de colunas de C; os elementos de C.

Saída: “IGUAL” se C corresponder ao resultado da multiplicação de A por B, ou
“DIFERENTE” caso contrário.
*/

#include <stdio.h>

#define I 2
#define J 3

void prodMat(int A[I][J], int B[I][J], int AB[I][J])
{
    int i = 0;
    int j = 0;
    int k = 0;

    for (i = 0; i < I; i++)
    {
        for (j = 0; j < I; j++)
        {
            AB[i][j] = 0;
        }
    }

    for (i = 0; i < I; i++)
    {
        for (j = 0; j < I; j++)
        {
            for (k = 0; k < I; k++)
            {
                AB[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int multMat(int A[I][J], int B[I][J], int C[I][J], int AB[I][J]) //
{
    int i, j, k, M[I][J];

    for (i = 0; i < I; i++)
    {
        for (j = 0; j < J; j++)
        {
            M[i][j] = 0;
        }
    }

    for (i = 0; i < I; i++)
    {
        for (j = 0; j < I; i++)
        {
            for (k = 0; k < I; k++)
            {
                M[i][j] += A[k][j] * B[k][j];
            }
        }
    }

    return M[I][J];
}

int comparaMat(int C[I][J], int AB[I][J])
{
    int i, j, igual = 0;

    for (i = 0; i < I; i++)
    {
        for (j = 0; j < J; j++)
        {
            if (AB[i][j] == C[i][j])
            {
                igual++;
            }
        }
    }

    if (igual == I * J)
    {
        printf("IGUAL");
        return 1;
    }
    else
    {
        printf("DIFERENTE");
        return 0;
    }
}

void leMat(int mat[I][J])
{
    int i, j;

    for (i = 0; i < I; i++)
    {
        for (j = 0; j < J; j++)
        {
            printf("a%i,%i: ", i + 1, j + 1);
            scanf("%i", &mat[i][j]);
        }
    }
}

void printaMat(int mat[I][J])
{
    int i, j;

    for (i = 0; i < I; i++)
    {
        for (j = 0; j < J; j++)
        {
            printf("%i ", mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main()
{
    int abc;

    scanf("%i", &abc);

    int ABC[abc + 1];

    int A[I][J], B[I][J], C[I][J], AB[I][J];

    printf("Informe a matriz A:\n");
    leMat(A);

    printf("Informe a matriz B:\n");
    leMat(B);

    printf("Informe a matriz C:\n");
    leMat(C);

    printaMat(A);
    printaMat(B);
    printaMat(C);
    prodMat(A, B, AB);
    printaMat(AB);
    comparaMat(C, AB);

    return 0;
}
