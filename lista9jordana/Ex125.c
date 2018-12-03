/* 2) Crie uma função que receba como parâmetros dois vetores de inteiros: x1 e x2 e as suas
respectivas quantidades de elementos: n1 e n2. A função deverá retornar um ponteiro para um
terceiro vetor, x3, alocado dinamicamente, contendo a intersecção de x1 e x2 e usar o ponteiro
qtd para retornar o tamanho de x3.
Exemplo x1 = {1, 3, 5, 6, 7} e x2 = {1, 3, 4, 6, 8}, x3 irá conter {1, 3, 6}.
Assinatura da função: int* interseccao(int *x1, int *x2, int n1, int n2, int *qtd); */

#include <stdio.h>
#include <stdlib.h>

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

int estaContido(int *x, int elemento, int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        if (elemento == x[i])
        {
            return 1;
        }
    }

    return 0;
}

// Altera vetor diretamente usando ponteiro
void boaSort(int *sortear, int *sortido, int n)
{
    int i = 0, j = 0, aux;

    // "Inicializa" (não sei se é realmente necessário)
    for (i = 0; i < n; i++)
    {
        sortido[i] = sortear[i];
    }

    for (j = 0; j < n; j++)
    {
        for (i = 0; i < n - 1; i++)
        {
            if (sortear[i] > sortear[i + 1])
            {
                sortido[i] = sortear[i + 1];
                sortido[i + 1] = sortear[i];
            }
        }
    }
}

// Cria vetor ordenado e retorna
int *boaSort2(int *sortear, int n)
{
    int i = 0, j = 0, aux;
    int *sortido;

    sortido = (int *)malloc(n * sizeof(int));

    // "Inicializa" (não sei se é realmente necessário)
    for (i = 0; i < n; i++)
    {
        sortido[i] = sortear[i];
    }

    for (j = 0; j < n; j++)
    {
        for (i = 0; i < n - 1; i++)
        {
            if (sortear[i] > sortear[i + 1])
            {
                sortido[i] = sortear[i + 1];
                sortido[i + 1] = sortear[i];
            }
        }
    }

    return sortido;
}

// desisto
// int verificaRepetidos(int *x, int elemento, int n)
// {
//     int i;

//     for (i = 0; i < n; i++)
//     {
//         if (estaContido(x, elemento, n) == 1)
//         {
//             return i;
//         }
//     }

//     return 0;
// }

// int *removeRepetidos(int *x, int n)
// {
//     int i, k, posicao;

//     for (i = 0; i < n; i++)
//     {
//         k = (verificaRepetidos(x, x[i], n));
//         if (k != 0)
//         {
//             for (posicao = k; posicao < n - 1; posicao++)
//             {
//                 printf("pinto");
//                 x[posicao] = x[posicao + 1];
//             }
//         }
//     }

//     return x;
// }

int *interseccao(int *x1, int *x2, int n1, int n2, int *qtd)
{
    int i, k = 0, *x3, n3 = 0;

    x3 = (int *)malloc(1 * sizeof(int));

    /* Checar x2 para encontrar elementos que estejam presentes em x1 e
       adicionar estes em x3[k], k sendo a quantidade desses elementos;
       Além disso, vamos realocar x3 ao adicionar novos elementos
       Tá incompleto? Tá. Tá errado? Também. */
    for (i = 0; i < n2; i++)
    {
        if (estaContido(x1, x2[i], n1))
        {
            x3 = realloc(x3, (k + 1) * sizeof(int));
            x3[k] = x2[i];
            k++;
        }
    }

    // x3 = removeRepetidos(x3, n3);

    *qtd = k;

    return x3;
}

int main()
{
    int *v1, *v2, *v3, n1, n2, n3;
    int *v3Ordenado, *v3Ordenado2;

    printf("Informe a quantidade de elementos do primeiro vetor:\n");
    scanf("%i", &n1);
    v1 = (int *)malloc(n1 * sizeof(int));
    leVet(v1, n1);

    printf("Informe a quantidade de elementos do segundo vetor:\n");
    scanf("%i", &n2);
    v2 = (int *)malloc(n2 * sizeof(int));
    leVet(v2, n2);

    v3 = interseccao(v1, v2, n1, n2, &n3);
    // printaVet(v3, n3);

    v3Ordenado = (int *)malloc(n3 * sizeof(int));
    boaSort(v3, v3Ordenado, n3);
    printaVet(v3Ordenado, n3);

    // v3Ordenado2 = boaSort2(v3, n3);
    // printaVet(v3Ordenado2, n3);

    return 0;
}
