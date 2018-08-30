// 6) Faça um programa para calcular o valor das seguintes expressões [...]

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a = 1, i = 1, termo = 0, s1 = 0, s2 = 0, s3 = 0;

    printf("S1 = ");
    while (i <= 50)
    {
        termo = (a / i);
        s1 += termo;
        printf("%g + ", termo);
        a += 2;
        i += 1;
    }
    printf("0. Fim.\nSoma 1: %g.\n", s1);
    puts("----------------------------------------");

    printf("S2 = ");
    a = 1;
    while (i >= 1)
    {
        termo = ((pow(2, a)) / i);
        s2 += termo;
        printf("%.2f + ", termo);
        a += 1;
        i -= 1;
    }
    printf("0. Fim.\nSoma 2: %.1f.\n", s2);
    puts("----------------------------------------");

    printf("S3 = ");
    a = 1;
    while (a <= 10)
    {
        termo = (a / pow(a, 2));
        s3 += termo;
        printf("%g - ", termo);
        a += 1;

        termo = (a / pow(a, 2));
        s3 -= termo;
        printf("%g + ", termo);
        a += 1;
    }
    printf("0. Fim.\nSoma 3: %f.\n", s3);
    puts("----------------------------------------");

    return 0;
}
