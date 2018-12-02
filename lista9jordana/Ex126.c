/* 3) Faça um programa para resolver os itens abaixo:
a) Gerar através de uma função, um vetor de N (definido como constante) componentes inteiras
cujos valores de cada componente são dados pela expressão
vetor[i] = rand()%100, i = 1, . . . , n, com n < N.
b) fornecido um número inteiro entre 0 e 100, pelo teclado, procurá-lo no vetor construído no
item a), usando o algoritmo de pesquisa linear e indicando a primeira posição do vetor que o
número se encontra. Se o número não for encontrado, emita uma mensagem com essa
informação e insira o número na primeira posição do vetor.

Entrada: Um número inteiro indicando o valor de n < 50 e um valor x a ser procurado no vetor.
Saída: A mensagem indicando que o valor x não foi encontrado e a impressão do vetor com o
valor x incluído ou o valor da posição do vetor onde o valor x foi encontrado.
Exemplos de Entrada/Saída: */

#include <stdio.h>
#include <stdlib.h>

#define N 100

void printaVet(int *vet, int n)
{
    int i;

    printf("\n");
    for (i = 0; i < n; i++)
    {
        printf("%i ", vet[i]);
    }
    printf("\n");
}

int pesquisaLinear(int *vet, int elemento, int n)
{
    int i;

    // Retorna índice se o elemento encontra-se no vetor
    for (i = 0; i < n; i++)
    {
        if (elemento == vet[i])
        {
            printf("\nO valor esta na posicao %i.\n", i);
            return i;
        }
    }

    printf("\nValor nao encontrado.");
    printaVet(vet, n);

    return -1;
}

int *geraVet(int n)
{
    int i, *vetor;

    vetor = (int *)malloc(n * sizeof(int));

    for (i = 0; i < n; i++)
    {
        vetor[i] = rand() % 100;
    }

    return vetor;
}

int main()
{
    int *vetor, elemento = -1, nAleatorios = -1; // '-1' para limitar a entrada do usuário

    // "Entrada: Um número inteiro indicando o valor de n < 50"
    while (nAleatorios < 0 || nAleatorios > 50)
    {
        printf("Informe o numero de numeros aleatorios a serem gerados para o vetor:\n");
        scanf("%i", &nAleatorios);
    }

    vetor = (int *)malloc(nAleatorios * sizeof(int));
    vetor = geraVet(nAleatorios);
    // printaVet(vetor, nAleatorios);

    while (elemento < 0 || elemento > 100)
    {
        printf("Informe um numero entre 0 e 100 para verificar se esta contido no vetor:\n");
        scanf("%i", &elemento);
    }

    pesquisaLinear(vetor, elemento, nAleatorios);

    return 0;
}
