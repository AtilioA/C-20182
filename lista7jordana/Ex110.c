/* 8) Faça um programa que leia 2 valores inteiros e chame uma função que receba estas
duas variáveis e troque o seu conteúdo, ou seja, esta função é chamada passando duas
variáveis A e B e, após a execução da função, A conterá o valor de B e B terá o valor de
A. */

#include <stdio.h>

void swap(int *A, int *B)
{
    int C;

    C = *A;
    *A = *B;
    *B = C;
}

int main()
{
    int A, B;

    printf("Informe A: ");
    scanf("%i", &A);

    printf("Informe B: ");
    scanf("%i", &B);

    swap(&A, &B);

    printf("%i, %i\n", A, B);

    return 0;
}
