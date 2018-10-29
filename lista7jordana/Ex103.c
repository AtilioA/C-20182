/* 2) Crie um tabuleiro de jogo da velha, usando uma matrizes de caracteres (char) 3x3, onde
o usuário pede o número da linha (1 até 3) e o da coluna (1 até 3).
A cada vez que o usuário entrar com esses dados, colocar um 'X' ou 'O' no local selecionado.
a. Não permita jogadas fora dos valores ou em lugares já preenchidos;
b. Não é necessário informar o vencedor, apenas indique que não há mais lugares
possíveis para se jogar. */

#include <stdio.h>
#include <string.h>

void insereJogada(char op, int col, int lin, char J[3][3]) // DONE:
{
    if (verificaPos(col, lin, J) == 1)
    {
        J[col][lin] = op;
    }
}

int verificaJogo(char J[3][3]) // O jogo ainda tem posições? // DONE:?
{
    int i, j, ocupado = 0;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (J[i][j] == 'O' || J[i][j] == 'X')
            {
                ocupado++;
            }
        }
    }

    if (ocupado == 9)
    {
        return 0;
    }

    else
    {
        return 1;
    }
}

int verificaPos(char col, int lin, char J[3][3]) // DONE:?
{
    if (J[col][lin] != 'O' && J[col][lin] != 'X')
    {
        return 1;
    }

    else
    {
        return 0;
    }

    /* Verifica a posição informada pelo usuário
    *  Compara com a matriz atual do jogo
    *  Se a posição estiver preenchida, retorna 0
    */
}

void inicializaMat(char A[3][3]) // DONE:
{
    int i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            A[i][j] = 0;
        }
    }
}

void printaMat(char A[3][3]) // DONE:
{
    int i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%i ", A[i][j]);
        }
        printf("\n");
    }

    printf("\n");
}

int main()
{
    char op, X[3][3], O[3][3];

    inicializaMat(X);
    inicializaMat(O);

/*
    while (sei la o que)
    {
        // jogo
    }
*/

    return 0;
}
