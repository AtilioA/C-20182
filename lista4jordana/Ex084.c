/* Leia dois vetores inteiros x e y, cada um com len elementos (assuma que o usuário não
informa elementos repetidos). Utilizando a estrutura switch case, fa:ça:
*/

#include <stdio.h>
#include <string.h>

#define len 3

int printaVet(int vetor[]);
int intersecc(int x[], int y[]);

int main()
{
    char op;
    int x[len], y[len], i = 0, j = 0, lenga = 0,
                        soma[len], prod[len], sub[len], dif[len];

    printf("Informe um vetor de 5 elementos sem repeticao: ");
    for (i = 0; i < len; i++)
    {
        scanf("%i", &x[i]);
    }

    printf("Informe outro vetor de 5 elementos sem repeticao: ");
    for (i = 0; i < len; i++)
    {
        scanf("%i", &y[i]);
    }

    soma[i] = x[i] + y[i];
    sub[i] = x[i] - y[i];
    prod[i] = x[i] * y[i];

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
            printaVet(soma);
            break;

        case 'P':
            printaVet(prod);
            break;

        case 'M':
            printaVet(sub);
            break;

        case 'I':
            intersecc(x, y);

            break;

        case 'D':
            printaVet(dif);
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

    for (i = 0; i < len; i++)
    {
        printf("[%i] ", vetor[i]);
    }

    printf("\n");
}

int intersecc(int x[], int y[])
{
    int i, j;

    for (i = 0; i < len; i++)
    {
        for (j = 0; j < len; j++)
        {
            if (x[i] == y[j])
            {
                printf("[%i]", x[i]);
            }
        }
    }

    printf("\n");

    return 0;
}