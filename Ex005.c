// e) Verificar e exibir o maior entre dois números inteiros.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2;

    printf("Informe o primeiro numero: ");
    scanf("%d", &n1);

    printf("Informe o segundo numero: ");
    scanf("%d", &n2);

    if (n1 > n2)
    {
        printf("%d eh o maior dentre os dois.", n1);
    }
    else
    {
        if (n1 = n2)
        {
            printf("Os dois numeros sao iguais.");
        }
        else
        {
            printf("%d eh o maior dentre os dois.", n2);
        }
    }
    return 0;
}