/* 4) Faça um programa que receba do usuário uma string. O programa imprime a string sem
suas vogais.
*/

#include <stdio.h>
#include <string.h>

int ehVogal(char);

int main()
{
    char frase[100], semVogal[100];
    int i, lenVogal = 0;

    printf("Informe uma string: ");
    gets(frase);

    for (i = 0; frase[i] != '\0'; i++)
    {
        if (ehVogal(frase[i]) == 0)
        {
            semVogal[lenVogal] = frase[i];
            lenVogal++;
        }
    }


    semVogal[lenVogal] = '\0';

    printf("%s\n%s", frase, semVogal);

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
