// 5) Faça um programa para calcular o Máximo Divisor Comum entre 2 números. 
// Observe as seguintes propriedades do gcd:
// gcd(x, y) = gcd(x − y, y), se x > y;
// gcd(x, y) = gcd(y, x);
// gcd(x, x) = x.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, aux, gcd;

    printf("Inform x: ");
    scanf("%i", &x);

    printf("Inform y: ");
    scanf("%i", &y);

    printf("GCD(%i, %i) ->\n", x, y);

    while (x > 0)
    {
        if (x > y)
        {
            x = x - y;
            printf("GCD(%i, %i) ->\n", x, y);
        }

        if (x < y)
        {
            aux = x;
            x = y;
            y = aux;
            printf("GCD(%i, %i) ->\n", x, y);
        }

        if (x == y)
        {
            printf("GCD(%i, %i) = %i. \nFim.\n", x, y, x);
            gcd = x;
            break;
        }
    }

    return 0;
}


/* 1ª tentativa:

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, aux, gcd;
    
    printf("Inform x: ");
    scanf("%i", &x);
    
    printf("Inform y: ");
    scanf("%i", &y);

    if (x == y)
    {
        gcd = x;
        x = 0;
    }

    while (x != 0)
    {

        if (x > y)
            x = x - y;
            
        if (x < y)
        {
            aux = x;
            x = y;
            y = aux;
        }

        if (y == 0)
        {
            gcd = x;
            break;
        }
        
        if (x == y)
        {
            gcd = x;
            break;
        }
    }

    printf("GCD = %i.", gcd);

    return 0;
}
*/
