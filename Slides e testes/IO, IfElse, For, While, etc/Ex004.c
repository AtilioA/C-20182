// h) Calcular e exibir a área de um círculo de raio r, dado r como entrada.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159265

float main()
{
    int a, vezes;
    float raio, area;

    printf("Quantas areas quer calcular? ");
    scanf("%d", &vezes);

    for (a = 1; a < vezes + 1; a = a + 1)
    {
        printf("Informe o raio: ");
        scanf("%f", &raio);

        area = PI * (pow(raio, 2));

        printf("A area do circulo de raio %g eh %f. \n", raio, area);
        printf("%da area calculada! \n", a);
    }
    
    return 0;
}
