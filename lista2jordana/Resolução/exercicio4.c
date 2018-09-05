#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, soma = 2, fib, fib1 = 1, fib2 = 1;

    printf("Digite a quantidade de termos na sequencia:\n");
    scanf(" %d", &n);
    printf("\n");

    if (n == 1)
    {
        printf("%d\n", fib1);
        soma = 1;
    }
    else if (n == 2)
    {
        printf("%d\n", fib1);
        printf("%d\n", fib2);
        soma = 2;
    }
    else
    {
        printf("%d\n", fib1);
        printf("%d\n", fib2);

        for (i = 1; i < n - 1; i++)
        {
            fib = fib1 + fib2;
            fib1 = fib2;
            fib2 = fib;
            printf("%d\n", fib);
            soma = soma + fib;
        }
    }
    
    printf("%d\n", soma);

    return 0;
}