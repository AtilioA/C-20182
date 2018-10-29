/* 4) Escreva uma função chamado AUMENTO que receba dois valores reais X e Y como
parâmetros e aumente o valor de X em Y%, retornando o novo valor de X. */

#include <stdio.h>

int aumento(float X, float Y, float C)
{
    Y /= 100;  // porcentagem
    return X + X*Y;
}

int main()
{
    float X, Y, C;

    printf("Informe X: ");
    scanf("%f", &X);

    printf("Informe Y: ");
    scanf("%f", &Y);

    C = aumento(X, Y, C);
    printf("X aumentado em Y%%: %f\n", C);

    return 0;
}
