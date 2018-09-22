#include <stdio.h>
#include <math.h>

int main()
{
	int x1, y1, x2, y2;
	float dist;

	printf("Informe o primeiro ponto [x y]: ");
	scanf("%d", &x1);
	scanf("%d", &y1);
	printf("Informe o segundo ponto [x y]: ");
	scanf("%d", &x2);
	scanf("%d", &y2);

	dist = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	printf("A distancia entre os dois pontos eh de %g.", dist);
	return 0;
}
