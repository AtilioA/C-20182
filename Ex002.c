// c) Converter valores de temperatura de Fahrenheit para Celsius.
#include <stdio.h>

int main()
{
    char escala;
    float temp, c, f;

    printf("Insira a escala de entrada [C/F]: ");
    scanf("%c", &escala);

    printf("Insira a temperatura: ");
    scanf("%f", &temp);

    if (escala == 'C' || escala == 'c')
    {
        c = temp;
        f = (temp * 9 / 5) + 32;
        printf("%g graus Celsius equivalem a %g graus Fahrenheit.\n", temp, f);
    }
    else
    {
        if (escala == 'F' || escala == 'f')
        {
            f = temp;
            c = (temp - 32) * 5 / 9;
            printf("%g graus Fahrenheit equivalem a %g graus Celsius.\n", f, c);
        }

        else
        {
            printf("Escala invalida. Tente novamente.");
        }
    }
    return 0;
}
