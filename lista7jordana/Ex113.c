/* 12) Implemente uma função que receba como parâmetro um array de números reais de
tamanho N e retorne quantos números negativos há nesse array. Essa função deve
obedecer ao protótipo:
int negativos(float *vet, int N); */

#include <stdio.h>

int negativos(float *vet, int N) // ???
{
    int i, nNegativos = 0;

    for (i = 0; i < N; i++)
    {
        printf("abracadabra");
        printf("%i\n", *(vet+i));
        if (vet[i] < 0)
        {
            nNegativos++;
        }
    }

    printf("O vetor possui %i numeros negativos.\n", nNegativos);

    return nNegativos;
}

void leVet(int N, float *vet[N])
{
    int i;

    printf("Informe os %i valores do vetor: ", N);
    for (i = 0; i < N; i++)
    {
        scanf("%i", &vet[i]);
    }
}

void printaVet(int N, float *vet[N])
{
    int i;

    for (i = 0; i < N; i++)
    {
        printf("%i ", vet[i]);
    }
    printf("\n");
}

int main()
{
    int N, negativ = 0;

    printf("Informe o tamanho do vetor: ");
    scanf("%i", &N);

    float *vetor;

    leVet(N, &vetor);
    printaVet(N, &vetor);

    negativ = negativos(vetor, N);

    printf("%i\n", negativos);

    return 0;
}
