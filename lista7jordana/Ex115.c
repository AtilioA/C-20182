/* 14) Crie um programa para calcular a área e o perímetro de um hexágono. O seu programa
deve implementar uma função chamada calcula_hexagono que calcule a área e o
perímetro de um hexágono regular de lado L. A função deve obedecer o seguinte
protótipo:
void calcula_hexagono(float L, float *area, float *perimetro);
*/

#include <stdio.h>
#include <math.h>

void calcula_hexagono(float L, float *area, float *perimetro)
{
    *area = 3 * pow(L, 2) * sqrt(3) / 2;
    *perimetro = 6 * L;
}

int main()
{
    float L, area, perimetro;

    printf("Informe o tamanho do lado do hexagono regular: ");
    scanf("%f", &L);

    calcula_hexagono(L, &area, &perimetro);

    printf("Area: %g.\nPerimetro: %g", area, perimetro);

    return 0;
}
