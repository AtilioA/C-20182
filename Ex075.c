// 2) Elabore uma função que permita somar os elementos de um vetor de inteiros.

#include <stdio.h>
#include <stdlib.h>

int soma_vetor(int n[])
{
    int soma = 0, i;

    for(i = 0; i < 10; i++)
    {
        soma += n[i];
    }

    return soma;
}


int main()
{
    int n[10], i;

    printf("Informe os numeros do vetor: ");
    for(i = 0; i < 10; i++)
    {
        scanf("%i", &n[i]);
    }

    printf("Soma dos elementos do vetor: %i.\n", soma_vetor(n));

    return 0;
}
