#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcao;
    float a, b, operacao;

    while (1)
    {
        printf("Digite os valores a serem computados:\n");
        scanf(" %f %f", &a, &b);
        printf("\nDigite o codigo da operacao:\n");
        printf("SOMA (opcao 1)\n");
        printf("SUBTRACAO (opcao 2)\n");
        printf("MULTIPLICACAO (opcao 3)\n");
        printf("DIVISAO (opcao 4)\n");
        printf("SAIDA (opcao 5)\n");
        scanf(" %d", &opcao);

        switch (opcao)
        {
        case 1:
            operacao = a + b;
            break;

        case 2:
            operacao = a - b;
            break;

        case 3:
            operacao = a * b;
            break;

        case 4:
            operacao = a / b;
            break;

        case 5:
            return 0;

        default:
            break;
        }
        printf("\n %.2f\n\n", operacao);
    }

    return 0;
}
