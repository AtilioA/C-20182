// Escreva um programa para calcular o valor de π de acordo com a
// seguinte fórmula:
// π =√∑ k=n 1 k62

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n, k;
    float r, s = 0;

    printf("Informe o valor de n: ");
    scanf("%i", &n);

    for(k = 1; k <= n; ++k)
    {
        r = (6 / (pow(k, 2)));
        s += r;
    }
    
    printf("%.6f", sqrt(s));

    return 0;
}
