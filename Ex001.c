/* d) Verificar se o ponto P = (1,2) pertence ao círculo de raio 3 e centro 3.
Se pertencer, seu programa deve emitir a mensagem "O ponto (1,2) pertence ao circulo de raio 3 e centro (3,3)."
Senão, deve emitir a mensagem "O ponto (1,2) nao pertence ao circulo de raio 3 e centro (3,3)." */

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    float x1, y1, xc = 3, yc = 3, dist;

    printf("Insira o ponto [x y]: ");
    scanf("%f%f", &x1, &y1);

    dist = sqrt((x1 - xc) * (x1 - xc) + (y1 - yc) * (y1 - yc));

    if (dist <= 3)
        printf("O ponto (%g,%g) pertence ao circulo de raio 3 e centro (3,3). \n", x1, y1);
    else
        printf("O ponto (%g,%g) NAO pertence ao circulo de raio 3 e centro (3,3). \n", x1, y1);

    return 0;
}
