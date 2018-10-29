/* 7. Faça um programa que, dada uma palavra e uma matriz de letras, verifique se a palavra
ocorre em alguma linha da matriz. */

#include <stdio.h>
#include <string.h>

#define LIN 3
#define COL 3

int leMat(char matriz[LIN][COL])
{
    int i, j;

    for (i = 0; i < LIN; i++)
    {
        for (j = 0; j < COL; j++)
        {
            printf("a%i,%i = ", i + 1, j + 1);
            scanf(" %c", &matriz[i][j]);
        }
    }

    return matriz[LIN][COL];
}

void printaMat(char matriz[LIN][COL])
{
    int i, j;
    char palavraLinha[LIN];

    for (i = 0; i < LIN; i++)
    {
        for (j = 0; j < COL; j++)
        {
            printf("%c ", matriz[i][j]);
        }
        printf("\n");
    }
}

int verificaSubstring(char string[], char substring[])
{
    int ocorre = 0, i = 0, k = 0, j = 0;

    // Verifica cada possível substring de uma linha da matriz
    for (i = 0; i < strlen(string); i++)
    {
        if (string[i] == substring[0])
        {
            for (j = 0; j < strlen(string); j++)
            {
                if (string[i + j] == substring[j])
                {
                    ocorre++;
                }
            }
        }

    if (ocorre == strlen(substring))
    {
        return 1;
    }

    else
    {
        ocorre = 0;
    }

    }
    return 0;
}

int verificaPalavraMat(char matriz[LIN][COL], char palavra[])
{
    int i;

    // Testa com cada linha da matriz
    for (i = 0; i < LIN; i++)
    {
        if (verificaSubstring(matriz[i], palavra))
        {
            return 1;
        }
    }

    printf("\n");

    return 0;
}

int main()
{
    int i;
    char palavra[30], A[LIN][COL];

    leMat(A);
    printf("Informe a palavra: ");
    scanf("%s", palavra);

    printaMat(A);

    if (verificaPalavraMat(A, palavra) == 1)
    {
        printf("A palavra ocorre na matriz.\n");
    }
    else
    {
        printf("A palavra NAO ocorre na matriz.\n");
    }

    return 0;
}
