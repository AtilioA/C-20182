// 2) Escreva um programa que solicite dois caracteres de A a Z ao usuário e imprima o número de caracteres existentes entre eles.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numerochar = 0;
    char c1, c2;

    printf("Informe o primeiro caractere: ");
    scanf(" %c", &c1);

    printf("Informe o segundo caractere: ");
    scanf(" %c", &c2);

    if (c1 != c2)
        numerochar = abs(c1 - c2) - 1;

    printf("Numero de caracteres existentes entre '%c' e '%c': %i.\n", c1, c2, numerochar);

    return 0;
}
