/*
*/

#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, p, mat[2][2];

    printf("Informe uma matriz:\n");

    for (i = 0; i <= 1; ++i)
    {
        printf("Informe a posicao [%d][%d]: ", i, j);
        scanf("%i", &p);

        mat[i][j] = p;

        for (j = 1; j > 0; j--)
        {
            printf("Informe a posicao [%d][%d]: ", i, j);
            scanf("%i", &p);

            mat[i][j] = p;
        }
    }

    for (i = 0; i <= 1; ++i)
    {
        printf("%d \n", mat[i][j]);
        for (j = 1; j > 0; j--)
        {
            printf("%d \n", mat[i][j]);
        }
    }

    return 0;
}
