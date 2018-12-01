/* 1. Faça um programa que leia um nome, calcule e retorne quantas
letras tem esse nome.
*/

#include <stdio.h>
#include <string.h>

int ehLetra(char);

int main()
{
    char nome[100];
    int i = 0, letras = 0;

    printf("Informe um nome: ");
    gets(nome);

    for (i = 0; nome[i] != '\0'; i++)
    {
        if (ehLetra(nome[i]) == 1)
        {
            letras++;
        }
    }

    printf("O nome possui %i letras.\n", letras);

    return 0;
}

int ehLetra(char letra)
{
    if (letra >= 'a' && letra <= 'z' || letra >= 'A' && letra <= 'Z')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
