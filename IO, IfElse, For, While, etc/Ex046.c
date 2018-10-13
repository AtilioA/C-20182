// 4. Faça um programa que leia n números e retorne o maior e o
// menor destes, a quantidades de pares, a quantidade de impares, e a
// média deles.
// - Entrada: Sua entrada deverá conter a quantidade de números a
// serem lidos seguidos e os números em questão.
// - Saída: Sua saída deverá apresentar o maior e o menor dos números
// em questão, a quantidade de pares, a quantidade de ímpares e a
// média deles. Para a média, considere-a sempre com precisão de 6
// casas após a vírgula.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quant, i = 0, soma = 0, maior, menor, pares = 0, impares = 0, n;
    float media;

    printf("Informe a quantidade de numeros: ");
    scanf("%i", &quant);

    while (i < quant)
    {
        if (i == 1)
        {
            maior = n;
            menor = n;
        }

        ++i;

        printf("Informe o %io numero: ", i);
        scanf("%i", &n);

        if (n > maior)
            maior = n;
        else if (n < menor)
            menor = n;

        if (n % 2 == 0)
            pares += 1;
        else
            impares += 1;

        soma += n;
    }

    /* Com for:

    for(i = 0; i < quant; ++i)
    {
        if (i == 1)
        {
            maior = n;
            menor = n;
        }

        printf("Informe o %io numero: ", i + 1);
        scanf("%i", &n);
    
        if (n > maior)
            maior = n;
        else if (n < menor)
            menor = n;

        if (n % 2 == 0)
            pares += 1;
        else
            impares += 1;

        soma += n;
    }
    */

    media = (soma / i);

    printf("%i numeros lidos. Maior: %i. Menor: %i. %i pares, %i impares. Media dos numeros: %g", i, maior, menor, pares, impares, media);

    return 0;
}
