#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int modo;
    float l, h, s, x1, y1, x2, y2;
    printf("Digite 1 para calcular pela altura e largura\nOu 2 para calcular pelas coordenadas de dois cantos opostos:\n");
    scanf(" %d", &modo);

    switch (modo)
    {
    case 1:
        printf("Digite a altura e largura:\n");
        scanf(" %f %f", &l, &h);
        s = l * h;
        break;

    case 2:
        printf("Digite as coordenadas de dois cantos opostos:\n");
        scanf(" %f %f %f %f", &x1, &y1, &x2, &y2);
        s = abs((x1 - x2) * (y1 - y2));
        break;

    default:
        return 0;
    }

    printf("Area: %.2f\n", s);

    return 0;
}