// Programa para jogar pedra, papel e tesoura com o computador
// Adaptado do Python

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int jokempo()
{
    int player, pc, i;
    srand(time(0));
    pc = rand();

    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("~~~ PEDRA, PAPEL E TESOURA ~~~\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    
    printf("Selecione uma das opcoes para jogar:\n[1] Pedra\n[2] Papel\n[3] Tesoura\n");
    scanf("%i", &player);

    while (player < 1 || player > 3)
    {
        printf("Opcao invalida! Tente novamente: ");
        scanf("%i", &player);
    }

    for (i = 1; i <= 3; i++)
        pc = rand() % 3 + 1;

    if (player == 1 && pc == 2)
        printf("Voce perdeu! Pedra eh embrulhada por papel.");
    else if (player == 2 && pc == 1)
        printf("Voce ganhou! Papel embrulha pedra.");
    else if (player == 1 && pc == 3)
        printf("Voce ganhou! Pedra quebra tesoura.");
    else if (player == 3 && pc == 1)
        printf("Voce perdeu! Tesoura eh quebrada por pedra.");
    else if (player == 2 && pc == 3)
        printf("Voce perdeu! Papel eh cortado por tesoura.");
    else if (player == 3 && pc == 2)
        printf("Voce ganhou! Tesoura corta papel.");
    else if (player == 1 && pc == 1)
        printf("Empate! O computador tambem escolheu pedra.");
    else if (player == 2 && pc == 2)
        printf("Empate! O computador tambem escolheu papel.");
    else if (player == 3 && pc == 3)
        printf("Empate! O computador tambem escolheu tesoura.");

    return 0;
}

int main()
{
    char r;
    while (1)
    {
        jokempo();
        printf("\nDeseja jogar novamente? [S ou N]\n");
        scanf(" %c", &r);

        if (r == 'S' || r == 's')
            main();
        else if (r == 'N' || r == 'n')
            exit(0);
        else
        {
            printf("que");
            while (r != 's' || r != 'S' || r != 'n' || r != 'N')
            {
                printf("\nDeseja jogar novamente? [S ou N]\n");
                scanf(" %c", &r);
            }
        }
    }

    return 0;
}
