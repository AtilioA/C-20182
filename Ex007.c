// 8 (calcular raizes reais dados a, b e c de entrada)

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b, c, raiz1, raiz2, delta;

    printf("Digite o valor do termo a: ");
    scanf("%f", &a);
    printf("Digite o valor do termo b: ");
    scanf("%f", &b);
    printf("Digite o valor do termo c: ");
    scanf("%f", &c);

    delta = b * b - 4 * a * c;
    raiz1 = (-b + sqrt(delta)) / (2 * a);
    raiz2 = (-b - sqrt(delta)) / (2 * a);

    if (delta < 0)
    {
        printf("A equacao nao possui raizes reais.");
    }
    else
    {
        printf("R1 = %g e R2 = %g", raiz1, raiz2);
    }

    return 0;
}
