// Calcular duplo fatorial/semifatorial de um número.

#include <stdio.h>
#include <stdlib.h>

int semiFatorial(int n)
{
    if (n > 1)
    {
        return n * semiFatorial(n - 2);
    }

    else
    {
        return 1;
    }
}

int main()
{
    int n;

    printf("Informe n: ");
    scanf("%i", &n);

    while (n < 0)
    {
        printf("n nao pode ser negativo. n: ");
        scanf("%i", n);
    }

    printf("Semifatorial de %i: %i.\n", n, semiFatorial(n));

    return 0;
}
