/* 5) Fazer um programa para ler um vetor de inteiros positivos de 50 posições. Imprimir
a quantidade de números primos presentes nele.
*/

#include <stdio.h>
#include <string.h>

int ehPrimo(int);
int ehPrimo2(int);

int main()
{
    int i, primos = 0, n[100];

    printf("Informe um vetor de 50 inteiros: ");
    for (i = 0; i < 50; i++)
    {
        scanf("%i", &n[i]);
        if (ehPrimo2(n[i]) == 1)
        {
            primos++;
        }
    }

    printf("Quantidade de números primos deste vetor: %i.\n", primos);

    return 0;
}

int ehPrimo(int n)
{
    if (n == 2 || n == 3 || n == 5 || n == 7)
    {
        return 1;
    }

    else if (n < 2)
    {
        return 0;
    }

    else if (n % 2 != 0 && n % 3 != 0 && n % 5 != 0 && n % 7 != 0)
    {
        return 1;
    }

    else
    {
        return 0;
    }
}

int ehPrimo2(int n)
{
    int i, divs;

    if (n < 2)
    {
        return 0;
    }

    for (i = 2; i <= n / 2; ++i)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }

    return 1;
}