/* 15) Crie um programa para manipular vetores. O seu programa deve implementar uma
função chamada inverte_vetor, que recebe como parâmetro dois vetores V1 e V2,
ambos de tamanho N. A função deve copiar os elementos de V1 para V2 na ordem
inversa. Ou seja, se a função receber V1 = {1,2,3,4,5}, a função deve copiar os elementos
para V2 na seguinte ordem: V2 = {5,4,3,2,1}. Além disso, a função também deve retornar
o maior valor encontrado em V1. A função deve obedecer ao seguinte protótipo:
int inverte_vetor(int *v1, int *v2, int n); */

#include <stdio.h>
#include <stdlib.h>

int inverte_vetor(int *v1, int *v2, int n)
{
    int i, k;
    k = n - 1;

    for (i = 0; i < n; i++)
    {
        v2[k - i] = v1[i];
    }
}

void le_vetor(int *vetor, int n)
{
    int i;

    printf("Informe os valores do vetor:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%i", &vetor[i]);
    }
}

void printa_vetor(int *vetor, int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("%i ", vetor[i]);
    }
    printf("\n");
}

int main()
{
    int N;
    int *V1, *V2;

    printf("Informe o tamanho do vetor: ");
    scanf("%i", &N);

    V1 = (int *)malloc(N * sizeof(int));
    V2 = (int *)malloc(N * sizeof(int));

    le_vetor(V1, N);
    printf("V1: ");
    printa_vetor(V1, N);

    inverte_vetor(V1, V2, N);
    printf("V2: ");
    printa_vetor(V2, N);

    free(V1);
    free(V2);
}
