// 1. Escreva uma função que receba um número inteiro e retorne o seu
// antecessor

#include <stdio.h>
#include <stdlib.h>


int Antecessor(int n1)
{
    int ant;

    ant = n1 - 1;

    return ant;
}


int main()
{
    int n1;

    printf("Informe um numero: ");
    scanf("%i", &n1);

    printf("O seu antecessor eh %i.\n", Antecessor(n1));

    return 0;
}
