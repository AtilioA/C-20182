/* 6) Faça um programa que apure o resultado de uma eleição que possua 100 eleitores. Suponha
que existam 5 votos cujos códigos de identificação são: 1, 2, 3, 4, 5. Considere um arquivo
texto (denominado “votos.txt”) que contém, em cada linha, um determinado voto (um voto é
representado pelo código de identificação do candidato).
O programa deverá apresentar, como resultado, o código de identificação e a quantidade de
votos do candidato mais votado, o código de identificação e a quantidade de votos do candidato
menos votado e a quantidade de votos nulos (um voto nulo é um voto cujo código de
identificação é inválido) */

#include <stdio.h>
#include <stdlib.h>

void inicializaVet(int *v, int tam)
{
    int i;

    for (i = 0; i < tam; i++)
    {
        v[i] = 0;
    }
}

void printaVet(int *v, int tam)
{
    int i;

    printf("\n");
    for (i = 0; i < tam; i++)
    {
        printf("%i ", v[i]);
    }
    printf("\n");
}

int indiceMaiorDoVet(int *v, int tam)
{
    int i = 0, maior, indice = 0;

    maior = v[0];

    for (i = 0; i < tam; i++)
    {
        if (v[i] > maior)
        {
            maior = v[i];
            indice = i;
        }
    }

    return indice;
}

int indiceMenorDoVet(int *v, int tam)
{
    int i, menor, indice = 0;

    menor = v[0];

    for (i = 0; i < tam; i++)
    {
        if (v[i] < menor)
        {
            menor = v[i];
            indice = i;
        }
    }

    return indice;
}

// Retorna vetor que é realocado conforme são lidas as linhas (votos)
// Cada 'pos' é um voto. Neste caso, temos 100 votos
int *leVotos(FILE *fvotos, int *tam)
{
    int *vet, pos = 0;
    vet = (int *)malloc(sizeof(int));

    while (!feof(fvotos))
    {
        fscanf(fvotos, "%i\n", &vet[pos]);
        pos++;
        vet = realloc(vet, (pos + 1) * sizeof(int));
    }

    *tam = pos;

    return vet;
}

void classificaVotos(int *votosVet, int *qtdVotos, int tam)
{
    int i;

    // Se o voto lido não tiver um código válido, é registrando mais um voto nulo
    for (i = 0; i < tam; i++)
    {
        if (votosVet[i] >= 1 && votosVet[i] <= 5)
        {
            qtdVotos[votosVet[i] - 1]++;
        }
        else
        {
            qtdVotos[5]++;
        }
    }
}

int main()
{
    int indiceMaisVotos, maisVotos, indiceMenosVotos, menosVotos, nulos;
    int votoAtual, *qtdVotos, tam, i;

    // Vetor que armazena os votos. Cada índice é um candidato
    qtdVotos = (int *)malloc(6 * sizeof(int));
    inicializaVet(qtdVotos, 6);

    FILE *fvotos;
    fvotos = fopen("votos.txt", "r");

    // Vetor que armazena a leitura do arquivo de votos.
    int *votosVet;
    votosVet = leVotos(fvotos, &tam);

    // Atribuímos os votos de acordo com os códigos e salvamos em qtdVotos
    classificaVotos(votosVet, qtdVotos, tam);

    // printaVet(qtdVotos, 6);

    // Calcula o índice do maior/menor número (de votos).
    // Ele corresponde ao código/candidato com mais/menos votos
    // Usamos esse índice para identificar tal candidato.
    indiceMaisVotos = indiceMaiorDoVet(qtdVotos, 5);
    maisVotos = qtdVotos[indiceMaisVotos];

    indiceMenosVotos = indiceMenorDoVet(qtdVotos, 5);
    menosVotos = qtdVotos[indiceMenosVotos];

    nulos = qtdVotos[5];

    printf("Mais votos: %i com %i votos\n", indiceMaisVotos + 1, maisVotos);
    printf("Menos votos: %i com %i votos\n", indiceMenosVotos + 1, menosVotos);
    printf("Nulos: %i votos\n", nulos);

    free(qtdVotos);
    free(votosVet);
    fclose(fvotos);

    return 0;
}
