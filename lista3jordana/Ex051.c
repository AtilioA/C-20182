// 2. Escreva um programa para ler um valor A e um valor N. Imprimir a soma dos N números
// a partir de A (inclusive). Caso N seja negativo ou zero, deverá ser lido um novo número
// para N (só para N).

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, n, i, s, soma = 0;

    printf("Informe o valor de a: ");
    scanf("%i", &a);

    printf("Informe o valor de n: ");
    scanf("%i", &n);

    while (n <= 0)
    {
        printf("Valor de n invalido. Informe um valor positivo: ");
        scanf("%i", &n);
    }

    s = a + n;

    for(i = a; i < s; i++)
    {
        soma += i;
    }

    printf("a: %i.\nn: %i.\nTermos: %i.\nSoma: %i.\n", a, n, s - 1, soma);

    return 0;
}