// 2. Escreva uma função recursiva para calcular a soma dos n primeiros
// números inteiros, onde n será lido do teclado.

#include <stdio.h>
#include <stdlib.h>


int Soma(int n)
{
    if(n != 0)
    {
        return n + Soma(n-1);
    }
    else
    {
        return n;
    }
}


int main()
{
    int n;
    printf("Informe n: ");
    scanf("%i", &n);

    printf("Soma dos %i primeiros números inteiros: %i.\n", n, Soma(n));
    return 0;
}
