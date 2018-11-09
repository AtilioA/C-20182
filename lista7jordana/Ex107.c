/* 6) Faça um programa que leia uma matriz de 5 linhas e 4 colunas contendo as seguintes
informações sobre alunos de uma disciplina, sendo todas as informações do tipo inteiro:
a. Primeira coluna: número de matrícula
b. Segunda coluna: média das provas
c. Terceira coluna: média dos trabalhos
d. Quarta coluna; nota final
Elabore um programa que:

i) Leia as três primeiras informações de cada aluno (matrícula, média das provas e
média dos trabalhos)

ii) Calcula a nota final como sendo a soma da média das provas e da média dos
trabalhos

iii) Imprima a matrícula do aluno que obteve a maior nota final (assuma que só existe
uma maior nota)

iv) Imprima a média aritmética das notas finais */

#include <stdio.h>

#define lin 5
#define col 4

void printaMat(int A[lin][col])
{
    int i, j;

    printf("\n");
    for (i = 0; i < lin; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%i ", A[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void notaFinal(int A[lin][col])
{
    int i, j, notaFinal = 0, maiorNotaFinal = 0;
    float mediaFinais = 0;

    for (i = 0; i < lin; i++)
    {
        notaFinal = 0;
        for (j = 1; j < col; j++)
        {
            if (j >= 1 && j <= 2)
            {
                notaFinal += A[i][j];
            }

            else if (j == 3)
            {
                A[i][j] = notaFinal;
                mediaFinais += notaFinal;

                if (notaFinal > maiorNotaFinal)
                {
                    maiorNotaFinal = notaFinal;
                }
            }
        }
    }

    mediaFinais /= lin;
    printf("\nMaior nota final: %i.\n", maiorNotaFinal);
    printf("Media das notas finais: %g.\n", mediaFinais);

    printaMat(A);
}

void leMat(int A[lin][col])
{
    int i, j;

    printf("Informe os elementos da matriz\n[matricula / media das provas / media dos trabalhos]:\n");
    for (i = 0; i < lin; i++)
    {
        printf("Aluno %i:\n", i + 1);
        for (j = 0; j < col - 1; j++)
        {
            scanf("%i", &A[i][j]);
        }
    }
}

int main()
{
    int alunos[lin][col];

    leMat(alunos);

    notaFinal(alunos);

    return 0;
}
