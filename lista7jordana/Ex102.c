/* 1) Elabore uma função que receba duas strings como parâmetros e verifique se a segunda
string ocorre dentro da primeira. */

#include <stdio.h>
#include <string.h>

int verificaSubstring(char string[], char substring[])
{
    int ocorre = 0, i = 0, k = 0, j = 0;

    if (strlen(substring) > strlen(string))
    {
        printf("\nNao eh substring.\n");
        return 0;
    }

    for (i = 0; i < strlen(string); i++)
    {
        if (string[i] == substring[0])
        {
            for (j = 0; j <= strlen(substring); j++)
            {
                if (string[i + j] == substring[j])
                {
                    ocorre++;
                }
            }
        }
    }

    if (ocorre >= strlen(substring) - 1)
    {
        printf("Eh substring.\n");
        return 1;
    }

    else
    {
        printf("Nao eh substring.\n");
        return 0;
    }
}

int main()
{
    int t1, t2;

    printf("Informe o tamanho da primeira string: ");
    scanf("%i", &t1);
    printf("Informe o tamanho da segunda string: ");
    scanf("%i", &t2);
    fflush(stdin);

    t1++, t2++;  // '\0'
    char s1[t1], s2[t2];

    printf("\nInforme a primeira string:");
    fgets(s1, t1, stdin);
    fflush(stdin);
    printf("\nInforme a segunda string:");
    fgets(s2, t2, stdin);

    printf("s1: %s\ns2: %s\n", s1, s2);

    verificaSubstring(s1, s2);

    return 0;
}
