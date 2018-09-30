// 1) Faça um programa para ler a altura e a largura de um retângulo e calcular o seu
// perímetro. Em seguida, faça a mesma coisa, só que recebendo como dados de entrada
// as coordenadas (x, y) dos cantos inferior esquerdo e superior direito.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altura, largura, perimetro, 
    x1, y1, x2, y2, largurax, alturay, perimetroxy;
    
    printf("Informe a altura do retangulo: ");
    scanf("%f", &altura);
    
    printf("Informe a largura do retangulo: ");
    scanf("%f", &largura);

    perimetro = largura * 2 + altura * 2;

    printf("Perimetro do retangulo: %g\n", perimetro);

    printf("Informe as coordenadas de um dos cantos [x y]: ");
    scanf("%f%f", &x1, &y1);

    printf("Informe as coordenadas do canto oposto [x y]: ");
    scanf("%f%f", &x2, &y2);

    largurax = abs(x2 - x1);
    alturay = abs(y2 - y1);

    perimetroxy = largurax * 2 + alturay * 2;

    printf("Perimetro do retangulo (por coordenada dos pontos): %g\n", perimetroxy);

    return 0;
}
