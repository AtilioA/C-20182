// Calcular a sequência de Fibonacci até n, bem como a soma de todos os termos. 
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
        printf("Fim da sequencia atingido. %i termos foram exibidos.\nTotal: %i.", n, soma);
    else
        printf("Fim da sequencia atingido. %i TERMOS NEGATIVOS foram exibidos. AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA\nTotal: %i.", n, soma);

    return 0;
}
