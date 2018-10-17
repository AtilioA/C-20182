/* 3. Faça um programa que leia uma matriz A 5x5 e imprima
sua diagonal secundária. */

#include <stdio.h>

#define LIN 3
#define COL 3

int leMat(int matriz[LIN][COL]);
int printaDSMat(int matriz[LIN][COL]);

int main()
{
    int matriz[LIN][COL];

    leMat(matriz);
    printaDSMat(matriz);

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

int printaDSMat(int matriz[LIN][COL])
{
    int i, j;

    for (i = LIN, j = 0; i > 0, j < COL; i--, j++)
    {
        printf("%i\n", matriz[i][j]);
    }

    return 0;
}
