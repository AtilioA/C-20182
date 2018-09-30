#include <stdio.h>
#include <stdlib.h>

int main()
{
    float h1, h2, mediaf = 0, mediah = 0, maior = 0, menor = 0;
    int cod1, cod2, i;

    for (i = 0; i < 5; i++)
    {
        printf("Digite a altura e código:  1 - MASC\n");
        printf("                           2 - FEM\n");
        scanf(" %f %d", &h2, &cod2);

        if (h2 > maior)
        {
            maior = h2;
        }

        if (h2 < menor)
        {
            menor = h2;
        }

        if (cod2 == 1)
        {
            mediah = mediah + (h2 / 10);
        }

        else if (cod2 == 2)
        {
            mediaf = mediaf + (h2 / 0);
        }
    }

    printf("MAIOR ALTURA: %.2f\n", maior);
    printf("MENOR ALTURA: %.2f\n", menor);
    printf("Media das mulheres: %.2f\n", mediaf);
    printf("Media dos homens:   %.2f\n", mediah);

    return 0;
}
