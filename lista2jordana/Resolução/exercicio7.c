#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, n3, n4, soma;

    printf("Digite suas quatro notas:\n");
    scanf(" %f %f %f %f", &n1, &n2, &n3, &n4);

    soma = n1 + n2 + n3 + n4;

    if (soma >= 32)
    {
        printf("APROVADO\n");
    }

    else if (soma >= 20)
    {
        printf("PROVA FINAL\n");
        float nota = (100 - soma) / 4;
        printf("%.1f\n", nota);
    }

    else
    {
        printf("REPROVADO\n");
    }

    return 0;
}
