/* 1) Considerando a estrutura
struct Vetor{
float x;
float y;
float z;
};
para representar um vetor no R3 , implemente um programa que calcule a soma de dois vetores
e imprima o resultado. */

#include <stdio.h>
#include <stdlib.h>

typedef struct Vetor
{
    float x;
    float y;
    float z;
} Vetor;

void leVetR3(Vetor *v)
{
    printf("Informe o valor x do vetor:\n");
    scanf("%f", &((*v).x));

    printf("Informe o valor y do vetor:\n");
    scanf("%f", &(*v).y);

    printf("Informe o valor z do vetor:\n");
    scanf("%f", &(*v).z);
}

void printaVetR3(Vetor v)
{
    printf("Vetor R3:\n");
    printf("x: %g y: %g z: %g\n", v.x, v.y, v.z);
}

// Sem ponteirinhos
Vetor somaVetR3(Vetor v1, Vetor v2)
{
    Vetor v3;

    v3.x = v1.x + v2.x;
    v3.y = v1.y + v2.y;
    v3.z = v1.z + v2.z;

    return v3;
}

int main()
{
    Vetor v1, v2, v3;

    printf("Vetor 1:\n");
    leVetR3(&v1);
    printf("Vetor 2:\n");
    leVetR3(&v2);

    printaVetR3(v1);
    printaVetR3(v2);
    printf("Vetor 3 (SOMA):\n");
    v3 = somaVetR3(v1, v2);
    printaVetR3(v3);

    return 0;
}
