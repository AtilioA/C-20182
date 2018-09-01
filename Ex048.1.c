// // 8. Faça um programa que calcule a soma S dos termos da sequência
// abaixo, até que S assuma um valor mais próximo possível de um
// limite dado como entrada.

// Consertar soma superior

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int lim, i = 0;
    float sFloor, sCeil, distFloor, distCeil, s, controlaSoma;

    printf("Informe o limite para S: ");
    scanf("%i", &lim);

    // Soma menor que o limite
    for(i = 0; sFloor <= lim; i++)
    {
        sFloor += exp(i);
        if (sFloor >= lim)
        {
            sFloor = controlaSoma;
            break;
        }
        controlaSoma = sFloor;
    }

    // Soma maior que o limite
    for(i = 0; sCeil < lim; ++i)
    {
        printf("e^%i + ", i);
        sCeil += exp(i);
    }

    // Qual soma (acima/abaixo) está menos distante do limite? 
    distCeil = abs(sCeil - lim);
    distFloor = abs(sFloor - lim);

    if (distCeil < distFloor)
        s = sCeil;
    else
        s = sFloor;

    printf("0 = %g. Fim da soma.\n", s);
    printf("Termos da soma: %i. S: %.6f\n", i, s);

    return 0;
}
