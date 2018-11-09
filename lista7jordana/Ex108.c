/* 7) Escreva um programa que declare um inteiro, um float e um char, e ponteiros para
inteiro, float, e char. Leia os valores do inteiro, float e char do teclado, armazene nas
variáveis e depois associe as variáveis aos ponteiros (use &). Modifique os valores de
cada variável usando os ponteiros. Imprima os valores das variáveis antes e após a
modificação. */

#include <stdio.h>

int main()
{
    int enteiro, *penteiro;
    float floate, *pfloate;
    char xar, *pixar;

    printf("Informe o valor do enteiro: ");
    scanf(" %i", &enteiro);

    printf("Informe o valor do floate: ");
    scanf(" %f", &floate);

    printf("Informe o valor do xar: ");
    scanf(" %c", &xar);

    penteiro = &enteiro;
    pfloate = &floate;
    pixar = &xar;

    printf("%i\n%f\n%c\n", *penteiro, *pfloate, *pixar);

    *penteiro = 2832;
    *pfloate = 2832.0;
    *pixar = '2';

    printf("%i\n%f\n%c\n", *penteiro, *pfloate, *pixar);

    return 0;
}
