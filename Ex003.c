// g) Calcular e exibir a área de um círculo de raio 2.

#include <stdio.h>
#include <math.h>

#define PI 3.14159265

float main()
{
    float raio, area;

    raio = 2;
    area = PI * (pow(raio, 2));

    printf("A area do circulo de raio %g eh %g.\n", raio, area);

    return 0;
}
