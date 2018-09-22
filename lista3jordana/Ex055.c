// 6. Ler um número indeterminado de pares de valores. Cada par representa a idade de um
// aluno e sua respectiva nota. Calcular e escrever:
// A idade do aluno que obteve a maior nota.
// A nota do aluno mais velho.
// Obs.: o algoritmo será encerrado imediatamente após o usuário fornecer uma nota
// negativa (sem fornecer a respectiva nota).

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade, maisVelho = 0, idadeMaiorNota = 0;
    float nota = 0, maiorNota = 0, notaMaisVelho = 0;

    while (nota >= 0)
    {
        printf("Informe a idade: ");
        scanf("%i", &idade);

        printf("Informe a nota: ");
        scanf("%f", &nota);

        if (nota < 0)
        {
            break;
        }
        
        if (idade > maisVelho)
        {
            maisVelho = idade;
            notaMaisVelho = nota;
        }

        if (nota > maiorNota)
        {
            maiorNota = nota;
            idadeMaiorNota = idade;
        }
    }

    printf("Idade do aluno que obteve a maior nota: %i. Nota dele: %.2f.\n", idadeMaiorNota, maiorNota);
    printf("A nota do aluno mais velho: %.2f. Idade dele: %i.\n", notaMaisVelho, maisVelho);

    return 0;
}
