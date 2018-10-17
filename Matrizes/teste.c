#include <stdio.h>

void read(int a[5][5])
{
    int i = 0;
    int j = 0;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("Insira o %d %d: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}

void print(int a[5][5])
{
    int i = 0;

    for (i = 0; i < 5; i++)
    {
        printf("[%d]", a[i][i]);
    }
    printf("\n");
}

int main(void)
{
    int a[5][5];

    read(a);
    print(a);

    return 0;
}
