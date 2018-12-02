/* 4) Faça um programa para ler uma quantidade N do teclado, assim como N números inteiros e
armazená-los em um vetor A. Ao final, verifique se os itens (inteiros) de A formam uma
progressão aritmética. Imprima a razão se for uma progressão aritmética, ou “NAO” caso
contrário.
Entrada: um número inteiro N representando uma quantidade de números, seguido de N
números inteiros, todos separados por espaço.
Saída: Imprima a razão se for uma progressão aritmética, ou “NAO” caso contrário. */

#include <stdio.h>
#include <stdlib.h>

int ehPA(int v[], int n)
{
    int i, razao;
    char eh;

    if (n <= 1)
    {
        printf("\nNAO\n");
        return 0;
    }

    razao = v[0] - v[1]; // não precisa necessariamente do abs()

    for (i = 1; i < n - 1; i++)
    {
        if ((v[i] - v[i + 1]) != razao)
        {
            printf("\nNAO\n");
            return 0;
        }
    }

    printf("\nRazao: %i\n", -razao);
    return 1;
}

void leVet(int v[], int n)
{
    int i;

    printf("Informe os %i elementos:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%i", &v[i]);
    }
}

void printaVet(int v[], int n)
{
    int i;

    printf("\n", n);
    for (i = 0; i < n; i++)
    {
        printf("%i ", v[i]);
    }
}

int main()
{
    int N, razao;

    printf("Informe a quantidade de numeros:\n");
    scanf("%i", &N);
    int vetor[N];

    leVet(vetor, N);
    printaVet(vetor, N);
    ehPA(vetor, N);

    return 0;
}
