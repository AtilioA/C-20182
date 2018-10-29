/* 9. Faça um programa que leia do teclado uma mensagem e imprimir quantas letras A, E, I,
O, U tem esta mensagem. Considerar minúscula e maiúscula. */

#include <stdio.h>
#include <string.h>

void qntVogal(char msg[50])
{
    int letraA = 0, letraE = 0, letraI = 0, letraO = 0, letraU = 0, i;

    for (i = 0; i < strlen(msg); i++)
    {
        if (msg[i] == 'A' || msg[i] == 'a')
        {
            letraA++;
        }

        if (msg[i] == 'E' || msg[i] == 'e')
        {
            letraE++;
        }

        if (msg[i] == 'I' || msg[i] == 'i')
        {
            letraI++;
        }

        if (msg[i] == 'O' || msg[i] == 'o')
        {
            letraO++;
        }

        if (msg[i] == 'U' || msg[i] == 'u')
        {
            letraU++;
        }
    }

    printf("\nQuantidade de letras A: %i\n", letraA);
    printf("Quantidade de letras E: %i\n", letraE);
    printf("Quantidade de letras I: %i\n", letraI);
    printf("Quantidade de letras O: %i\n", letraO);
    printf("Quantidade de letras U: %i\n", letraU);
}

int main()
{
    char msg[50];

    printf("Informe uma mensagem:\n");
    fgets(msg, 50, stdin);

    qntVogal(msg);

    return 0;
}
