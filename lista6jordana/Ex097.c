/* 7. Faça um programa que, dada uma palavra e uma matriz de letras, verifique se a palavra
ocorre em alguma linha da matriz. */

#include <stdio.h>
#include <string.h>

#define LIN 2
#define COL 2

int leMat(char matriz[LIN][COL])
{
    int i, j;

    for (i = 0; i < LIN; i++)
    {
        for (j = 0; j < COL; j++)
        {
            printf("a%i,%i = ", i + 1 , j + 1);            
            scanf(" %c", &matriz[i][j]);
        }
    }

    return matriz[LIN][COL];
}

int verificaPalavraMat(char matriz[LIN][COL], char palavra[])
{
    int i, j, ocorreLetra, tamanhoPalavra = strlen(palavra);

    for (i = 0; i < LIN; i++)
    {
        for (j = 0; j < COL; j++)
        {
            if (matriz[j][i] == palavra[j]) // ???
            {
                ocorreLetra++;
            }
        }
    }

    printf("oc %i, len %i\n", ocorreLetra, tamanhoPalavra);

    if (ocorreLetra == tamanhoPalavra)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int printaMat(char matriz[LIN][COL])
{
    int i, j;

    for (i = 0; i < LIN; i++)
    {
        for (j = 0; j < COL; j++)
        {
            printf("%c ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}

int main()
{
    int i;
    char palavra[30];
    char A[LIN][COL];

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
        printf("A palavra nao ocorre na matriz.\n");
    }
}
