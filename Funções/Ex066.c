// 1. Escreva uma função recursiva que calcule o n-ésimo termo da sequência
// de Fibonacci.

#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }

    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main()
{
    int n;

    printf("Informe n: ");
    scanf("%i", &n);

    printf("n-esimo termo da sequencia de Fibonacci: %i", fibonacci(n));

    return 0;
}
