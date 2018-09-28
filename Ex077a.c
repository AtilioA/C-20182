/* 4) Faça um programa que receba do usuário uma string. O programa imprime a string sem
suas consoantes.
*/

#include <stdio.h>
#include <string.h>

int ehCosoante(char);

int main()
{
    char frase[100], semConsoante[100];
    int i, lenVogal = 0;

    printf("Informe uma string: ");
    gets(frase);

    for (i = 0; frase[i] != '\0'; i++)
    {
        if (ehCosoante(frase[i]) == 1)
        {
            semConsoante[lenVogal] = frase[i];
            lenVogal++;
        }
    }


    semConsoante[lenVogal] = '\0';

    printf("%s\n%s", frase, semConsoante);

    return 0;
}

int ehCosoante(char letra)
{
    if (letra == 'a' || letra == 'A' || letra == 'e' || letra == 'E' || letra == 'i' || letra == 'I' || letra == 'o' || letra == 'O' || letra == 'u' || letra == 'U' || letra == ' ')
    {
        return 1;
    }

    else
    {
        return 0;
    }
}
