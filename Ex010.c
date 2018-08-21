// 2 (dado nomes, salários e vendas de duas pessoas, calcular bônus e imprimir quem possui maior ganho após adição do bônus)

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char nome1[30], nome2[30];
    float sal1, sal2, vendas1, vendas2, bonus1, bonus2, sal1bonus, sal2bonus;

    printf("Informe o nome, salario e vendas realizadas da primeira pessoa: ");
    scanf("%s%f%f", &nome1, &sal1, &vendas1);
    printf("Informe o nome, salario e vendas realizadas da segunda pessoa: ");
    scanf("%s%f%f", &nome2, &sal2, &vendas2);

    bonus1 = vendas1 * 0.15;
    bonus2 = vendas2 * 0.15;
    sal1bonus = (sal1 + bonus1);
    sal2bonus = (sal2 + bonus2);

    if (sal1bonus > sal2bonus)
    {
        printf("%s possui o maior salario, com %g reais.\n", nome1, sal1bonus);
    }
    else
    {
        if (sal2bonus > sal1bonus)
        {
            printf("%s possui o maior salario, com %g reais.\n", nome2, sal2bonus);
        }
        else
        {
            printf("Ambos ficam com o mesmo salario.");
        }
    }

    return 0;
}