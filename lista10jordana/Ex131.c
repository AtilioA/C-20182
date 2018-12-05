/* 2) Crie uma estrutura representando os alunos do curso de Programação II. A estrutura deve
conter a matrícula do aluno, nome, nota da primeira prova, nota da segunda prova e nota da
terceira prova.
(a) Permita ao usuário entrar com os dados de 5 alunos.
(b) Encontre o aluno com maior nota da primeira prova.
(c) Encontre o aluno com maior média geral.
(d) Encontre o aluno com menor média geral
(e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 7.0 para
aprovação. */

#include <stdio.h>
#include <stdlib.h>

struct alunopg2
{
    int matricula;
    char *nome;
    float p1, p2, p3;
    float media;
    char situacao;
};
typedef struct alunopg2 Aluno;

// Ambas funções pegaram o "primeiro" aluno de maior média (em empates)
Aluno maiorP1(Aluno *alunos, int nAlunos)
{
    int i;
    Aluno alunoMaiorP1;

    alunoMaiorP1 = alunos[0];
    for (i = 0; i < nAlunos; i++)
    {
        if (alunos[i].p1 > alunoMaiorP1.p1)
        {
            alunoMaiorP1 = alunos[i];
        }
    }

    return alunoMaiorP1;
}

Aluno maiorMedia(Aluno *alunos, int nAlunos)
{
    Aluno alunoMaiorMedia;
    int i;

    alunoMaiorMedia = alunos[0];
    for (i = 0; i < nAlunos; i++)
    {
        if (alunos[i].media > alunoMaiorMedia.media)
        {
            alunoMaiorMedia = alunos[i];
        }
    }

    return alunoMaiorMedia;
}

Aluno menorMedia(Aluno *alunos, int nAlunos)
{
    Aluno alunoMenorMedia;
    int i;

    alunoMenorMedia = alunos[0];
    for (i = 0; i < nAlunos; i++)
    {
        if (alunos[i].media < alunoMenorMedia.media)
        {
            alunoMenorMedia = alunos[i];
        }
    }

    return alunoMenorMedia;
}

float calculaMedia(Aluno aluno)
{
    float soma, media;

    soma = aluno.p1 + aluno.p2 + aluno.p3;
    media = soma / 3;

    return media;
}

char situacaoAluno(Aluno aluno)
{
    char situacao;

    if (aluno.media > 7)
    {
        situacao = 'S';
    }
    else
    {
        situacao = 'N';
    }

    return situacao;
}

void aprovacoes(Aluno *alunos, int nAlunos)
{
    int i;

    printf("SITUACAO DA TURMA");
    for (i = 0; i < nAlunos; i++)
    {
        printf("\nAluno %s\n", alunos[i].nome);
        printf("Situacao: ");
        if (alunos[i].situacao == 'S')
        {
            printf("APROVADO.\n");
        }
        else
        {
            printf("REPROVADO.\n");
        }
    }
}

char *removeQuebra(char *stringada)
{
    int i;

    for (i = 0; stringada[i] != '\0'; i++)
    {
        if (stringada[i] == '\n')
        {
            stringada[i] = '\0';
        }
    }

    return stringada;
}

Aluno leAluno()
{
    int tamNome = 30; // arbitrário
    Aluno aluno;

    printf("------------------------------\n");

    printf("Informe o numero da matricula:\n");
    scanf("%i", &aluno.matricula);

    printf("Informe o nome:\n");
    aluno.nome = malloc((tamNome + 1) * sizeof(char)); // + 1 para o '\0' da string
    getchar();                                         // para o fgets não pegar um caractere anterior indevido
    fgets(aluno.nome, tamNome, stdin);
    // aluno.nome = removeQuebra(aluno.nome); // Outra forma que dá na mesma
    removeQuebra(aluno.nome); // Remove quebra de linha do final do fgets

    printf("Informe a nota da P1:\n");
    scanf("%f", &aluno.p1);
    printf("Informe a nota da P2:\n");
    scanf("%f", &aluno.p2);
    printf("Informe a nota da P3:\n");
    scanf("%f", &aluno.p3);

    aluno.media = calculaMedia(aluno);

    aluno.situacao = situacaoAluno(aluno);

    return aluno;
}

Aluno *leAlunos(int nAlunos)
{
    int i;
    Aluno *alunos;
    alunos = malloc(nAlunos * sizeof(Aluno));

    for (i = 0; i < nAlunos; i++)
    {
        alunos[i] = leAluno();
    }

    return alunos;
}

int main()
{
    int nAlunos;
    Aluno *alunos, alunoMaiorMedia, alunoMenorMedia, alunoMaiorP1;

    printf("Informe o numero de alunos:\n");
    scanf("%i", &nAlunos);

    if (nAlunos < 2)
    {
        puts("WTF BRO");
        exit(0);
    }

    alunos = leAlunos(nAlunos);
    alunoMaiorP1 = maiorP1(alunos, nAlunos);
    alunoMaiorMedia = maiorMedia(alunos, nAlunos);
    alunoMenorMedia = menorMedia(alunos, nAlunos);
    aprovacoes(alunos, nAlunos);
    puts("");

    printf("Aluno com maior nota na P1: %s, com nota %.2f.\n", alunoMaiorP1.nome, alunoMaiorP1.p1);
    printf("Aluno com maior media: %s, com media %.2f.\n", alunoMaiorMedia.nome, alunoMaiorMedia.media);
    printf("Aluno com menor media: %s, com media %.2f.\n", alunoMenorMedia.nome, alunoMenorMedia.media);

    free(alunos); // yay

    return 0;
}
