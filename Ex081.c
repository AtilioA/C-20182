/* 4. Faça um programa que leia uma palavra, calcule quantas vogais
(a, e, i, o, u) possui essa palavra. Depois, leia um caractere (vogal
ou consoante) e substitua todas as vogais da palavra dada por esse
caractere.
*/

#include <stdio.h>
#include <string.h>

int ehVogal(char letra);

int main()
{
    char frase[100], fraseSubs[100], c;
    int i = 0, vogais = 0;

    printf("Informe uma frase: ");
    gets(frase);

    strcpy(fraseSubs, frase);

    printf("Informe um caractere: ");
    scanf(" %c", &c);

    for (i = 0; frase[i] != '\0'; i++)
    {
        if (ehVogal(frase[i]) == 1)
        {
            vogais++;
            fraseSubs[i] = c;
        }
    }

    printf("Numero de vogais: %i.\nFrase original: %s.\nFrase alterada: %s.\n", vogais, frase, fraseSubs);

    return 0;
}

int ehVogal(char letra)
{
    if (letra == 'a' || letra == 'A' || letra == 'e' || letra == 'E' || letra == 'i' || letra == 'I' || letra == 'o' || letra == 'O' || letra == 'u' || letra == 'U')
    {
        return 1;
    }

    else
    {
        return 0;
    }
}
