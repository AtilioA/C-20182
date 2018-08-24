// f) Verificar e exibir o menor entre três números inteiros.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, n3;

    printf("Informe o primeiro numero: ");
    scanf("%d", &n1);

    printf("Informe o segundo numero: ");
    scanf("%d", &n2);

    printf("Informe o terceiro numero: ");
    scanf("%d", &n3);

    if (n1 >= n2 && n1 >= n3)
        printf("%d eh o maior dentre os tres.", n1);
    else if ((n2 >= n1) && (n2 >= n3))
        printf("%d eh o maior dentre os tres.", n2);
    else if ((n3 >= n1) && (n3 >= n2))
        printf("%d eh o maior dentre os tres.", n3);
    if ((n1 == n2 && n2 == n3) == 1)
        printf("Os tres numeros sao iguais. \n");

    return 0;
}