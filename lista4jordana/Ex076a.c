/* 3) Utilizando switch case, fa ç a um programa que contenha um menu com as seguintes opções:
a. Ler uma string S1 (tamanho máximo 20 caracteres);
b. Imprimir o tamanho da string S1;
c. Comparar a string S1 com uma nova strin g S2 fornecida pelo usu á rio e imprimir o resultado da comparação;
d. Concatenar a string S1 com uma nova string S2 e imprimir na tela o resultado da concatenação;
e. Imprimir a string S1 de forma reversa;
f. Contar quantas vezes um dado caractere aparec e na string S1. Esse caractere desse ser informado pelo usuário;
g. Retornar uma substring da string S1. Para isso o usu á rio deve informar a partir de qual posi çã o deve ser criada a substring e qual é o tamanho da substring.
h. Substituir a primeira oco rrência do caractere C1 da string S1 pelo caractere C2. Os caracteres C1 e C2 serão lidos pelo usuário; */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LENGTH 21


int menu();

int leS1(char s1[]);
int leS2(char s2[]);

int reversa(char s[]);
int tamanhoString(char s[]);
int ocorreC(char s[], char c);
int compString(char s1[], char s2[]);
int substitui(char s1[], char c1, char c2);
int substring(char s1[]);


int main()
{
    char s1[LENGTH] = "frase de teste";
    char s2[LENGTH] = "outra";
    char c1 = '\0', c2 = '\0', c;

    menu();

    return 0;
}

int menu()
{
    char op = '1';
    char s1[LENGTH] = "frase de teste";
    char s2[LENGTH] = "outra";
    char s3[LENGTH];
    char s3concat[LENGTH];

    char c, c1, c2;

    while (op != '0')
    {
        printf("\nOPCOES:\n");
        printf("a - ler uma string\n");
        printf("b - imprimir o tamanho da string\n");
        printf("c - compara a string com uma nova string\n");
        printf("d - concatena a string com uma nova string e imprime o resultado\n");
        printf("e - imprime a string na ordem reversa\n");
        printf("f - retorna a quantidade de vezes que um caractere ocorre na string\n");
        printf("g - retorna uma substring de S1 a partir de uma posicao e do tamanho da substring\n");
        printf("h - substituir a primeira ocorrencia de C1 da primeira string por C2.\n");
        printf("0 - sair\n");
        printf("Sua opcao: ");
        scanf(" %c", &op);

        switch (op)
        {
        case 'a':
            printf("Informe a nova string:\n");
            leS1(s1);
            break;

        case 'b':
            printf("Tamanho da string s1: %i.\n", tamanhoString(s1));
            break;

        case 'c':
            printf("Informe a nova string a ser usada para comparacao: ");
            leS2(s2);
            compString(s1, s2);
            break;

        case 'd':
            printf("Informe a nova string a ser concatenada: ");
            leS2(s2);
            strcpy(s3, s1);
            strcpy(s3concat, strcat(s1, s2));
            strcpy(s1, s3);
            printf("Concatenacao das strings: %s", s3concat);
            break;

        case 'e':
            printf("S1 REVERSA:\n");
            reversa(s1);
            break;

        case 'f':
            printf("Informe o caractere a ser verificado na string: ");
            scanf(" %c", &c);
            printf("Este caractere ocorre %i vez(es) na string.\n", ocorreC(s1, c));
            break;

        case 'g':
            substring(s1);
            break;

        case 'h':
            printf("Informe o caractere a ser verificado e substituido na string: ");
            scanf(" %c", &c1);
            printf("Informe o caractere que ira substituir '%c' na string: ", c1);
            scanf(" %c", &c2);
            printf("Nova string:\n");
            substitui(s1, c1, c2);
            break;

        case '0':
            break;

        default:
            printf("\nOpcao invalida. Tente novamente:\n");
            break;
        }
    }

    return 0;
}

int tamanhoString(char s1[])
{
    int tamanho;

    tamanho = strlen(s1);

    return tamanho;
}

int leS1(char s1[])
{
    char novas1[LENGTH];

    fgetc(stdin);
    gets(novas1);

    strcpy(s1, novas1);

    return 0;
}

int leS2(char s2[])
{
    char novas2[LENGTH];

    fgetc(stdin);
    fgets(novas2, LENGTH, stdin);

    strcpy(s2, novas2);

    return 0;
}

int reversa(char s[])
{
    int i, lens = strlen(s);

    for (i = lens; i >= 0; i--)
    {
        printf("%c", s[i]);
    }

    return 0;
}

int ocorreC(char s[], char c)
{
    int i, ocorr = 0;

    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == c)
        {
            ocorr++;
        }
    }

    return ocorr;
}

int compString(char s1[], char s2[])
{
    int comp = strcmp(s1, s2);

    if (comp > 0)
    {
        printf("S1 eh maior que S2.\n");
    }
    else if (comp < 0)
    {
        printf("S2 eh maior que S1.\n");
    }
    else
    {
        printf("As strings sao iguais.\n");
    }

    return 0;
}

int substring(char s1[])
{
    int i, j = 0, pos, tamanhoSubS;
    char substring[LENGTH];

    printf("Informe a posicao de inicio da substring: ");
    scanf("%i", &pos);

    printf("Informe o tamanho para a substring: ");
    scanf("%i", &tamanhoSubS);

    for (i = pos; i < (tamanhoSubS + pos); i++)
    {
        substring[j] = s1[i];
        j++;
    }

    printf("%s\n", substring);

    return 0;
}

int substitui(char s1[], char c1, char c2)
{
    int i;
    char subst[LENGTH];

    strcpy(subst, s1);

    for (i = 0; i < 20; i++)
    {
        if (s1[i] == c1)
        {
            subst[i] = c2;
            break;
        }
    }

    printf("%s\n", subst);

    return 0;
}
