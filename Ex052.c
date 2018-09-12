// 1. Escreva uma função que receba um número inteiro e retorne o seu
// antecessor.

#include <stdio.h>
#include <stdlib.h>

int antecessor(int n)
{
    int antecessor;

    antecessor = n - 1;
    return antecessor;
}


int main()
{
    int n;

    printf("Informe um numero: ");
    scanf("%i", &n);

    printf("Antecessor: %i.\n", antecessor(n));

    return 0;
}
