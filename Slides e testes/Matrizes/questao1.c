/*  Considere uma matriz quadrada de ordem n, com n lido pelo teclado, formada de números
naturais gerados aleatoriamente entre 0 e 10. Para gerar um valor aleatório entre 0 e 10, devese usar apropriadamente a função rand(), que é definida na biblioteca stdlib.h. Seu programa
deve alocar uma matriz dinâmica com dimensões nxn e a preencher com os valores gerados
aleatoriamente entre 0 e 10, através da função AlocaMatriz. Faça a função TrocaMatriz, que
recebe a matriz como parâmetro e troca os seus elementos de posição da seguinte forma: os
elementos acima da diagonal principal devem ser trocados pelos que estão abaixo dela,
mantendo a simetria dos elementos. A troca deve ser feita na própria matriz, não utilizando
matrizes auxiliares. Faça também uma função ImprimeMatriz, que irá ser chamada para
imprimir a nova matriz ao final do programa e irá percorrer a matriz alterada, imprimindo-a */

#include <stdio.h>
#include <stdlib.h>


void TrocaMatriz(int **matriz, int n)
{
    int i = 0, j = 0;
    int aux;

    for (i = 1; i < n; i++)
    {
        for (j = 0; j < i; j++)
        {
            aux = matriz[i][j];
            matriz[i][j] = matriz[j][i];
            matriz[j][i] = aux;
        }
    }
}

void PrintaMatriz(int **matriz, int n)
{
    int i, j;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%i ", matriz[i][j]);
        }
        puts("");
    }
    puts("");
}

int **AlocaMatriz(int n)
{
    int **matriz;
    int i, j;

    matriz = (int **)malloc(n * sizeof(int *));
    for (i = 0; i < n; i++)
    {
        matriz[i] = (int *)malloc(n * sizeof(int));
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            matriz[i][j] = rand() % 10;
        }
    }


    return matriz;
}

int main()
{
    int **matriz;
    int n;

    printf("Informe n:\n");
    scanf("%i", &n);

    matriz = AlocaMatriz(n);
    PrintaMatriz(matriz, n);
    TrocaMatriz(matriz, n);
    PrintaMatriz(matriz, n);

    for (int i = 0; i < n; i++)
    {
        free(matriz[i]);
    }
    free(matriz);
    return 0;
}
