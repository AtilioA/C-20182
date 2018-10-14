/* 7) Faça um programa para ler 10 números DIFERENTES a serem armazenados em um vetor.
Os dados deverão ser armazenados no vetor na ordem que forem sendo lidos, sendo
que caso o usuário digite um número que já foi digitado anteriormente, o programa
deveria pedir para ele digitar outro número. Note que cada valor digitado pelo usuário
deve ser pesquisado no vetor, verificando se ele existe entre os números que já foram
fornecidos. Exibir na tela o vetor final que foi digitado. */

#include <stdio.h>
#include <string.h>

#define LENGTH 10

int printaVet(int vet[]);
int jaOcorreu(int pos, int vet[], int n);

int main()
{
    int i, vet[LENGTH];

    printf("Informe o vetor:\n");
    for (i = 0; i < LENGTH; i++)
    {
        scanf("%i", &vet[i]);

        while (jaOcorreu(i, vet, vet[i]) == 1)
        {
            printf("Este elemento ja ocorreu no vetor. Por favor, informe outro numero:\n");
            scanf("%i", &vet[i]);
        }
    }

    printaVet(vet);

    return 0;
}

int jaOcorreu(int pos, int vet[], int n)
{
    int i, ocorr = 0;

    for (i = 0; i < pos; i++)
    {
        if (vet[i] == n)
        {
            ocorr++;
        }
    }

    if (ocorr >= 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int printaVet(int vet[])
{
    int i;

    for (i = 0; i < LENGTH; i++)
    {
        printf("[%i] ", vet[i]);
    }

    printf("\n");

    return 0;
}
