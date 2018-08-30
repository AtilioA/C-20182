// Para participar da categoria OURO do 1º. Campeonato Mundial de bolinha de Gude o
// jogador deve pesar entre 70 Kg (inclusive) e 80 kg (inclusive) e medir 1,75 m (inclusive)
// e 1,90 m (inclusive). Leia a altura e o peso de um jogador e determine se o jogador está
// apto a participar do campeonato escrevendo uma das seguintes mensagens, conforme
// cada situação:
// • “RECUSADO POR ALTURA” – somente se a altura do jogador for inválida.
// • “RECUDADO POR PESO”- somente se o peso do jogador for inválido.
// • “TOTALMENTE RECUSADO”- se a altura e o peso do jogador forem inválidos.
// • “ACEITO”- se a altura e o peso do jogador estiverem dentro da faixa
// especificada.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float peso, altura;
    
    printf("Informe o peso do jogador em kg: ");
    scanf("%f", &peso);
    
    printf("Informe a altura do jogador em m: ");
    scanf("%f", &altura);

    if (peso >= 70 && peso <= 80 && altura >= 1.75 && altura <= 1.90)
        printf("ACEITO. \n");
    else if (peso >= 70 && peso <= 80)
        printf("RECUSADO POR ALTURA. \n");
    else if (altura >= 1.75 && altura <= 1.90)
        printf("RECU'D'ADO POR PESO. \n");
    else
        printf("TOTALMENTE RECUSADO. \n");    

    return 0;
}
