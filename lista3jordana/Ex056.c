// 7. Faça um programa que simula o lançamento de dois dados, d1 e d2, n vezes, e tem como
// saída o número de cada dado e a relação entre eles (>,<,=) de cada lançamento.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d1, d2, i, n;

    printf("Informe o numero de vezes: ");
    scanf("%i", &n);

    for(i = 0; i < n; i++)
    {
    printf("d1: ");
    scanf("%i", &d1);

    printf("d2: ");
    scanf("%i", &d2);

    if (d1 > d2)
        printf("d1 (%i) > d2 (%i)\n", d1, d2);
        
    else if (d1 < d2)
        printf("d1 (%i) < d2 (%i)\n", d1, d2);

    else
        printf("d1 (%i) = d2 (%i)\n", d1, d2);
    }

    return 0;
}
