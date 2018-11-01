/* 9) Implemente uma função que calcule a área da superfície e o volume de uma esfera de
raio R. Essa função deve possuir a seguinte assinatura:
void calc_esfera(float R, float *area, float *volume); */

#include <stdio.h>
#include <math.h>

#define PI 3.1415

void calc_esfera(float R, float *area, float *volume)
{
    *volume = (4 / 3) * PI * R * R * R;
    *area = 4 * PI * R * R;
} // não consegui usar pow() triste 

int main()
{
    float R, areaS, volume;

    printf("Informe o raio da esfera: ");
    scanf("%f", &R);

    calc_esfera(R, &areaS, &volume);

    printf("Area da superficie da esfera: %g\n", areaS);
    printf("Volume da esfera: %g\n", volume);

    return 0;
}