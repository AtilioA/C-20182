// 3) Fazer um programa que leia vários números (um por vez) e imprima 0 (zero) se o número
// não for múltiplo de 2, 3, 5 e 7. Imprimir 1 (um) se o número for múltiplo de 2 ou 3 e 2
// (dois) se o número for múltiplo de 5 e 7. Sair do programa quando for digitado o valor -1.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = -1;

    printf("Informe um numero: ");
    scanf("%i", &n);

    while (n != -1)
    {
        if (n % 2 != 0 && n % 3 != 0 && n % 5 != 0 && n % 7 != 0)
            printf("0\n");

        if (n % 2 == 0 || n % 3 == 0)
            printf("1\n");

        if (n % 5 == 0 && n % 7 == 0)
            printf("2\n");

        printf("Informe outro numero: ");
        scanf("%i", &n);
    }
    return 0;
}
