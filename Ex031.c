// //5) A Federação de Futebol contratou você para escrever um programa para fazer uma
// estatística de vários jogos (Flamengo e Vasco). Escreva um algoritmo para ler o número
// de gols marcados pelo Flamengo e o número de gols marcados pelo Vasco em um jogo,
// imprimindo o nome do vencedor ou a palavra EMPATE. Logo após imprima a mensagem
// “Novo jogo (1 – Sim; 2 – Não)?”. Se a resposta for 1 o algoritmo deve ser executado
// novamente solicitando o número de gols marcados em uma nova partida, caso contrário
// deve ser encerrado e impresso:

// a. Quantos jogos fizeram parte da estatística.
// b. O número de vitórias do Flamengo.
// c. O número de vitórias do Vasco.
// d. O número de empates.
// e. Uma mensagem indicando qual time venceu o maior número de jogos ou NÃO
// HOUVE VENCEDOR.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int golsFla = 0, golsVas = 0, flaVence = 0, vasVence = 0, empate = 0, jogos = 0, novoJogo = 1;

    while (novoJogo != 2)
    {
    printf("Informe o numero de gols do Flamengo: \n");
    scanf("%i", &golsFla);

    printf("Informe o numero de gols do Vasco: \n");
    scanf("%i", &golsVas);

    if (golsFla > golsVas)
        {
        printf("VENCEDOR: FLAMENGO\n");
        flaVence += 1;
        }
    else if (golsFla == golsVas)
    {
        printf("EMPATE\n");
        empate += 1;
    }
    else
    {
        printf("VENCEDOR: VASCO\n");
        vasVence += 1;
    }

    jogos += 1;

    printf("Novo jogo? [1 – Sim; 2 – Nao]\n");
    scanf("%i", &novoJogo);
    }

    printf("%i partidas foram realizadas.\n", jogos);
    printf("Vitorias do Flamengo: %i\n", flaVence);
    printf("Vitorias do Vasco: %i\n", vasVence);
    printf("Empates: %i\n", empate);

    if (flaVence > vasVence)
        printf("VENCEDOR: FLAMENGO\n");
    else if (flaVence == vasVence)
        printf("NAO HOUVE VENCEDOR\n");
    else
        printf("VENCEDOR: VASCO\n");

    return 0;
}
