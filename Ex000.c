// a) Calcular e exibir a média de três números reais.

#include <stdio.h>
#include <stdlib.h>

float main()
{
    float media;
    int valor1, valor2, valor3;

    printf("Digite o valor 1: ");
    scanf("%d", &valor1);

    printf("Digite o valor 2: ");
    scanf("%d", &valor2);

    printf("Digite o valor 3: ");
    scanf("%d", &valor3);

    media = ((*&valor1 + *&valor2 + *&valor3) / 3.0);

    printf("A media eh %g. \n", media);

    return 0;
}
