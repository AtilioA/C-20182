/* 2) Crie um tabuleiro de jogo da velha, usando uma matrizes de caracteres (char) 3x3, onde
o usuário pede o número da linha (1 até 3) e o da coluna (1 até 3).
A cada vez que o usuário entrar com esses dados, colocar um 'X' ou 'O' no local selecionado.
a. Não permita jogadas fora dos valores ou em lugares já preenchidos;
b. Não é necessário informar o vencedor, apenas indique que não há mais lugares
possíveis para se jogar. */

#include <stdio.h>
#include <string.h>

void printaMat(char A[3][3])
{
    int i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%c ", A[i][j]);
        }
        printf("\n");
    }

    printf("\n");
}

int marcouTres(char J[3][3])
{
    int i, j, k, marcouO, marcouX;

    for (i = 0; i < 3; i++) // Linhas
    {
        marcouO = 0;
        marcouX = 0;
        for (j = 0; j < 3; j++)
        {
            if (J[i][j] == 'X')
            {
                marcouX++;
            }
            if (J[i][j] == 'O')
            {
                marcouO++;
            }
        }

        if (marcouX == 3)
        {
            printf("\nO jogador X venceu!\n");
            printaMat(J);

            return 1;
        }
        if (marcouO == 3)
        {
            printf("\nO jogador O venceu!\n");
            printaMat(J);

            return 1;
        }
    }

    for (i = 0; i < 3; i++) // Colunas
    {
        marcouO = 0;
        marcouX = 0;

        for (j = 0; j < 3; j++)
        {
            if (J[j][i] == 'X')
            {
                marcouX++;
            }
            if (J[j][i] == 'O')
            {
                marcouO++;
            }
        }

        if (marcouX == 3)
        {
            printf("\nO jogador X venceu!\n");
            printaMat(J);
            return 1;
        }
        if (marcouO == 3)
        {
            printf("\nO jogador O venceu!\n");
            printaMat(J);
            return 1;
        }
    }

    // Diagonais:

    marcouO = 0;
    marcouX = 0;

    for (j = 0; j < 3; j++) // Principal
    {
        if (J[j][j] == 'X')
        {
            marcouX++;
        }
        if (J[j][j] == 'O')
        {
            marcouO++;
        }
    }

    if (marcouX == 3)
    {
        printf("\nO jogador X venceu!\n");
        printaMat(J);
        return 1;
    }
    if (marcouO == 3)
    {
        printf("\nO jogador O venceu!\n");
        printaMat(J);
        return 1;
    }

    marcouO = 0;
    marcouX = 0;

    for (j = 2, k = 0; j >= 0; j--, k++) // Secundária
    {
        if (J[j][k] == 'X')
        {
            marcouX++;
        }

        if (J[j][k] == 'O')
        {
            marcouO++;
        }
    }

    if (marcouX == 3)
    {
        printf("\nO jogador X venceu!\n");
        printaMat(J);
        return 1;
    }
    if (marcouO == 3)
    {
        printf("\nO jogador O venceu!\n");
        printaMat(J);
        return 1;
    }

    return 0;
}

int verificaJogo(char J[3][3]) // O tabuleiro ainda tem posições?
{
    int i, j, ocupado = 0;

    if (marcouTres(J) == 1)
    {
        return 0;
    }

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
        printf("\nNINGUEM VENCEU!\n");
        printaMat(J);
        return 0;
    }

    else
    {
        return 1;
    }
}

void insereJogada(char jogador, int lin, int col, char J[3][3])
{
    while (lin > 3 || lin < 0 || col > 3 || col < 0)
    {
        printf("Posicao invalida! Escolha uma posicao dentro do tabuleiro [linha, coluna]:\n");
        scanf("%i%i", &lin, &col);
        lin -= 1; // contagem começa do 1
        col -= 1; //
    }

    while (J[lin][col] == 'O' || J[lin][col] == 'X')
    {
        printf("Posicao invalida! Escolha uma posicao que nao tenha sido ocupada [linha, coluna]:\n");
        scanf("%i%i", &lin, &col);
        lin -= 1; // contagem começa do 1
        col -= 1; //
    }

    if (jogador == 'X')
    {
        J[lin][col] = 'X';
    }
    else if (jogador == 'O')
    {
        J[lin][col] = 'O';
    }
}

void inicializaMat(char A[3][3])
{
    int i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            A[i][j] = '_';
        }
    }
}

int ehPar(int n)
{
    if (n % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

char quemJoga(int n)
{
    if (ehPar(n))
    {
        printf("Vez do jogador X.\n");
        printf("Informe onde ira jogar [linha, coluna]:\n");
        return 'X';
    }
    else
    {
        printf("Vez do jogador O.\n");
        printf("Informe onde ira jogar [linha, coluna]:\n");
        return 'O';
    }
}

int main()
{
    char jogador, J[3][3];
    int turnos, col, lin;
    inicializaMat(J);

    printf("== JOGO DA VELHA ==\n");

    while (verificaJogo(J) == 1)
    {
        printaMat(J);

        jogador = quemJoga(turnos);
        scanf("%i%i", &lin, &col);
        lin -= 1; // contagem começa do 1
        col -= 1; //

        insereJogada(jogador, lin, col, J);
        turnos++;
    }

    printf("\nTurnos jogados: %i", turnos);

    return 0;
}
