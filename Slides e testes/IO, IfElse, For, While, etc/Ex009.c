// 9 (dado um código e preços, calcular total a ser pago)

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float item1 = 4.00, item2 = 4.50, item3 = 5.00, item4 = 2.00, item5 = 1.50, totPreco;
    int cod, qtd;

    printf("Informe o codigo: ");
    scanf("%d", &cod);
    printf("Informe a quantidade: ");
    scanf("%d", &qtd);

    switch (cod)
    {
    case 1:
        (totPreco = (item1) * (qtd));
        printf("Total a ser pago: R$%g. \n", totPreco);
        break;
    case 2:
        totPreco = (item2 * qtd);
        printf("Total a ser pago: R$%g. \n", totPreco);
        break;
    case 3:
        totPreco = (item3 * qtd);
        printf("Total a ser pago: R$%g. \n", totPreco);
        break;
    case 4:
        totPreco = (item4 * qtd);
        printf("Total a ser pago: R$%g. \n", totPreco);
        break;
    case 5:
        totPreco = (item5 * qtd);
        printf("Total a ser pago: R$%g. \n", totPreco);
        break;
    default:
        printf("Codigo invalido. Tente novamente.");
        break;
    }

    return 0;
}
