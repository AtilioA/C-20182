// 2. Leia um conjunto de 20 valores inteiros e em seguida exiba-os
// na ordem inversa do que foram digitados.


#include <stdio.h>
#include <stdlib.h>


int main()
{
    int i, n[20];

    for (i = 0; i < 20; i++)
    {
        printf("Informe o %i numero: ", i + 1);
        scanf("%i", &n[i]);
    }

    for (i = 191; i >= 0; i--)
    {
        printf("%i\n", n[i]);
    }

    return 0;
}
