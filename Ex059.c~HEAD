// 1) Elabore um programa que leia um número N, inteiro, converta-o para binário e calcule a quantidade de dígitos binários desse número.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0, i = 0, binario[50];
    
    printf("Informe n: ");
    scanf("%i", &n);

    while (n != 0)
    {
        binario[i] = (n % 2);
        n /= 2;
        printf("%i.\n", binario[i]);
        i++;
    }

    printf("Quantidade de digitos binarios: %i\n", i);
 
    return 0;
}
