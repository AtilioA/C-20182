#include <stdio.h>

#define lenga 3

void read_vector(int *v);
void menu(int *x, int *y);
void soma(int *x, int *y);
void subtract(int *x, int *y);
void product(int *x, int *y);
void intersect(int *x, int *y);
void non_intersect(int *x, int *y);
void print_vector(int *v, int len);

void non_intersect(int *x, int *y)
{
    int intersecc[5],
        i = 0,
        j = 0,
        len = 0,
        equal = 0;

    for (i = 0; i < lenga; i++)
    {
        equal = 0;
        for (j = 0; j < lenga; j++)
        {
            if (x[j] == y[i])
            {
                equal++;
                break;
            }
        }
        if (equal == 0)
        {
            intersecc[len] = y[i];
            len++;
        }
    }
    printf("Em Y: ");
    print_vector(intersecc, len);
}

void intersect(int *x, int *y)
{
    int intersecc[5],
        i = 0,
        j = 0,
        len = 0;

    for (i = 0; i < lenga; i++)
    {
        for (j = 0; j < lenga; j++)
        {
            if (x[j] == y[i])
            {
                intersecc[len] = x[j];
                len++;
                break;
            }
        }
    }

    print_vector(intersecc, len);
}

void product(int *x, int *y)
{
    int intersecc[5],
        i = 0;

    for (i = 0; i < lenga; i++)
    {
        intersecc[i] = x[i] * y[i];
    }

    print_vector(intersecc, lenga);
}

void subtract(int *x, int *y)
{
    int intersecc[5],
        i = 0;

    for (i = 0; i < lenga; i++)
    {
        intersecc[i] = x[i] - y[i];
    }

    print_vector(intersecc, lenga);
}

void soma(int *x, int *y)
{
    int intersecc[5],
        i = 0;

    for (i = 0; i < lenga; i++)
    {
        intersecc[i] = x[i] + y[i];
    }

    print_vector(intersecc, lenga);
}

void print_vector(int *v, int len)
{
    int i = 0;

    for (i = 0; i < len; i++)
    {
        printf("[%d]", v[i]);
    }
    printf("\n");
}

void menu(int *x, int *y)
{
    char cod;

    printf("Insira o codigo da operação:\n\n");
    printf("S - Soma entre X e Y\n");
    printf("P - Produto entre X e Y\n");
    printf("M - Subtração entre X e Y\n");
    printf("I - Interseção em X e Y\n");
    printf("D - Elementos diferentes entre X e Y\n");

    scanf(" %c", &cod);
    printf("\n");

    switch (cod)
    {
    case 'S':
        soma(x, y);
        break;
    case 'P':
        product(x, y);
        break;
    case 'M':
        subtract(x, y);
        break;
    case 'I':
        intersect(x, y);
        break;
    case 'D':
        non_intersect(x, y);
        break;
    case 'intersecc':
        return;
    }

    menu(x, y);
}

void read_vector(int *v)
{
    int i = 0;

    for (i = 0; i < lenga; i++)
    {
        scanf("%d", &v[i]);
    }
}

int main(void)
{
    int x[lenga],
        y[lenga];

    read_vector(x);
    read_vector(y);

    menu(x, y);
}