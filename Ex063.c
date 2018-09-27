// 6. Escreva uma função que receba dois valores inteiros representando,
// respectivamente, um valor de hora e um de minutos e retorne o valor
// equivalente em minutos.

#include <stdio.h>
#include <stdlib.h>

int minutos(int h, int min)
{
    int minutos;

    minutos = (h * 60) + min;

    return minutos;
}


int main()
{
    int h, min;

    printf("Informe a quantidade de horas: ");
    scanf("%i", &h);

    printf("Informe a quantidade de minutos: ");
    scanf("%i", &min);

    printf("%i horas e %i minutos são %i minutos.\n", h, min, minutos(h, min));

    return 0;
}
