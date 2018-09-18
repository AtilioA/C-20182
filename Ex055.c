// 

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float total = 0, media, notas[3];
    int i;

    for(i = 1; i <= 3; i++)
    {
        printf("Informe a %ia nota: ", i);
        scanf("%g", &notas[i]);
        total += notas[i];
    }

    media = total / (i - 1);

    printf("Media das notas: %g.\nNotas acima da media:\n", media);

    for(i = 1; i <= 3; i++)
    {
        if (notas[i] > media)
        {
            printf("%g.\n", notas[i]);
        }
    }

    return 0;
}
