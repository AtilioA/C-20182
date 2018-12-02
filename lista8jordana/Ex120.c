/* 2) Faça um programa que receba do usuário o tamanho de uma string e chame uma função
para alocar dinamicamente essa string. Em seguida, o usuário deverá informar o
conteúdo dessa string. O programa deve imprimir a string sem suas vogais. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *alocaString(int t);
int ehVogal(char c);
void removeVogais(char *s, int t);

int main()
{
   int t;
   char *s;

    printf("Informe o tamanho da string: ");
    scanf("%i", &t);

    s = alocaString(t + 1);

    getchar();
    printf("Informe a string:\n");
    fgets(s, t, stdin);

    removeVogais(s, t);

    printf("%s\n", s);
    free(s);

   return 0;
}

char *alocaString(int tam)
{
    char *s;

    s = (char *)malloc(tam * sizeof(char));

    memset(s, 0, tam);

    return s;
}

// Remove espaços e aloca string para o novo tamanho
void removeVogais(char *s, int tam)
{
    int i, j, tamOriginal = strlen(s), novoTamanho = strlen(s), vogaisRetiradas = 0;

    for (i = 0; i < tam; i++)
    {
        if (ehVogal(s[i]))
        {
            for (j = i; j < tam; j++)
            {
                {
                    s[j] = s[j + 1];
                }
            }
            i--; // Temos que verificar se o próximo caractere também é uma vogal

            novoTamanho--;
            vogaisRetiradas++; // d a t a
        }
    }

    printf("\nTamanho original (%i) - %i vogais retiradas = %i\n", tamOriginal - 1, vogaisRetiradas, novoTamanho - 1);

    s = alocaString(novoTamanho);

    free(s);
}

int ehVogal(char c)
{
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    {
        return 1;
    }
    else if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
    {
        return 1;
    }

    return 0;
}
