// 1) Um posto de gasolina está vendendo combustível com a seguinte tabela de preços:
// Escreva  um  algoritmo  que  leia  o  número  de  litros  vendidos e  o  tipo  de  combustível
// Calcule e imprima o valor a ser pago pelo cliente, sabendo que o preço da gasolina é de R$ 3,15 e o litro do álcool é de R$ 2,83.

#include <stdio.h>
#include <stdlib.h>

#define g 3.15;
#define a 2.83;

int main()
{
    int litros, tipo;
    float valor;

    printf("Informe a quantidade de litros vendidos: ");
    scanf("%i", &litros);

    printf("Informe o tipo de combustível [1 para álcool e 2 para gasolina]: ");
    scanf("%i", &tipo);

    if (tipo == 1)
    {
        valor = litros * a;
        printf("Valor a ser pago: R$%g.\n", valor);
    }
    
    if (tipo == 2)
    {
        valor = litros * g;
        printf("Valor a ser pago: R$%g.\n", valor);
    }

    return 0;
}
