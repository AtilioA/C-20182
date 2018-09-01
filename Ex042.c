// 1) Desenvolva um programa para exibir todos os números pares
// contidos em um determinado intervalo.
// - Entrada: Sua entrada deverá conter dois valores n e m correspondentes
// aos extremos do intervalo. Considere que n e m formem um intervalo
// aberto, ou seja, n e m não precisam ser avaliados. Considere também
// que n sempre seja menor que m.
// - Saída: Sua saída deverá conter todos os números pares pertencentes
// ao intervalo aberto. Se não há, a saída deve ser vazia.

#include <stdio.h>

int main()
{
    int n, m, i, aux, pares = 0;

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
            if (i % 2 == 0)
            {
                printf("%i\n", i);
                pares += 1;
            }
        }
    }

    else
    {
        for(i = n + 1; i < m; i++)
        {
            if (i % 2 == 0)
            {
                printf("%i\n", i);
                pares += 1;
            }
        }
    }

    printf("Total de numeros pares exibidos: %i.\n", pares);

    return 0;
}
