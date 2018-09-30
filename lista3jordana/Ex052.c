// 3. Escreva um programa para ler o saldo inicial de uma conta bancária. A seguir ler um
// número indeterminado de pares de valores indicando respectivamente o tipo da
// operação (codificado da seguinte forma: 1 – depósito; 2 – retirada; 3 – fim) e o valor.
// Quando for informado para o tipo o código 3, o programa deve ser encerrado e impresso
// o saldo final da conta com as seguintes mensagens: CONTA ZERADA, CONTA
// ESTOURADA (se o saldo for negativo) ou CONTA POSITIVA (se o saldo for positivo)

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int op = 0, ops = 0;
    float saldoInicial, valor, saldoFinal;

    printf("Informe o saldo bancario: ");
    scanf("%f", &saldoInicial);

    while (op != 3)
    {
        printf("Informe o tipo de operacao:  1 – depósito; 2 – retirada; 3 – finalizar\n");
        scanf("%i", &op);

        while (op < 0 || op > 4)
        {
            printf("Opcao invalida. Digite 1 para depósito; 2 para retirada ou 3 para finalizar\n");
           scanf("%i", &op);   
        }

        // Switch-case poderia ter sido usado

        if (op == 1)
        {
        printf("Informe o valor a ser depositado: ");
        scanf("%f", &valor);
        saldoFinal = saldoInicial + valor;
        ops += 1;
        }

        else if (op == 2)
        {
        printf("Informe o valor a ser sacado: ");
        scanf("%f", &valor);
        saldoFinal = saldoInicial - valor;
        ops += 1;
        }
    }

    if (ops == 0)
        saldoFinal = saldoInicial;

    printf("Operacao finalizada.\nSaldo final: R$%.2f.\n", saldoFinal);

    if (saldoFinal < 0)
        printf("CONTA ESTOURADA\n");
    else if (saldoFinal == 0)
        printf("CONTA ZERADA\n");
    else 
        printf("CONTA POSITIVA\n");

    return 0;
}