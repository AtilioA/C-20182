<<<<<<< HEAD
// 1. Escreva uma função que receba um número inteiro e retorne o seu
// antecessor.
=======
// Calcular duplo fatorial/semiFatorial de um número.
>>>>>>> 276d982c016e564440a1aa123661384b0fe196b7

#include <stdio.h>
#include <stdlib.h>

<<<<<<< HEAD
int antecessor(int n)
{
    int antecessor;

    antecessor = n - 1;
    return antecessor;
}

=======
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
>>>>>>> 276d982c016e564440a1aa123661384b0fe196b7

int main()
{
    int n;

<<<<<<< HEAD
    printf("Informe um numero: ");
    scanf("%i", &n);

    printf("Antecessor: %i.\n", antecessor(n));
=======
    printf("Informe n: ");
    scanf("%i", &n);

    while (n < 0)
    {
        printf("n nao pode ser negativo. n: ");
        scanf("%i", n);
    }

    semiFatorial(n);
>>>>>>> 276d982c016e564440a1aa123661384b0fe196b7

    return 0;
}
