#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void printaForca();
int mudaString(char palavra[], char *palavraForca, int t);
int verificaLetra(char letra, char palavra[], char *palavraForca, int *vidas, int *acertos, char *letrasErradas);
void jogaForca(char palavra[], char *palavraForca, int *vidas, char *r);

// Se a mesma letra for usada mais de uma vez, erros/acertos serão contados novamente.
int main()
{
    int i, *vidas, t = 50;
    *vidas = 4;
    char *palavra;      // string de entrada
    char *palavraForca; // string com _
    char *r;
    r = (char *)malloc(sizeof(char));
    r = "S";
    palavra = (char *)malloc(t * sizeof(char));

    printf("Informe uma string para jogar: ");
    fgets(palavra, 50, stdin);
    palavraForca = (char *)malloc((strlen(palavra)) * sizeof(char));

    strcpy_s(palavraForca, strlen(palavra) - 1, palavra); // Aqui estava sem -1 e isso faz errar nas posições da string
    palavraForca[strlen(palavra) - 1] = '\n';

    jogaForca(palavra, palavraForca, vidas, r);
    // printf("Quer jogar novamente? ");

    free(vidas);
    free(r);
    free(palavra);
    free(palavraForca);

    return 0;
}

void printaForca(int *vidas)
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
    for (i = 0; i < (strlen(palavra) - 1) && i < (strlen(palavraForca) - 1); i++)
    {
        if (palavra[i] != ' ')
        {
            palavraForca[i] = '_';
        }
    }

    return 0;
}

void jogaForca(char palavra[], char *palavraForca, int *vidas, char *r)
{
    int i, a = 0;
    int *acertos = &a;
    char op;
    char *letrasErradas;
    letrasErradas = (char *)malloc(sizeof(char));
    memset(letrasErradas, 0, 4);

    mudaString(palavra, palavraForca, 50);

    while ((strcmp(palavra - 1, palavraForca) != 0) && *vidas > 0 && *acertos < strlen(palavra) - 1)
    {
        printaForca(vidas);
        printf("%s", palavraForca);
        printf("Erradas: %s", letrasErradas);

        printf("\nEscolha um letra: ");
        scanf(" %c", &op);

        verificaLetra(op, palavra, palavraForca, vidas, acertos, letrasErradas);
    }

    printf("\n----------------------------\n");
    printaForca(vidas);
    if (*acertos == strlen(palavra) - 1)
    {
        printf("Fim do jogo! Voce CONSEGUIU!\n");
    }
    else if (*vidas == 0)
    {
        printf("Fim do jogo! Voce PERDEU!\n");
    }
    printf("A palavra/frase era: %s", palavra);
    printf("Erradas: %s\n", letrasErradas); // achei zoado pra conseguir botar espaço entre as letras
    printf("Chances restantes: %i\n", *vidas);

    free(acertos);
    free(letrasErradas);
}

int verificaLetra(char letra, char palavra[], char *palavraForca, int *vidas, int *acertos, char *letrasErradas)
{
    int i, ocorreu = 0, erros = 0;

    for (i = 0; i < (strlen(palavra) - 1); i++)
    {
        if (palavra[i] == letra)
        {
            palavraForca[i] = letra;
            ++*acertos;
            ocorreu++;
        }
    }

    if (ocorreu == 0)
    {
        erros = 4 - *vidas;
        letrasErradas[erros] = letra;
        letrasErradas = (char*)malloc(erros * sizeof(char));
        --*vidas;
    }

    return 0;
}
