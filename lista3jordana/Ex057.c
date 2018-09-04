// 8) Faça um programa que apresente um menu de opções para o cálculo das seguintes
// operações entre dois números:
// Adição (opção 1)
// subtração (opção 2)
// multiplicação (opção 3)
// divisão (opção 4).
// saída (opção 5)
// O programa deve possibilitar ao usuário a escolha da operação desejada, a exibição do
// resultado e a volta ao menu de opções. O programa só termina quando for escolhida a
// opção de saída (opção 5).

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a = 0, b = 0, op = 0;

    while (op != 5)
    {
        printf("Insira os valores para A e B:\n");
        scanf("%i%i", &a, &b);

        while (b == 0)
        {
            printf("B deve ser diferente de 0. Insira os valores para A e B:\n");
            scanf("%i%i", &a, &b);
        }

        printf("1 - adicao\n");
        printf("2 - subtracao\n");
        printf("3 - multiplicacao\n");
        printf("4 - divisao\n");
        printf("5 - saida\n");

        scanf("%i", &op);

        switch (op)
        {
            case 1:
                printf("\nSoma: %i.\n", a + b);
                break;
            case 2:
                printf("\nSubtracao: %i.\n", a - b);
                break;
            case 3:
                printf("\nMultiplicacao: %i.\n", a * b);
                break;
            case 4:
                printf("\nDivisao: %i.\n", a / b);
                break;
        }
    }

    return 0;
}
