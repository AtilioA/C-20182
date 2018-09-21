// 4. Escreva uma função que receba 3 números reais (ponto flutuante) e
// retorne a sua média aritmética.

#include <stdio.h>
#include <stdlib.h>

float mediaFloat(float n1, float n2, float n3)
{
    float media;

    media = (n1 + n2 + n3) / 3;

    return media;
}


int main()
{
    float n1, n2, n3;

    printf("Informe os tres numeros: ");
    scanf("%f%f%f", &n1, &n2, &n3);

    printf("Media dos tres numeros: %g.\n", mediaFloat(n1, n2, n3));

    return 0;
}
