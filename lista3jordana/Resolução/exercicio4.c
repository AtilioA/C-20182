#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, divi;
    char opcao = 's';

    do
    {
        printf("Digite os dois valores:\n");
        scanf(" %f %f", &a, &b);

        while (b == 0)
        {
            printf("VALOR INVALIDO!\n");
            printf("Digite novamente:\n");
            scanf(" %f", &b);
        }

        divi = a / b;

        printf("%.2f\n", divi);
        printf("DESEJA REALIZAR OUTRO CALCULO (S/N)?\n");
        scanf(" %c", &opcao);

    } while (opcao == 's');
    
    return 0;
}
