// n) Faça um programa que mostre a versão maiúscula de uma letra minúscula. Caso o caractere não seja letra ou não seja minúscula, mostre uma mensagem. OBS: Proibido usar a função toupper. Dica: olhar tabela ASCII.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char vogal;

    printf("Informe uma letra minuscula: ");
    scanf("%c", &vogal);

    if (vogal >= 'a' && vogal <= 'z')
    {
        vogal = vogal - 32;
        printf("%c", vogal);
    }
    else
    {
        printf("\"%c\" nao eh uma letra ou nao eh minuscula.", vogal);
    }
    
    return 0;
}
