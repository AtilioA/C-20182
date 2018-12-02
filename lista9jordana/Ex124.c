/* ) Crie uma função que receba como parâmetros dois vetores de inteiros: x1 e x2 e as suas
respectivas quantidades de elementos: n1 e n2. A função deverá retornar um ponteiro para um
terceiro vetor, x3, alocado dinamicamente, contendo a união de x1 e x2 e usar o ponteiro qtd
para retornar o tamanho de x3.
Exemplo: x1 = {2, 3, 52 6, 7} e x2 = {1, 3, 4, 6, 8}, x3 irá conter {1, 3, 4, 5, 6, 7, 8}.
Assinatura da função: int* uniao(int *x1, int *x2, int n1, int n2, int* qtd); */

#include <stdio.h>
#include <stdlib.h>

int estaContido(int *x, int n, int elemento)
{
    int i;

    for (i = 0; i < n; i++)
    {
        if (elemento = x[i])
        {
            return 1;
        }
    }

    return 0;
}

int *uniao(int *x1, int *x2, int n1, int n2, int *qtd)
{
    int i, j, k = 0, *x3, n3 = 0;

    // x3 receberá todos os elementos de x1 logo de início
    x3 = (int *)malloc(n1 * sizeof(int));

    for (i = 0; i < n1; i++)
    {
        x3[i] = x1[i];
    }

    /* Checar x2 para encontrar elementos que não estejam presentes em x1 e
       adicionar estes em x1[n1 + k], k sendo a quantidade desses elementos;
       Até x3[n1], todos os espaços foram ocupados por elementos de x1, que vai até x1[n1];
       Além disso, vamos realocar x3 ao adicionar novos elementos */
    for (i = 0; i < n2; i++)
    {
        if (estaContido(x1, n2, x2[i]) == 1)
        {
            k++;
            n3 = n1 + k; // Este será o novo tamanho de x3
            x3 = (int *)malloc((n3 + 1) * sizeof(int));
            x3[n3] = x2[i];
        }
    }

    *qtd = n3;

    return x3;
}

void leVet(int v[], int n)
{
    int i;

    printf("Informe os elementos do vetor:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%i", &v[i]);
    }
}

void printaVet(int *v, int n)
{
    int i;

    printf("\n");
    for (i = 0; i < n; i++)
    {
        printf("%i ", v[i]);
    }
}

int main()
{
    int *v1, *v2, *v3, n1, n2, n3 = 0, *pn3;
    pn3 = &n3;

    printf("Informe a quantidade de elementos do primeiro vetor:\n");
    scanf("%i", &n1);
    v1 = (int *)malloc(n1 * sizeof(int));
    leVet(v1, n1);

    printf("Informe a quantidade de elementos do segundo vetor:\n");
    scanf("%i", &n2);
    v2 = (int *)malloc(n2 * sizeof(int));
    leVet(v2, n2);

    v3 = uniao(v1, v2, n1, n2, pn3);
    printaVet(v3, n3);
    // printf("\n%i\n", n3);

    return 0;
}
