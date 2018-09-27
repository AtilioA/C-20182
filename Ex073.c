// 4. Leia dois conjuntos de 10 números cada. Exiba a intersecção
// dos conjuntos, ou seja, os números que são repetidos nos dois
// conjuntos.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[3], b[3], c[3], i, j;

    for (i = 0; i < 3; i++)
    {
        printf("Informe o %io numero do conjunto A: ", i + 1);
        scanf("%i", &a[i]);
    }

    for (i = 0; i < 3; i++)
    {
        printf("Informe o %io numero do conjunto B: ", i + 1);
        scanf("%i", &b[i]);
    }


    // osso
    printf("Interseccao:\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (a[j] == b[i]);
            {
                c[i] = a[j];
                printf("%i\n", a[j]);
            }
        }
    }

    // if (c == NULL)
    // {
    //     printf("Nao ha interseccao.\n");
    // }

    return 0;
}
