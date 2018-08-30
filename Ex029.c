// Faça um algoritmo que leia a idade de um atleta e escreva em que categoria ele se
// enquadra, seguindo o quadro

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;

    printf("Informe a idade do atleta: ");
    scanf("%i", &idade);

    if (idade < 5)
        printf("Atleta sem categoria - muito novo.");

    else if (idade <= 10)
        printf("Atleta infantil.");

    else if (idade <= 17)
        printf("Atleta juvenil.");

    else if (idade <= 30)
        printf("Atleta profissional.");

    else if (idade > 30)
        printf("Atleta senior.");

    return 0;
}
