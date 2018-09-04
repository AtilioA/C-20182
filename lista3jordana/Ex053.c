// 4. Escreva um programa para ler dois valore inteiros e imprimir o resultado da divisão do
// primeiro pelo segundo. Se o segundo valor informado for ZERO, deve ser impressa a
// mensagem VALOR INVÁLIDO e lido um novo valor. Ao final do programa deve ser
// impressa a seguinte mensagem: DESEJA REALIZAR OUTRO CÁLCULO (S/N)?
// Se a resposta for S o programa deverá retornar ao começo, caso contrário deverá
// encerrar a sua execução imprimindo quantos cálculos foram feitos.

// ints n1 e n2
// char resp = 'S'

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, div;
    char resp = 'S';

    while (resp != 'N' && resp != 'n')
    {
        printf("Informe o valor do primeiro numero: ");
        scanf("%i", &n1);    

        printf("Informe o valor do segundo numero: ");
        scanf("%i", &n2);

        while (n2 == 0)
        {
            printf("VALOR INVALIDO (divisao por zero) Informe o valor do primeiro numero: ");
            scanf("%i", &n2);    
        }    

        div = n1 / n2;
        printf("%i.\n", div);

        printf("DESEJA REALIZAR OUTRO CÁLCULO? (S/N)\n");
        scanf(" %c", &resp);
    }

    return 0;
}