#include <stdio.h>
#include <stdlib.h>

int main(){
    int v, f, jogos = 0, vf = 0, vc = 0, e = 0, opcao;
    do
    {
        printf("Digite o numero de gols marcado pelo Flamengo e o Numero de gols marcados pelo Vasco:\n");
        scanf(" %d %d", &f, &v);
        jogos++;
        if (f > v){
            vf++;
            printf("Flamengo\n");
        }
        else if (f < v){
            vc++;
            printf("Vasco\n");
        }
        else{
            e++;
            printf("Empate\n");
        }
        printf("Novo jogo (1 –Sim;  2 –Não)?\n");
        scanf(" %d", &opcao);
    }while(opcao == 1);
    printf("Jogos: %d\n", jogos);
    printf("Vitorias do Flamengo: %d\n", vf);
    printf("Vitorias do Vasco: %d\n", vc);
    printf("Empates: %d\n", e);
    if (vf > vc){
        printf("Flamengo venceu a maioria.\n");
    }
    else if (vf < vc){
        printf("Vasco venceu a maioria.\n");
    }
    else{
        printf("Não houve vencedor.");
    }
}