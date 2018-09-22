// 7. Escreva um PROGRAMA que receba quatro valores inteiros representando hora
// e minuto de dois horários, respectivamente, e retorne quantos minutos se
// passarem entre o primeiro e o segundo horário. Lembre-se que a primeira
// hora deve ser menor que a segunda.

#include <stdio.h>
#include <stdlib.h>

int minutos(int h, int min)
{
    int minutos;

    minutos = (h * 60) + min;

    return minutos;
}


int ASegundaHoraPodeSerMaiorSim(int h1, int min1, int h2, int min2)
{
    int dif, minutos1, minutos2;

    minutos1 = minutos(h1, min1);
    minutos2 = minutos(h2, min2);
    dif = abs(minutos1 - minutos2);

    return dif;
}


int main()
{
    int h1, min1, h2, min2;

    printf("Informe as horas e minutos do primeiro horário [h min]: ");
    scanf("%i%i", &h1, &min1);

    printf("Informe as horas e minutos do segundo horário [h min]: ");
    scanf("%i%i", &h2, &min2);

    printf("O primeiro horário e o segundo horário estão separados por %i minutos.\n", ASegundaHoraPodeSerMaiorSim(h1, min1, h2, min2));

    return 0;
}
