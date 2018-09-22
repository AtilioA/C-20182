// 3. Escreva uma função recursiva para calcular o valor de uma base x
// elevada a um expoente y.

#include <stdio.h>
#include <stdlib.h>

int exp(int x, int y)
{
    if (y == 0)
    {
        return 1;
    }

    else if (y == 1)
    {
        return x;
    }

    else
    {
        return x * exp(x, y - 1);
    }
}

int main()
{
    int x, y;

    printf("Informe x e y: ");
    scanf("%i%i", &x, &y);

    printf("%i^%i = %i.\n", x, y, exp(x, y));

    return 0;
}
