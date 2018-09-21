// 3. Escreva uma função que receba 3 números inteiros e retorne a sua média
// aritmética.

#include <stdio.h>
#include <stdlib.h>

float media(int n1, int n2, int n3)
{
    float media;
    media = (n1 + n2 + n3) / 3;
    return media;
}

int main()
{
    int n1, n2, n3;

    printf("Informe os tres numeros: ");
    scanf("%i%i%i", &n1, &n2, &n3);

    printf("Media dos tres numeros: %g.\n", media(n1, n2, n3));

    return 0;
}
