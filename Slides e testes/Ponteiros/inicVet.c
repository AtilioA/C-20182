#include <stdio.h>

#define l 10

void inicVet (int *r)
{
    int i;

    for (i = 0; i < l; i++)
    {
        r[i] = i;
    }
}

int main()
{
    int r[l], i;

    inicVet(r);

    for (i = 0; i < l; i++)
    {
        printf("Vetor inicializando: %i\n", r[i]);
    }

    return 0;
}
