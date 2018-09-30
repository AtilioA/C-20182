// 5) Faça um programa que leia números inteiros e retorne o maior dos
// números digitados até o momento e a média atual. O programa
// termina quando o usuário entra o número zero.
// - Entrada: Sua entrada deverá receber um número por vez fornecidos
// pelo usuário
// - Saída: Sua saída deverá apresentar o maior número lido até então e
// a média atual. Para a média, considere-a sempre com precisão de 6
// casas após a vírgula.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 1;
    float n, media = 0, maior = 0;

    // printf("Informe o 1o numero : ");
    // scanf("%g", &n);

    // maior = n;
    // printf("%g ", maior);
    // media = n;
    // printf("%g \n", media);

    do
    {
        printf("Informe o %io numero : ", i);
        scanf("%g", &n);

        if (n > maior)
            maior = n;
        printf("Maior: %g\n", maior);

        media = (media + (n - media) / i);
        printf("Media: %g\n", media);

        i += 1;
    }
    while (n != 0);

    return 0;
}
