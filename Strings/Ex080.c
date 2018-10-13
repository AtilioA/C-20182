/* 3. Faça um programa que leia uma palavra e a imprima de trás para
frente.
*/

#include <stdio.h>
#include <string.h>

int reversa(char frase[]);

int main()
{
    char frase[100];

    printf("Informe uma string: ");
    gets(frase);

    reversa(frase);

    return 0;
}

int reversa(char frase[])
{
    int i, tamanho = strlen(frase);
    char reversa[tamanho];

    tamanho = strlen(frase);

    for (i = tamanho - 1; i >= 0; i--)
    {
        printf("%c", frase[i]);
    }

    return 0;
}
