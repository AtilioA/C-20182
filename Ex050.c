// 2. Escreva uma função que receba 2 números inteiros e retorne o seu
// produto.

#include <stdio.h>
#include <stdlib.h>

int produto(int n1, int n2)
{
    int produto;
    produto = n1 * n2;

    return produto;
}


int main()
{
    int n1, n2;

    printf("Informe dois numeros: ");
    scanf("%i%i", &n1, &n2);

    printf("Produto: %i.\n", produto(n1, n2));

    return 0;
}
