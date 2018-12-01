// 3. Obter o MDC entre dois números inteiros.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, n1, m, m1, aux, resto = 1;

    printf("Informe n: ");
    scanf("%i", &n);

    printf("Informe m: ");
    scanf("%i", &m);

    // Guarda valores iniciais
    m1 = m;
    n1 = n;

    while (resto != 0)
    {
        if (n > m)
        {
            aux = n;
            n = m;
            m = aux;
        }

        if (m % n == 0)
        {
            resto = 0;
            printf("%i %i %i", n1, m1, n);
        }

        else
        {
            m -= n;
            resto = m % n;
        }
    }
    return 0;
}
