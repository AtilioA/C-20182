<<<<<<< HEAD
// 2. Escreva uma função recursiva para calcular a soma dos n primeiros
// números inteiros, onde n será lido do teclado.
=======
// 5. Escreva uma função que receba 2 números inteiros, 2 números reais
// indicando pesos, e retorne a média ponderada.
>>>>>>> b7f0b2e90d6c75056d85e5b48249c79acecfe5ae

#include <stdio.h>
#include <stdlib.h>

<<<<<<< HEAD

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
=======
float mediaPesos(int n1, int n2, int p1, int p2)
{
    float mediaP, ps;

    ps = p1 + p2;

    mediaP = (n1 * p1 + n2 * p2) / ps;

    return mediaP; 
>>>>>>> b7f0b2e90d6c75056d85e5b48249c79acecfe5ae
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
