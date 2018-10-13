// 4. Escreva uma função recursiva que calcule o número de grupos distintos
// com k pessoas que podem ser formados a partir de um conjunto de n
// pessoas. A definição abaixo da função Comb(n,k) define as regras:

/* Comb(n, k) =
n, se k = 1
1, se k = n
Comb(n-1, k-1) + Comb(n - 1, k), se 1 < k < n
*/

// ????????

#include <stdio.h>
#include <stdlib.h>

int Comb(int n, int k)
{
    if (k == 1)
    {
        return n;
    }

    else if (k == n)
    {
        return 1;
    }

    // else if (n < k)
    // {
    //     return 0;
    // }

    else if (1 < k < n)
    {
        return Comb(n - 1, k - 1) + Comb(n - 1, k);
    }
}

int main()
{
    int n, k, grupos;

    printf("Informe o numero de pessoas: ");
    scanf("%i", &n);

    printf("Informe o numero de pessoas por grupo: ");
    scanf("%i", &k);

    grupos = Comb(n, k);

    printf("Numero de grupos distintos com %i pessoas que podem ser formados a partir de um conjunto de %i pessoas: %i", k, n, grupos);

    return 0;
}
