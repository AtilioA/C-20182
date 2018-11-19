/* 1) Crie um programa que:
(a) Aloque dinamicamente um array de N números inteiros;
(b) Peça para o usuário para digitar os N números no espaço alocado;
(c) Imprima na tela os N números;
(d) Libere a memória alocada
*/

#include <stdio.h>
#include <stdlib.h>

void leArray(int *array, int tam);
void printaArray(int *array, int tam);

int main()
{
    int N, *array;

    printf("Informe o tamanho do array: ");
    scanf("%i", &N);

    array = (int *)malloc(N * sizeof(int));

    leArray(array, N);
    printaArray(array, N);

    free(array);

    return 0;
}

void leArray(int *array, int tam)
{
    int i;

    printf("Informe os valores do array:\n");
    for (i = 0; i < tam; i++)
    {
        scanf("%i", &array[i]);
    }
}

void printaArray(int *array, int tam)
{
    int i;

    printf("\n");
    for (i = 0; i < tam; i++)
    {
        printf("%i ", array[i]);
    }
    printf("\n");
}
