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
<<<<<<< HEAD
    int n;
    printf("Informe n: ");
    scanf("%i", &n);

    printf("Soma dos %i primeiros números inteiros: %i.\n", n, Soma(n));
=======
    int n1, n2;
    float p1, p2, ps;
    
    printf("Informe o primeiro numero e seu peso: ");
    scanf("%i%f", &n1, &p1);
    
    printf("Informe o segundo numero e seu peso: ");
    scanf("%i%f", &n2, &p2);
    
    printf("Media ponderada dos dois numeros com seus pesos: %g.\n", mediaPesos(n1, n2, p1, p2));

>>>>>>> b7f0b2e90d6c75056d85e5b48249c79acecfe5ae
    return 0;
}
