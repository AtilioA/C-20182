#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void printaForca();
void printaPalavra(char palavra[50], int t);

int main()
{
    int i, jordana;
    char *strIn; // entrada do user
    char *ent;   // a string com _
    int t = 50;  // precisa de um tamanho          inicial
    strIn = (char *)malloc(t * sizeof(char));
    ent = (char *)malloc(t * sizeof(char));

    printf("Informe uma string: ");
    fgets(strIn, 50, stdin);

    for (int j = 0; j < strlen(strIn); j++)
    {

    }
}

void printaForca(int vidas) // OK
{
    if (vidas == 4)
    {
        puts("¯¯¯");
        puts("|   |");
        puts("|   ");
        puts("|   ");
    }
    if (vidas == 3)
    {
        puts("¯¯¯");
        puts("|   |");
        puts("|   O");
        puts("|   ");
    }
    if (vidas == 2)
    {
        puts("¯¯¯");
        puts("|   |");
        puts("|   O");
        puts("|   |");
    }
    if (vidas == 1)
    {
        puts("¯¯¯");
        puts("|   |");
        puts("|   O");
        puts("|  /|\\");
    }
    if (vidas == 0)
    {
        puts("¯¯¯");
        puts("|   |");
        puts("|   O");
        puts("|  /|\\");
        puts("   / \\ ");
    }
}

void printaPalavra(int t, char palavra[50])
{
    int i;
    char palavraForca[50];

    for (i = 0; palavra != "\0"; i++)
    {
        if (palavra[i] != " ")
        {
            palavraForca[i] = "_";
        }
    }

    return palavraForca; // ?
}

/* fala meu bom


*/
