// Desenvolva  um  programa  onde  o  usuário  informe  a  idade  e  se  tem  alguma  doença 
// crônica. Caso tenha alguma doença crônica o valor da mensalidade do plano de saúde 
// sofrerá um acréscimo conforme a tabela abaixo, no final o programa tem que informar
// qual o valor total a ser pago na mensalidade.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;
    float mens, valorTotal;
    char doenca;
    
    printf("Informe a idade do cliente: \n");
    scanf("%i", &idade);

    printf("Informe se o cliente possui alguma doença crônica [S/N]: \n");
    scanf(" %c", &doenca);

    if (idade >= 0 && idade <= 18)
    {
        mens = 83.15;
        if (doenca == 'S')
            valorTotal = mens + (mens * 0);
        else
            valorTotal = mens;
        printf("Valor total a ser pago na mensalidade: R$%g.\n", valorTotal);
    }
    
    else if (idade >= 19 && idade <= 33)
    {
        mens = 133.88;
        if (doenca == 'S')
            valorTotal = mens + (mens * 0.05);
        else
            valorTotal = mens;
        printf("Valor total a ser pago na mensalidade: R$%g.\n ", valorTotal);
    }

    else if (idade >= 34 && idade <= 44)
    {
        mens = 203.73;
        if (doenca == 'S')
            valorTotal = mens + (mens * 0.10);
        else
            valorTotal = mens;
        printf("Valor total a ser pago na mensalidade: R$%g.\n", valorTotal);
    }

    else if (idade >= 45 && idade <= 58)
    {
        mens = 312.44;
        if (doenca == 'S')
            valorTotal = mens + (mens * 0.15);
        else
            valorTotal = mens;
        printf("Valor total a ser pago na mensalidade: R$%g.\n", valorTotal);
    }

    else if (idade >= 59)
    {
        mens = 498.53;
        if (doenca == 'S')
            valorTotal = mens + (mens * 0.30);
        else
            valorTotal = mens;
        printf("Valor total a ser pago na mensalidade: R$%g.\n", valorTotal);
    }

    else 
        printf("Nao sei.\n");

    return 0;
}
