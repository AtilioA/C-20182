/*
*/

#include <stdio.h>
#include <string.h>

int printaMat(int mat[][10]);
int inicMat(int mat[][10], int linhas, int colunas);

int main()
{
    int i, j;
    int matriz[2][2];

    for (i = 0; i < 2; i++) 
    {
        for(j = 0; j < 2; j++)
        {
            matriz[i][j] = 0;
        }
    }

    inicMat(matriz, 2, 2);
    printaMat(matriz);

    return 0;
}

int inicMat(int mat[][10], int linhas, int colunas)
{
    int i, j;
    
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            mat[i][j] = i + j;
        }
    }
    
    return 0;
}

int printaMat(int mat[][10])
{
    int i, j;

    for (i = 0; i < 2; i++) 
    {
        for(j = 0; j < 2; j++)
        {
            printf("m[%d][%d] = %d.\n", i, j, mat[i][j]);
        }
    }
        
    return 0;
}