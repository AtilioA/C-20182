// 1. Leia um conjunto de 10 notas de alunos. Calcule e exiba a
// média destas notas. Em seguida exiba apenas as notas que são
// maiores do que a média calculada.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    float notas[5], total = 0, media;

    for (i = 0; i < 5; i++)
    {
        printf("Informe a %i nota: ", i + 1);
        scanf("%f", &notas[i]);
        total += notas[i];
    }

    int tamanho = sizeof(notas) / sizeof(notas[0]);
    media = total / tamanho;

    printf("%i notas lidas. Media das notas: %g.\n", tamanho, media);

    printf("Notas acima da media:\n");

    for (i = 0; i < 5; i++)
    {
        if (notas[i] > media)
        {
            printf("%g.\n", notas[i]);
        }
    }

    return 0;
}
