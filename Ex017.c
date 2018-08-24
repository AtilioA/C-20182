// m) Faça um programa que mostre se uma letra é ou não uma vogal.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char vogal;

    printf("Informe uma letra: ");
    scanf("%c", &vogal);

    if ((vogal >= 'a' && vogal <= 'z') || (vogal >= 'A' && vogal <= 'Z'))
    {
        if (vogal == 'a' || vogal == 'A' || vogal == 'e' || vogal == 'E' || vogal == 'i' || vogal == 'I' || vogal == 'o' || vogal == 'O' || vogal == 'U' || vogal == 'U')
            printf("\"%c\" eh uma vogal.", vogal);
        else
            printf("\"%c\" eh uma consoante.", vogal);
    }
    else
        printf("\"%c\" nao eh uma letra.", vogal);

    return 0;
}
