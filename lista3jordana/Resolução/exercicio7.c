#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, d1, d2, i;

	printf("Digite a quantidade de lancamentos:\n");
	scanf(" %d", &n);

	for (i = 0; i < n; i++)
	{
		printf("Digite o valor de cada dado:\n");
		scanf(" %d %d", &d1, &d2);

		if (d1 > d2)
		{
			printf("%d > %d\n", d1, d2);
		}
		else if (d1 < d2)
		{
			printf("%d < %d\n", d1, d2);
		}
		else
		{
			printf("%d = %d\n", d1, d2);
		}
	}
	return 0;
}
