#include <stdio.h>

#define len 6

void sum(int *vet1)
{
    int i, soma = 0;

    for (i = 0; i < len; i++)
    {
        soma = soma + *(vet1 + i);
    }

    printf("%i\n", soma);
}

void soma(int *umInteiro)
{
    *umInteiro = 1 + 1;
}

void le(int *vet1)
{
    int i;

    for (i = 0; i < len; i++)
    {
        scanf("%i", *vet1);
    }
}

int main()
{
    int vet1[len], *pvet1;
    int umInteiro = 100;
    int *ponteiroParaInt;
    ponteiroParaInt = &umInteiro;
    soma(umInteiro);
    printf("%i\n%i\n", umInteiro, *ponteiroParaInt);

    //*pvet1 = vet1;

    le(vet1);

    sum(vet1);

    return 0;
}
