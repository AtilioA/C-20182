// // 8. Faça um programa que calcule a soma S dos termos da sequência
// abaixo, até que S assuma um valor mais próximo possível de um
// limite dado como entrada.

/* PRIMEIRA TENTATIVA:

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int lim, i;
    float s = 0, controlaSoma;

    printf("Informe o limite para S: ");
    scanf("%i", &lim);

    for(i = 0; s < lim; ++i)
    {
        printf("e^%i + ", i);
        s += exp(i);
    }

    printf("0 = %g. Fim da soma.\n", s);
    printf("Termos da soma: %i. S: %.6f", i, s);

    return 0;
}

*/
