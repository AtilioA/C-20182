// 5. Escreva uma função que receba 2 números inteiros, 2 números reais
// indicando pesos, e retorne a média ponderada.

#include <stdio.h>
#include <stdlib.h>

float mediaPesos(int n1, int n2, int p1, int p2)
{
    float mediaP, ps;

    ps = p1 + p2;

    mediaP = (n1 * p1 + n2 * p2) / ps;

    return mediaP; 
}


int main()
{
    int n1, n2;
    float p1, p2, ps;
    
    printf("Informe o primeiro numero e seu peso: ");
    scanf("%i%f", &n1, &p1);
    
    printf("Informe o segundo numero e seu peso: ");
    scanf("%i%f", &n2, &p2);
    
    printf("Media ponderada dos dois numeros com seus pesos: %g.\n", mediaPesos(n1, n2, p1, p2));

    return 0;
}
