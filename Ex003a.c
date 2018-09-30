#include <stdio.h>

int main()
{
	int n1, n2, n3, n4, n5, maior;

	printf("Informe o primeiro numero: ");
	scanf("%i", &n1);
	printf("Informe o segundo numero: ");
	scanf("%i", &n2);
	printf("Informe o terceiro numero: ");
	scanf("%i", &n3);
	printf("Informe o quarto numero: ");
	scanf("%i", &n4);
	printf("Informe o quinto numero: ");
	scanf("%i", &n5);

	if (n1 > n2 && n1 > n3 && n1 > n4 && n1 > n5)
		maior = n1;
	else if (n2 > n1 && n2 > n3 && n2 > n4 && n2 > n5)
		maior = n2;
	else if (n3 > n1 && n3 > n2 && n3 > n4 && n3 > n5)
		maior = n3;
	else if (n4 > n1 && n4 > n2 && n4 > n3 && n4 > n5)
		maior = n4;
	else if (n5 > n1 && n5 > n2 && n5 > n3 && n5 > n4)
		maior = n5;

	printf("Entre %i, %i, %i, %i e %i, o maior eh %i.", n1, n2, n3, n4, n5, maior);

	return 0;
}
