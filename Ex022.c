/* 5) Distribuir itens para um grupo de pessoas, e exibir quem foi a última pessoa a receber um itens. 
Assuma que a distribuição é feita da seguinte forma: a pessoa 1 recebe um itens, depois a pessoa 2 
recebe um itens, e assim por diante até a pessoa n. Se ainda sobrarem itens disponíveis, o processo 
de distribuição recomeça da pessoa 1. 
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pessoas, itens, divisao;

    printf("Informe o numero de pessoas e o numero de itens: ");
    scanf("%i%i", &pessoas, &itens);

    if (itens > pessoas)
    {
        divisao = itens % pessoas;
        if (divisao == 0)
            divisao = pessoas;
        printf("A ultima pessoa a receber o item foi a de numero %i.\n", divisao);
    }

    if (itens == pessoas)
        printf("A ultima pessoa a receber o item foi a de numero %i.\n", pessoas);

    if (itens < pessoas)
        printf("A ultima pessoa a receber o item foi a de numero %i.\n", itens);
}
