/* QUESTÃO 3 (4,0 pontos)
Um site que reúne várias informações de tarifas de voos de diversas companhias aéreas, está
reformulando seu sistema de dados, atualizando os valores de tarifas de voos. Faça um programa
que leia de um arquivo texto chamado voos.txt, informações de voos como a origem e o destino,
a companhia aérea e 3 tarifas diferentes, entre outras. O arquivo voos.txt contem na primeira
linha, o número de voos realizados, e nas linhas seguintes, o detalhamento de cada um deles: o
número do voo (um número inteiro positivo entre 100 e 999), seguido da origem, do destino e
da companhia aérea (strings de no máximo 5 letras), do número de conexões (um inteiro
positivo) e 3 tarifas diferentes (três valores reais). A partir desse arquivo, o seu programa deve:
a) Definir um novo tipo, chamado Voo, que tem como atributos cada uma das informações
listadas acima para cada voo.
b) Alocar dinamicamente um vetor de elementos do tipo voo, que tenha como dimensão o
número total de voos fornecido no arquivo de entrada e que seja preenchido com as informações
de voos lidas a partir do arquivo voos.txt.
c) Dado um código de origem, fornecido pelo teclado, escolher dentre as opções de voos apenas
aqueles que possuem a origem igual ao código fornecido. Alocar um vetor dinamicamente,
apenas com os voos que possuem o código de origem fornecido. Escrever em um arquivo de
nome tarifas.txt, o código de origem fornecido, seguido da lista de todos os voos a partir daquela
origem. Essa lista deve ter suprimida a coluna relativa à origem, pois é a mesma para todos os
voos. Além disso, cada linha deve conter como última informação, a média das tarifas fornecidas
no arquivo de entrada. Se não existir aquela origem no arquivo de entrada, imprima apenas no
arquivo tarifas.txt, a mensagem “As companhias aereas nao realizam voos partindo dessa
origem!”.
d) Desalocar o vetor dinâmico criado anteriormente. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Voo
{
    int idVoo;
    char origem[5];
    char destino[5];
    char companhia[5];
    int conexoes;
    float t1;
    float t2;
    float t3;
};
typedef struct Voo Voo;

void PrintaVoo(Voo voo)
{
    printf("%i ", voo.idVoo);

    printf("%s", voo.origem);
    // printf("%s", voo.destino);
    // printf("%s", voo.companhia);

    printf("%i ", voo.conexoes);
    printf("%.2f ", voo.t1);
    printf("%.2f ", voo.t2);
    printf("%.2f ", voo.t3);

    printf("\n");
}

void FPrintaVoo(FILE *f, Voo voo)
{
    fprintf(f, "%i ", voo.idVoo);

    // fprintf(f, "%s", voo.origem);
    fprintf(f, "%s", voo.destino);
    fprintf(f, "%s", voo.companhia);

    fprintf(f, "%.2f ", voo.t1);
    fprintf(f, "%.2f ", voo.t2);
    fprintf(f, "%.2f ", voo.t3);

    fprintf(f, "\n");
}

void FPrintaVoos(FILE *f, Voo *voos, char *codFornecido, int nVoos)
{
    int i;

    for (i = 0; i < nVoos; i++)
    {
        FPrintaVoo(f, voos[i]);
    }
}

Voo *BuscaVoos(FILE *f, Voo *voos, int nVoos, int *nEncontrados)
{
    int i, encontreiUmJordana = 0;
    char codFornecido[5];
    Voo *voosEncontrados;
    voosEncontrados = malloc(nVoos * sizeof(Voo));

    printf("Informe o codigo:\n");
    scanf(" %s", codFornecido);

    fprintf(f, "Codigo fornecido: %s\n", codFornecido);

    for (i = 0; i < nVoos; i++)
    {
        printf("%s", voos[i].origem);
        if (strcmp(voos[i].origem, codFornecido) == 0)
        {
            voosEncontrados[encontreiUmJordana] = voos[i];
            encontreiUmJordana++;
        }
    }

    *nEncontrados = encontreiUmJordana;

    return voosEncontrados;
}

Voo *LeArquivo(FILE *fvoos, Voo *voos, int *numeroDeVoos)
{
    Voo *voosLidos = voos;
    int i, vooAtual = 0;
    int nVoos = 0;

    fscanf(fvoos, " %i", &nVoos);
    *numeroDeVoos = nVoos;
    voos = malloc(nVoos * sizeof(Voo));

    printf("%i\n", nVoos);

    while (!feof(fvoos))
    {
        fscanf(fvoos, "%i ", &voosLidos[vooAtual].idVoo);
        printf("%i ", voosLidos[vooAtual].idVoo);

        fscanf(fvoos, "%s", &voosLidos[vooAtual].origem);
        // fgets(voosLidos[vooAtual].origem, 6, fvoos);
        printf("%s", voosLidos[vooAtual].origem);
        fscanf(fvoos, "%s", &voosLidos[vooAtual].destino);
        // fgets(voosLidos[vooAtual].destino, 6, fvoos);
        printf("%s", voosLidos[vooAtual].destino);
        // fgets(voosLidos[vooAtual].companhia, 6, fvoos);
        fscanf(fvoos, "%s", &voosLidos[vooAtual].companhia);
        printf("%s", voosLidos[vooAtual].companhia);

        fscanf(fvoos, " %i ", &voosLidos[vooAtual].conexoes);
        fscanf(fvoos, " %f ", &voosLidos[vooAtual].t1);
        fscanf(fvoos, " %f ", &voosLidos[vooAtual].t2);
        fscanf(fvoos, " %f", &voosLidos[vooAtual].t3);
        printf("%i ", voosLidos[vooAtual].conexoes);
        printf("%.2f ", voosLidos[vooAtual].t1);
        printf("%.2f ", voosLidos[vooAtual].t2);
        printf("%.2f ", voosLidos[vooAtual].t3);

        printf("\n");

        vooAtual++;
    }
    vooAtual--;

    return voosLidos;
}

int main()
{
    FILE *fvoos, *ftarifas;
    Voo *voos, *voosEncontrados;
    int nVoos = 0, nEncontrados = 0;
    voos = malloc(10 * sizeof(Voo));

    fvoos = fopen("voos.txt", "r");

    // LeArquivo(fvoos, voos, &nVoos);
    voos = LeArquivo(fvoos, voos, &nVoos);
    // voos = realloc(voos, nVoos * sizeof(Voo));

    ftarifas = fopen("tarifas.txt", "w");
    printf("\n\n");
    PrintaVoo(voos[0]);

    voosEncontrados = malloc(nVoos * sizeof(Voo));
    voosEncontrados = BuscaVoos(ftarifas, voos, nVoos, &nEncontrados);
    voosEncontrados = realloc(voosEncontrados, nEncontrados * sizeof(Voo));

    if (nEncontrados > 0)
    {
        FPrintaVoo(ftarifas, voosEncontrados[0]);
    }
    else
    {
        fprintf(ftarifas, "As companhias aereas nao realizam voos partindo dessa origem!");
    }

    fclose(fvoos);
    fclose(ftarifas);

    free(voos);
    free(voosEncontrados);

    return 0;
}
