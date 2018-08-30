// 6) Escreva um programa para ler um valor A e um valor N. Imprimir a soma do N números 
// a partir de A (inclusive). Caso N seja negativo ou zero, deverá ser lido
// um novo número para N (só para N).

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, n, i, soma = 0;

    printf("Informe a: \n");
    scanf("%i", &a);

    printf("Informe n: ");
    scanf("%i", &n);

    while (n <= 0)
    {
        printf("n negativo/nulo. Informe um n positivo: ");
        scanf("%i", &n);
    }

    for(i = a; i <= n; i++)
    {
        soma += i;
        printf("%i\n", soma);
    }

    return 0;
}
