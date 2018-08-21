// i) Determinar o número de cédulas de cada tipo (1, 2, 5, 10, 20, 50 e 100) para pagar uma quantia em reais, lida pelo teclado.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quantia, quantiaux, c1, c2, c5, c10, c20, c50, c100;

    printf("Informe a quantia em reais: ");
    scanf("%i", &quantia);

    quantiaux = quantia;
    c100 = (quantiaux / 100);
    quantiaux %= 100;
    c50 = (quantiaux / 50);
    quantiaux %= 50;
    c20 = (quantiaux / 20);
    quantiaux %= 20;
    c10 = (quantiaux / 10);
    quantiaux %= 10;
    c5 = (quantiaux / 5);
    quantiaux %= 5;
    c2 = (quantiaux / 2);
    quantiaux %= 2;
    c1 = (quantiaux);

    printf("O valor de %i reais pode ser pago com %i cedula(s) de R$100, %i cedula(s) de R$50, %i cedula(s) de R$20, %i cedula(s) de R$10, %i cedula(s) de R$5, %i cedula(s) de R$2 e %i cedula(s) de R$1. \n", quantia, c100, c50, c20, c10, c5, c2, c1);
    return 0;
}