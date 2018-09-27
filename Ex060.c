<<<<<<< HEAD
// 2) Elabore uma função que permita somar os elementos de um vetor de inteiros.
=======
// 3. Escreva uma função que receba 3 números inteiros e retorne a sua média
// aritmética.
>>>>>>> b7f0b2e90d6c75056d85e5b48249c79acecfe5ae

#include <stdio.h>
#include <stdlib.h>

<<<<<<< HEAD
int soma_vetor(int n[])
{
    int soma = 0, i;

    for(i = 0; i < 10; i++)
    {
        soma += n[i];
    }

    return soma;
}


int main()
{
    int n[10], i;

    printf("Informe os numeros do vetor: ");
    for(i = 0; i < 10; i++)
    {
        scanf("%i", &n[i]);
    }

    printf("%i.\n", soma_vetor(n));
=======
float media(int n1, int n2, int n3)
{
    float media;
    media = (n1 + n2 + n3) / 3;
    return media;
}

int main()
{
    int n1, n2, n3;

    printf("Informe os tres numeros: ");
    scanf("%i%i%i", &n1, &n2, &n3);

    printf("Media dos tres numeros: %g.\n", media(n1, n2, n3));
>>>>>>> b7f0b2e90d6c75056d85e5b48249c79acecfe5ae

    return 0;
}
