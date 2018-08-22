/* 2) Calcular a média de duas notas e diga se o aluno está aprovado caso sua média seja maior ou 
igual a 7.0, reprovado caso a média seja menor que 5.0 ou de recuperação caso contrário. 
• Entrada: 2 notas parciais definidas como números inteiros. 
• Saída: Média e mensagem apropriada. Precisão de 1 casa decimal. 
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, media;

    printf("Informe a 1a nota: ");
    scanf("%f", &n1);
    printf("Informe a 2a nota: ");
    scanf("%f", &n2);

    media = (n1 + n2) / 2;
    if (media >= 7)
    {
        printf("Media %.1f - Aprovado", media);
    }
    else
    {
        if (media < 5)
        {
            printf("Media %.1f - Reprovado", media);
        }
        else
        {
            printf("Media %.1f - Em recuperacao", media);
        }
    }

    return 0;
}
