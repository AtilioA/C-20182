// 4) Faça um programa para exibir e calcular a soma dos N primeiros termos da sequência
// de Fibonacci. Esta sequência começa com os termos 1 e 1 e, a partir do terceiro termo,
// os termos são calculados pela soma dos dois termos anteriores: 1, 1, 2, 3, 5, 8, 13, 21, 34, ...
// Bônus: sequência negativa 🤔

#include <stdio.h>
#include <stdlib.h>

int fibonnaci(int n)
{
    if (n == 1 || n == 2)
        return 1;
    else
        return fibonnaci(n - 1) + fibonnaci(n - 2);
}

int fibonnaciN(int n)
{
    if (n == -1 || n == -2)
        return -1;
    else
        return fibonnaciN(n + 1) + fibonnaciN(n + 2);
}

int main()
{
    int n = 0, i = 0, soma = 0;

    printf("Quantos termos da sequencia de Fibonacci? ");
    scanf("%i", &n);

    if (n < 0)
        for (i = -1; i >= n; --i)
        {
            soma += fibonnaciN(i);
            printf("%i ", fibonnaciN(i));
        }

    if (n >= 0)
        for (i = 1; i <= n; ++i)
        {
            soma += fibonnaci(i);
            printf("%i ", fibonnaci(i));
        }

    if (n >= 0)
        printf("\nFim da sequencia atingido. %i termos foram exibidos.\nSoma total dos termos: %i.", n, soma);
    else
        printf("\nFim da sequencia atingido. %i TERMOS NEGATIVOS foram exibidos. AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA\nSoma total dos termos: %i.", n, soma);

    return 0;
}
