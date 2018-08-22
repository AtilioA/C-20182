// k) Construa um programa para calcular a área de um círculo e o raio de um círculo com metade desta área. Utilize o valor de Π = 3.141592.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.141592

int main()
{
    float area, raio, raiometade;

    printf("Informe o raio: ");
    scanf("%f", &raio);

    area = PI*pow(raio,2);
    printf("Area do circulo de raio %g: %f.\n", raio, area);

    raiometade = sqrt(area/(PI*2));
    printf("Raio do circulo com metade desta area: %f.", raiometade);

    return 0;
}
