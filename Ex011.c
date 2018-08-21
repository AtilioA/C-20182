// j) Faça um programa para ler 2 números inteiros e calcular a soma de suas raízes quadradas.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n1, n2;
    float somaraiz;

    printf("Informe o primeiro numero: ");
    scanf("%i", &n1);
    printf("Informe o segundo numero: ");
    scanf("%i", &n2);

    somaraiz = sqrt(n1) + sqrt(n2);

    printf("A soma das raizes dos numeros eh igual a %g.", somaraiz);

    return 0;
}