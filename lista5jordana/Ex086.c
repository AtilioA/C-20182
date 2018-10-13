/* 1) Implemente um programa Combiner que receba dois Strings como parâmetros e
combine-os, alternando letras, começando com a primeira letra da primeira String,
seguida pela primeira letra da segunda String, depois pela segunda letra da primeira
String, etc. As letras restantes da String mais longa são então anexadas ao final da string
de combinação e esta string de combinação é retornada. Cada string conterá entre 1 e
50 caracteres.
*/

#include <stdio.h>
#include <string.h>

int maiorStr(char s1[], char s2[]);
int printaAlternada(char s1[], char s2[], int lenMaior);

int main()
{
    char s1[50], s2[50];
    int lenMaior;

    printf("Informe a primeira string: ");
    scanf("%s", s1);

    printf("Informe a segunda string: ");
    scanf("%s", s2);

    lenMaior = maiorStr(s1, s2);

    printaAlternada(s1, s2, lenMaior);

    return 0;
}

int maiorStr(char s1[], char s2[])
{
    if (strlen(s1) >= strlen(s2))
    {
        return strlen(s1);
    }

    else
    {
        return strlen(s2);
    }
}

int printaAlternada(char s1[], char s2[], int lenMaior)
{
    int i;

    for (i = 0; i < lenMaior; i++)
    {
        printf("%c", s1[i]);
        printf("%c", s2[i]);
    }

    printf("\n");

    return 0;
}
