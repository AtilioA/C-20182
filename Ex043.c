// 2) Faça um programa para apresentar todos os números contidos em
// um intervalo aberto de limites n e m e que sejam múltiplos de 3, 4
// ou 7.
// - Entrada: Sua entrada deverá conter dois valores n e m correspondentes
// aos extremos do intervalo. Considere que n e m formem um intervalo
// aberto, ou seja, n e m não precisam ser avaliados. Considere também
// que n sempre seja menor que m.
// - Saída: Sua saída deverá conter todos os múltiplos de 3, 4 ou 7
// pertencentes ao intervalo.

#include <stdio.h>

int main()
{
    int n, m, i, aux, multiplos;

    printf("Informe n: ");
    scanf("%i", &n);

    printf("Informe m: ");
    scanf("%i", &m);

    if (n > m)
    {
        aux = n;
        n = m;
        m = aux;
    }

    if (m >= 0)
    {
        for(i = n + 1; i < m; i++)
        {
            if (i % 3 == 0 || i % 4 == 0 || i % 7 == 0)
            {
                printf("%i\n", i);
                multiplos += 1;
            }
        }
    }

    else
    {
        for(i = n + 1; i < m; i++)
        {
            if (i % 3 == 0 || i % 4 == 0 || i % 7 == 0)
            {
                printf("%i\n", i);
                multiplos += 1;
            }
        }
    }

    printf("Total de multiplos exibidos: %i.\n", multiplos);

    return 0;
}