#include <stdio.h>

#define tam 100

void inicializaVetor(int *vet, int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        vet[i] = i;
    }
}

int main()
{
    int i, n, v[tam] = {0};

    printf("Forneca um valor de n: ");
    scanf("%i", &n);
    inicializaVetor(v, n);
    printf("Vetor v:\n");

    for (i = 0; i < n; i++)
    {
        printf("%i ", v[i]);
    }

    return 0;
}
