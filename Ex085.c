/* 2)
John  quer  configurar  um  painel  contendo  diferentes  números  de  LEDs.  Ele  não  tem 
muitos   leds
e
ele   não   tem   certeza   se   conseguirá   montar   o   número   desejado. 
Considerando a configuração dos LE
Ds dos números abaixo, crie um algoritmo que ajude 
John a descobrir o número de LEDs necessários para definir o valor.
A entrada será o núm
ero que 
John deseja representar no led e  a saída deve  ser quantos leds
s
erão necessários para mostrar esse número.
*/

#include <stdio.h>
#include <string.h>

int segmentos(char digitos[]);

int main()
{
    char digitos[100];
    int i, num;

    printf("Informe o numero: ");
    scanf("%i", &num);

    while(num != 0)
    {
        digitos[i++] = (num % 10) + '0';
        num = num / 10;
    }

    digitos[i] = '\0';

    printf("John precisara de %i LEDs para montar seu painel.\n", segmentos(digitos));

    return 0;
}

int segmentos(char digitos[])
{
    int i, digito, segmentos = 0;

    for (i = strlen(digitos); i >= 0; i--)
    {
        digito = digitos[i];

        switch (digito)
        {
            case '0':
            segmentos += 6;
            break;

            case '1':
            segmentos += 2;
            break;
            
            case '2':
            segmentos += 6;
            break;

            case '3':
            segmentos += 5;
            break;

            case '4':
            segmentos += 4;
            break;

            case '5':
            segmentos += 5;
            break;

            case '6':
            segmentos += 6;
            break;

            case '7':
            segmentos += 3;
            break;

            case '8':
            segmentos += 7;
            break;

            case '9':
            segmentos += 6;
            break;
        }
    }

    return segmentos;
}
