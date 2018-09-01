// Dizer se um ponto está contido em um retângulo, dados os cantos opostos do mesmo. Pontos
// pertencentes às bordas do retângulo (na linha do retângulo) são considerados como pertencentes ao
// retângulo.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x1, y1, x2, y2, xp, yp, aux;

    printf("Informe as coordenadas de um dos cantos do retangulo [x y]: ");
    scanf("%f%f", &x1, &y1);

    printf("Informe as coordenadas do canto oposto [x y]: ");
    scanf("%f%f", &x2, &y2);

    printf("Informe as coordenadas do ponto [x y]: ");
    scanf("%f%f", &xp, &yp);

    // Permite o usuário inserir qualquer canto e seu oposto
    if (x1 > x2)
    {
        aux = x1;
        x1 = x2;
        x2 = aux;
    }
    if (y1 > y2)
    {
        aux = y1;
        y1 = y2;
        y2 = aux;
    }

    if (xp >= x1 && xp <= x2 && yp >= y1 && yp <= y2)
        printf("O ponto pertence ao retangulo.\n");
    else
        printf("O ponto NAO pertence ao retangulo.\n");

    return 0;
}
