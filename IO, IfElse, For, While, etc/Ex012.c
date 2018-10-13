/* 1) Calcular e exibir o perímetro de um retângulo. 
• Entrada: Coordenadas (x,y) dos cantos inferior esquerdo e superior direito do retângulo. 
• Saída: Perímetro do retângulo. Precisão de 2 casas decimais. 
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x1, y1, x2, y2, perimetro, base, altura;

    printf("Informe a coordenada de um canto [x y]: ");
    scanf("%f%f", &x1, &y1);
    printf("Informe a coordenada do canto oposto [x y]: ");
    scanf("%f%f", &x2, &y2);

    base = abs(x2 - x1);
    altura = abs(y2 - y1);
    perimetro = (base * 2) + (altura * 2);

    printf("O retangulo de base %g e altura %g possui perimetro de %g.", base, altura, perimetro);

    return 0;
}
