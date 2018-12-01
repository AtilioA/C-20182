/* 4. Faça um programa que leia uma matriz A 5x3. Crie uma
matriz B 3x5 transposta de A e imprima; */

#include <stdio.h>

#define LIN 5
#define COL 3

int leMat(int matriz[LIN][COL]);
int printaMat(int matriz[LIN][COL]);
int transposta(int matriz[LIN][COL]);
int printaMatT(int matriz[COL][LIN]);

    int main()
{
    int matriz[LIN][COL];

    leMat(matriz);
    printf("Matriz original:\n");
    printaMat(matriz);
    printf("\n");
    printf("Matriz transposta:\n");
    transposta(matriz);
    printf("\n");

    return 0;
}

int leMat(int matriz[LIN][COL])
{
    int i, j;

    printf("Informe a matriz:\n");

    for (i = 1; i <= LIN; i++)
    {
        for (j = 1; j <= COL; j++)
        {
            printf("a%i,%i = ", i, j);
            scanf("%i", &matriz[i][j]);
        }
    }

    return 0;
}

int printaMat(int matriz[LIN][COL])
{
    int i, j;

    for (i = 1; i <= LIN; i++)
    {
        for (j = 1; j <= COL; j++)
        {
            printf("%i ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}

// ??
int transposta(int matriz[LIN][COL])
{
    int i, j, matrizT[COL][LIN];

    for (i = 1; i <= LIN; i++)
    {
        for (j = 1; j <= COL; j++)
        {
            matrizT[j][i] = matriz[i][j];
        }
    }

    printaMatT(matrizT);

    return 0;
}

int printaMatT(int matriz[COL][LIN])
{
    int i, j;

    for (i = 1; i <= COL; i++)
    {
        for (j = 1; j <= LIN; j++)
        {
            printf("%i ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
