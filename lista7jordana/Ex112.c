/* 10) Crie um programa que contenha um array de inteiros contendo 5 elementos. Utilizando
apenas aritmetica de ponteiros, leia os valores desse array do teclado e imprima o dobro
de cada valor lido. */

#include <stdio.h>
#include <stdlib.h>

void readArray(int arado[5])
{ // nossa como euy seui ingleis
    int i;

    printf("Informe os valores do array:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%i", &arado[i]);
    }
}

void printArray(int arado[5])
{
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("%i\n", arado[i]);
    }
    printf("\n");
}

void doubleArray(int arado[5])
{
    int i;

    for (i = 0; i < 5; i++)
    {
        *(arado + i) = *(arado + i) * 2;
    }
}

int main()
{
    int *pontedoArray;

    pontedoArray = (int *)malloc(5 * sizeof(int));

    readArray(pontedoArray);

    doubleArray(pontedoArray);
    printArray(pontedoArray);

    return 0;
}
