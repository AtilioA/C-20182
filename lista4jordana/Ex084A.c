/* 6) Leia dois vetores inteiros x e y, cada um com 3 elementos (assuma que o usuário não
informa elementos repetidos). Utilizando a estrutura switch case, fa:ça:
*/

#include <stdio.h>
#include <string.h>

#define LENGTH 5

int printaVet(int vetor[]);
int Soma(int x[], int y[], int soma[]);
int Prod(int x[], int y[], int prod[]);
int Sub(int x[], int y[], int sub[]);
int Intersec(int x[], int y[], int intersec[]);
int Dif(int x[], int y[], int dif[]);

int main()
{
    char op;
    int x[LENGTH], y[LENGTH], i,
        soma[LENGTH], prod[LENGTH], sub[LENGTH], dif[LENGTH], intersec[LENGTH];

    printf("Informe um vetor de 5 elementos sem repeticao:\n");
    for (i = 0; i < LENGTH; i++)
    {
        scanf("%i", &x[i]);
    }

    printf("Informe outro vetor de 5 elementos sem repeticao:\n");
    for (i = 0; i < LENGTH; i++)
    {
        scanf("%i", &y[i]);
    }

    while (op != 'Z')
    {
        printf("Digite a operacao:\n");
        printf("S = SOMA ENTRE AS POSICOES\n");
        printf("P = PRODUTO ENTRE AS POSICOES\n");
        printf("M = SUBTRACAO ENTRE AS POSICOES\n");
        printf("I = INTERSECAO DOS VETORES\n");
        printf("D = DIFERENCA DOS VETORES\n");
        printf("Z = SAIR\n");

        scanf(" %c", &op);

        switch (op)
        {
        case 'S':
            Soma(x, y, soma);
            break;

        case 'P':
            Prod(x, y, prod);
            break;

        case 'M':
            Sub(x, y, sub);
            break;

        case 'I':
            Intersec(x, y, intersec);
            break;

        case 'D':
            Dif(x, y, dif);
            break;

        case 'Z':
            break;
        }
    }

    return 0;
}

int printaVet(int vetor[])
{
    int i;

    for (i = 0; i < LENGTH; i++)
    {
        printf("[%i] ", vetor[i]);
    }

    printf("\n");
}

int Soma(int x[], int y[], int soma[])
{
    int i, j, k;

    for (i = 0; i < LENGTH; i++)
    {
        soma[i] = x[i] + y[i];
        printf("[%i]", soma[i]);
    }

    printf("\n");

    return 0;
}

int Prod(int x[], int y[], int prod[])
{
    int i, j, k;

    for (i = 0; i < LENGTH; i++)
    {
        prod[i] = x[i] * y[i];
        printf("[%i]", prod[i]);
    }

    printf("\n");

    return 0;
}

int Sub(int x[], int y[], int sub[])
{
    int i, j, k;

    for (i = 0; i < LENGTH; i++)
    {
        sub[i] = x[i] - y[i];
        printf("[%i]", sub[i]);
    }

    printf("\n");

    return 0;
}

int Intersec(int x[], int y[], int intersec[])
{
    int i, j, k;

    for (i = 0; i < LENGTH; i++)
    {
        for (j = 0; j < LENGTH; j++)
        {
            if (x[i] == y[j])
            {
                intersec[k] = x[i];
                printf("[%i]", intersec[k]);
                k++;
            }
        }
    }

    printf("\n");

    return 0;
}

int Dif(int x[], int y[], int dif[])
{
    int i, j, k, igual;

    printf("Em Y mas nao em X: ");

    for (i = 0; i < LENGTH; i++)
    {
        igual = 0; // Nova verificação (outro elemento de y)
        for (j = 0; j < LENGTH; j++)
        {
            if (x[j] == y[i])
            {
                igual++;
                break;
            }
        }

        if (igual == 0) // Nenhum elemento de x é igual ao elemento de índice i de y
        {
            dif[k] = y[i];
            printf("[%i] ", dif[k]);
            k++;
        }
    }

    printf("\n");

    return 0;
}
