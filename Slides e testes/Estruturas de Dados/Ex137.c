/* Struct Matriz (m por n)

Definir uma estrutura para armazenar uma matriz e seus
valores de linhas e colunas; definir operações básicas para
manipulação de elementos (i,j), consulta de linhas e
colunas, alocação e liberação de memória */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int linhas;
    int colunas;
    int **dados;
} Matriz;

Matriz inicializaMatriz(Matriz M)
{
    int i, j;
    
    for (i = 0; i < M.linhas; i++)
    {
        for (j = 0; j < M.colunas; j++)
        {
            M.dados[i][j] = 0;
        }
    }

    return M;
}

void printaMatriz(Matriz M)
{
    int i, j;

    printf("\n");
    for (i = 0; i < M.linhas; i++)
    {
        for (j = 0; j < M.colunas; j++)
        {
            printf("%i ", (M.dados)[i][j]);
        }
        printf("\n");
    }
}

// REEEEEEEEEEEEEEEEEEEEE
Matriz mallocaMatriz(Matriz MatrizOriginal)
{
    int i;
    Matriz MatrizAlocada;

    (MatrizAlocada.dados) = (Matriz**)malloc(MatrizOriginal.colunas * sizeof(Matriz));
    for (i = 0; i < MatrizOriginal.colunas; i++)
    {
        MatrizAlocada.dados[i] = (Matriz**)malloc(MatrizOriginal.colunas * sizeof(Matriz));   
    }

    return MatrizAlocada;
}

int main()
{
    Matriz M1, M2;

    printf("Informe as dimensões da 1a matriz (linha, coluna):\n");
    scanf("%i", &M1.linhas);

    printf("Informe as dimensões da 1a matriz (linha, coluna):\n");
    scanf("%i", &M1.colunas);

    M1 = mallocaMatriz(M1);

    M1 = inicializaMatriz(M1);
    // printaMatriz(M1);
    // printaMatriz(M2);
    
    return 0;
}
