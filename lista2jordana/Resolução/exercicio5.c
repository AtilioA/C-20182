#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n, mdc;

    printf("Informe m: ");
    scanf("%i", &m);

    printf("Informe n: ");
    scanf("%i", &n);

    while (m != n)
    {
        if (m < n)
        {
            int aux = m;
            m = n;
            n = aux;
        }

        m = m - n;
    }

    mdc = m;
    printf("\n%d\n", mdc);

    return 0;
}