/* 11) Escreva uma função que aceita como parâmetro um array de inteiros com N valores
e determine o maior elemento do array e o número de vezes que este elemento ocorreu
no array. Por exemplo, para um array com os seguintes elementos: 5, 2, 15, 3, 7, 15, 8,
6, 15, a função deve retorna para o programa que a chamou o valor 15 e o número 3
(indicando que o número 15 ocorreu 3 vezes). A função deve ser do tipo void. */

#include <stdio.h>

void maiorDoArray(int t, int array[t], int *maiorElem, int *vezesMaior)
{
    int i;

    *maiorElem = array[0];

    for (i = 0; i < t; i++)
    {
        if (array[i] > *maiorElem)
        {
            *maiorElem = array[i];
        }
        else if (array[i] == *maiorElem)
        {
            ++*vezesMaior;
        }
    }
}

void leArray(int t, int array[t])
{
    int i;

    printf("Informe os elementos do array:\n");

    for (i = 0; i < t; i++)
    {
        scanf("%i", &array[i]);
    }
}

int main()
{
    int t, maiorElem, vezesMaior = 0;

    printf("Informe o tamanho do array: ");
    scanf("%i", &t);

    int array[t];

    leArray(t, array);

    maiorDoArray(t, array, &maiorElem, &vezesMaior);

    printf("O numero %i ocorreu %i vezes.\n", maiorElem, vezesMaior);

    return 0;
}
