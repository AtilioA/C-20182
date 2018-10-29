#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void printaForca();
int mudaString(char palavra[], char *palavraForca, int t);
int verificaLetra(char letra, char palavra[], char *palavraForca, int *vidas);
void jogaForca(char palavra[], char *palavraForca, int *vidas);

int main()
{
    int i, *vidas, t = 50;
    *vidas = 4;
    char *palavra;      // string de entrada
    char *palavraForca; // string com _
    palavra = (char *)malloc(t * sizeof(char));

    printf("Informe uma string: ");
    fgets(palavra, 50, stdin);
    palavraForca = (char *)malloc((strlen(palavra)) * sizeof(char));

    strcpy_s(palavraForca, strlen(palavra), palavra);
    palavraForca[strlen(palavra)] = '\n';

    // printf("%s%s", palavra, palavraForca);
    printf("%i\n", strcmp(palavra, palavraForca));
    jogaForca(palavra, palavraForca, vidas);

    return 0;
}

void printaForca(int *vidas) // OK
{
    if (*vidas == 4)
    {
        puts("¯--¯");
        puts("|   |");
        puts("|   ");
        puts("|   ");
        puts("");
    }
    else if (*vidas == 3)
    {
        puts("¯--¯");
        puts("|   |");
        puts("|   O");
        puts("|   ");
        puts("");
    }
    else if (*vidas == 2)
    {
        puts("¯--¯");
        puts("|   |");
        puts("|   O");
        puts("|   |");
        puts("");
    }
    else if (*vidas == 1)
    {
        puts("¯--¯");
        puts("|   |");
        puts("|   O");
        puts("|  /|\\");
        puts("");
    }
    else if (*vidas == 0)
    {
        puts("¯--¯");
        puts("|   |");
        puts("|   O");
        puts("|  /|\\");
        puts("   / \\ ");
        puts("");
    }
}

int mudaString(char palavra[], char *palavraForca, int t)
{
    int i;
    for (i = 0; i < (strlen(palavra) - 1); i++)
    {
        if (palavra[i] != ' ')
        {
            palavraForca[i] = '_';
        }
    }

    return 0;
}

void jogaForca(char palavra[], char *palavraForca, int *vidas)
{
    int i;
    char op, r;
    mudaString(palavra, palavraForca, 50);

    while ((strcmp(palavra - 1, palavraForca) != 0) && *vidas > 0)
    {
        printaForca(vidas);
        printf("%s", palavraForca);

        printf("Escolha um letra: ");
        scanf(" %c", &op);

        verificaLetra(op, palavra, palavraForca, vidas);
    }
    printf("\n");
    printaForca(vidas);


    while (r != 'N' && r != 'n')
    {
        printf("FIM DO JOGO! Quer jogar novamente? ");
        scanf(" %c", r);

        // sei la
    }
}

int verificaLetra(char letra, char palavra[], char *palavraForca, int *vidas)
{
    int i, ocorreu = 0;
    char letraErrada;

    for (i = 0; i < (strlen(palavra) - 1); i++)
    {
        if (palavra[i] == letra)
        {
            palavraForca[i] = letra;
            ocorreu++;
        }
    }

    if (ocorreu == 0)
    {
        letraErrada = letra;
        --*vidas;
    }

    return 0;
}

/* fala meu bom


*/
