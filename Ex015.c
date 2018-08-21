// o) Faça um programa que mostre se um número inteiro é par ou ímpar.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Informe um numero inteiro: ");
    scanf("%i", &n);
    if (n % 2 == 0)
    {
        printf("O numero eh par");
    }
    else
    {
        printf("O numero eh impar");
    }

    return 0;
}