//

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Maneira menos educada:
    int n;

    printf("Informe n: ");
    scanf("%i", &n);

    if (n == 1)
        printf("Nao primo\n");

    else if (n == 2)
        printf("Primo\n");

    else if (n == 3)
        printf("Primo\n");

    else if (n == 5)
        printf("Primo\n");

    else if (n == 7)
        printf("Primo\n");

    else if (n % 2 != 0 && n % 3 != 0 && n % 5 != 0 && n % 7 != 0)
        printf("Primo\n");
    else
        printf("Nao primo\n");
    */

    /* Maneira mais educada: */

    int i, n, primo = 0;

    printf("Informe n: ");
    scanf("%i", &n);

    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
            primo++;
    }

    if (primo == 2)
        printf("Primo\n");
    else
        printf("Nao primo\n");

    return 0;
}
