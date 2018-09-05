#include <stdio.h>
#include <stdlib.h>

int main()
{
    int op, sair = 0;
    float saldo, valor;

    printf("Digite seu saldo bancario:\n");
    scanf(" %f", &saldo);

    while (sair != 1)
    {
        printf("Digite o codigo da operacao:\n");
        scanf(" %d", &op);
        switch (op)
        {
        case 1:
            printf("Digite o valor a ser DEPOSITADO:\n");
            scanf(" %f", &valor);
            saldo = saldo + valor;
            break;

        case 2:
            printf("Digite o valor a ser RETIRADO:\n");
            scanf(" %f", &valor);
            saldo = saldo - valor;
            break;

        case 3:
            printf("Saldo final:   %.2f\n", saldo);
            if (saldo > 0)
                printf("CONTA POSITIVA\n");
            else if (saldo < 0)
                printf("CONTA NEGATIVA\n");
            else
                printf("CONTA ZERADA\n");

            sair = 1;
            break;
        }
    }

    return 0;
}
