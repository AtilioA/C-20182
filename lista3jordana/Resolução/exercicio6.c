#include <stdio.h>
#include <stdlib.h>

int main()
{
	int idade = 0, nota = 0, maiorIdade = 0;
	float maiorNota = 0, idadeMaiorNota, notaMaisVelho;

	do
	{
        printf("Informe a idade: ");
        scanf("%i", &idade);

        printf("Informe a nota: ");
        scanf("%f", &nota);

		if (maiorNota < nota)
		{
			idadeMaiorNota = idade;
			maiorNota = nota;
		}

		if (maiorIdade < idade)
		{
			notaMaisVelho = nota;
			maiorIdade = idade;
		}
	} while (nota >= 0);

	printf("IDADE DA MAIOR NOTA: %d \n", idadeMaiorNota);
	printf("NOTA DO ALUNO MAIS VELHO: %d \n", notaMaisVelho);

	return 0;
}
