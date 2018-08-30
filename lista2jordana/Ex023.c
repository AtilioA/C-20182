// 4) Faça um programa para exibir e calcular a soma dos N primeiros termos da sequência
// de Fibonacci. Esta sequência começa com os termos 1 e 1 e, a partir do terceiro termo,
// os termos são calculados pela soma dos dois termos anteriores: 1, 1, 2, 3, 5, 8, 13, 21, 34, ...
// Bônus: sequência negativa 🤔

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, aux, i, n, soma;
    printf("Quantos termos da sequencia de Fibonacci? ");
    scanf("%i", &n);

    a = 1;
    b = 1;
    soma = 0;

    if (n >= 2)
    {
        soma = 2;
        printf("%d \n", a);
        printf("%d \n", b);
    }
    
    else if (n == 1)
    {
        soma = 1;
        printf("%d \n", a);
    }
    
    if (n <= -2)
    {
        soma = -2;
        printf("talkei\n");
        printf("%d \n", -a);
        printf("%d \n", -b);
    }

    else if (n == -1)
    {
        soma = -1;
        printf("talkei\n");
        printf("%d \n", -a);
    }

    if (n >= 3)
    {
        for (i = 3; i <= n; ++i)
        {
            aux = a + b;
            printf("%i \n", aux);
            b = a;
            a = aux;
            soma = soma + aux;
        }
    }

    if (n < 0)
    {
        a = -1;
        b = -1;
        for (i = -3; i >= n; --i)
        {
            aux = a + b;
            printf("%i \n", aux);
            b = a;
            a = aux;
            soma = soma + aux;
        }
    }

    if (n >= 0)
        printf("Fim da sequencia atingido. %i termos foram exibidos.\n Soma total dos termos: %i.", n, soma);
    else
        printf("Fim da sequencia atingido. %i TERMOS NEGATIVOS foram exibidos. AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA\nTotal: %i.", n, soma);

    return 0;
}
