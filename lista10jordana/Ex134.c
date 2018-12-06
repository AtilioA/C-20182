/* 5) Faça um programa que leia um inteiro N e:
• Crie e leia um vetor com os dados de N carros: marca (máximo 15 letras), ano e preço.• Leia um valor P e mostre as informações de todos os carros com preço menor que P. Repita
este processo até que seja lido um valor P = 0. */

#include <stdio.h>
#include <stdlib.h>

struct carro
{
    char *marca;
    float preco;
    int ano;
};
typedef struct carro Carro;

void PrintaCarro(Carro carro)
{
    puts("---------------------------");
    printf("Marca: %s\n", carro.marca);
    printf("Preco: %.2f\n", carro.preco);
    printf("Ano: %i\n", carro.ano);
}

void PrintaCarros(Carro *carros, int nCarros)
{
    int i;

    for (i = 0; i < nCarros; i++)
    {
        PrintaCarro(carros[i]);
    }
}

Carro LeCarro(Carro carro)
{
    int tamNome = 15;
    puts("---------------------------");
    printf("Informe a marca:\n");

    carro.marca = malloc((tamNome + 1) * sizeof(char));
    getchar();
    fgets(carro.marca, tamNome, stdin);

    printf("Informe o preco:\n");
    scanf("%f", &carro.preco);

    printf("Informe o ano:\n");
    scanf("%i", &carro.ano);
    puts("");

    return carro;
}

Carro *LeCarros(int nCarros)
{
    int i;
    Carro *carros;
    carros = malloc(nCarros * sizeof(Carro));

    for (i = 0; i < nCarros; i++)
    {
        carros[i] = LeCarro(carros[i]);
    }

    return carros;
}

// se liga ai sou bilingue:
Carro *CheaperThanP(Carro *carros, float preco, int nCarros, int *nCarrosMaisBaratos)
{
    int i, k = 0;
    Carro *cheaperThanP;
    cheaperThanP = malloc(nCarros * sizeof(Carro));

    for (i = 0; i < nCarros; i++)
    {
        printf("\n%.2f\n%.2f\n", preco, carros[i].preco);
        if (preco > carros[i].preco)
        {
            cheaperThanP[k] = carros[i];
            k++;
        }
    }
    k--;

    *nCarrosMaisBaratos = k + 1;
    cheaperThanP = realloc(cheaperThanP, (k + 1) * sizeof(Carro));

    return cheaperThanP;
}

int main()
{
    int nCarros, nCarrosMaisBaratos;
    float P;
    Carro *carros, *carrosMaisBaratos;

    printf("Informe quantos carros:\n");
    scanf("%i", &nCarros);

    carros = malloc(nCarros * sizeof(Carro));
    carrosMaisBaratos = malloc(nCarros * sizeof(Carro));

    carros = LeCarros(nCarros);

    PrintaCarros(carros, nCarros);

    do
    {
        printf("Exibir carros abaixo de qual preco?\n$");
        scanf("%f", &P);

        carrosMaisBaratos = CheaperThanP(carros, P, nCarros, &nCarrosMaisBaratos);
        carrosMaisBaratos = realloc(carrosMaisBaratos, (nCarrosMaisBaratos + 1) * sizeof(Carro));
        if (nCarrosMaisBaratos > 0)
        {
            printf("\nCarros abaixo de $%.2f:\n", P);
            PrintaCarros(carrosMaisBaratos, nCarrosMaisBaratos);
        }
        else
        {
            printf("Nao ha carros mais baratos que $%.2f. Tente outro preco.\n", P);
        }
    } while (P != 0);

    for (int i = 0; i < nCarros; i++)
    {
        free(carros[i].marca);
    }
    for (int i = 0; i < nCarrosMaisBaratos; i++)
    {
        free(carrosMaisBaratos[i].marca);
    }
    free(carros);
    free(carrosMaisBaratos);

    return 0;
}
