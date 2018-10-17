/* 3. 4. Faça um programa que leia uma matriz A 5x3. Crie uma
matriz B 3x5 transposta de A e imprima; */

#include <stdio.h>

#define LIN 4
#define COL 2

int leMat(int matriz[LIN][COL]);
int printaMat(int matriz[LIN][COL]);
int transposta(int matriz[LIN][COL]);

int main()
{
    int matriz[LIN][COL];

    leMat(matriz);
    printaMat(matriz);
    transposta(matriz);

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

    for (i = 0; i < LIN; i++)
    {
        for (j = 0; j < COL; j++)
        {
            printf("%i\n", matriz[i][j]);
        }
    }

    return 0;
}

int transposta(int matriz[LIN][COL])
{
    int i, j, transposta[COL][LIN];

    for (j = 0; j < COL; i++)
    {
        for (i = 0; i < LIN; i++)
        {
            transposta[i][j] = matriz[j][i];
            printf("%i", transposta[i][j]);
        }
    }

    return 0;
}