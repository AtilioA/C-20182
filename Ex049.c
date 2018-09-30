// Calcular duplo fatorial/semifatorial de um número.

#include <stdio.h>
#include <stdlib.h>

int semiFatorial(int n)
{
    int i, semiFat = 1;

    for (i = n; i > 1; i -= 2)
    {
        semiFat = (semiFat * i);
    }

    printf("semiFat: %i.", semiFat);

    return semiFat;
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

    semiFatorial(n);

    return 0;
}
