// // 3) Utilizando switch case, fa ç a um programa que contenha um menu com as seguintes op çõ es: 
// a. Ler uma string S1 (tamanho máximo 20 caracteres); 
// b. Imprimir o tamanho da string S1; 
// c. Comparar a string S1 com uma nova strin g S2 fornecida pelo usu á rio e imprimir o resultado da compara çã o; 
// d. Concatenar a string S1 com uma nova string S2 e imprimir na tela o resultado da concatena çã o; 
// e. Imprimir a string S1 de forma reversa; 
// f. Contar quantas vezes um dado caractere aparec e na string S1. Esse caractere desse ser informado pelo usu á rio; 
// g. Retornar uma substring da string S1. Para isso o usu á rio deve informar a partir de qual posi çã o deve ser criada a substring e qual é o tamanho da substring. 
// h. Substituir a primeira oco rr ê ncia do caractere C1 da string S1 pelo caractere C2. Os caracteres C1 e C2 ser ã o lidos pelo usu á rio;

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LENGTH 21

int main()
{
    char s1[21] = "vai tomar no cu";
    char s2[21] = "nao vou nao";    
        
    printf("abc.\n");
    printf("%i", compString(s1, s2));
}

int leString()
{
    scanf(" %c", s1);

kopsdgkopgkopsdgkopkopsdgjopjopkopkopk
    return 0;
}

// e
int reversa(char s1[])
{
    int i, lens1 = strlen(s1);

    printf("S1 REVERSA:\n");
    for(i = lens1; i >= 0; i--)
    {
        printf("%c", s1[i]);
    }
}

// c
int compString(char s1[], char s2[])
{
    int comp = strcmp(s1, s2);

    if (comp > 0)
    {
        printf("S1 é maior que S2.\n");
    }
    else if ( comp < 0)
    {
        printf("S2 é maior que S2.\n");
    }
    else
    {
        printf("As strings são iguais.\n");
    }
}

/*
int menu(int n[])
{
    printf("a - ler uma string");
    printf("b - imprimir o tamanho da string");
    printf("c - compara a string com uma nova string");
    printf("d - concatena a string com uma nova string e imprime o resultado");
    printf("e - imprime a string na ordem reversa");
    printf("f - retorna a quantidade de vezes que um caractere ocorre na string");
    printf("g - retorna uma substring de S1 a partir de uma posição e do tamanho da substring");
    printf("h - substituir a primeira ocorrencia de C1 da primeira string por C2.");

    return 0;
}

int main()
{

    return 0;
}

*/