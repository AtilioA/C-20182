// 5. Ler um conjunto de 10 pares de dados, cada um, com a altura e um código para
// masculino (1) e outro para feminino (2) de uma turma de alunos. Calcular e escrever
// a) A maior e a menor altura da turma.
// b) A média da altura das mulheres.
// c) A média da altura dos homens

// Po, esculachei nessa

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sexo, masc = 0, fem = 0, i;
    float altura,
        maiorH, maiorM,
        menorH, menorM,
        menorGeral = 0, maiorGeral = 0,
        totalH = 0, totalM = 0,
        mediaH = 0, mediaM = 0;

    for (i = 1; i <= 10; ++i)
    {

        printf("Informe a altura em metros e o sexo do(a) estudante n %i: [1 p/masculino e 2 p/feminino]: ", i);
        scanf("%g%i", &altura, &sexo);

        while (altura <= 0)
        {
            printf("Entrada de altura invalida. Informe uma altura positiva: ");
            scanf("%g", &altura);
        }

        while (sexo != 1 && sexo != 2)
        {
            printf("Entrada de sexo invalida. Digite 1 para masculino ou 2 para feminino: ");
            scanf("%i", &sexo);
        }

        if (sexo == 1)
        {
            masc += 1;
<<<<<<< HEAD

=======
>>>>>>> a552121eb2ad44d8c162b5879b27eaa049f5b624
            if (masc == 1)
            {
                maiorH = altura;
                menorH = altura;
            }
<<<<<<< HEAD

            totalH += altura;

=======
            totalH += altura;
>>>>>>> a552121eb2ad44d8c162b5879b27eaa049f5b624
            if (altura > maiorH)
                maiorH = altura;
            else if (altura < menorH)
                menorH = altura;
        }

        else if (sexo == 2)
        {
            fem += 1;
<<<<<<< HEAD

=======
>>>>>>> a552121eb2ad44d8c162b5879b27eaa049f5b624
            if (fem == 1)
            {
                maiorM = altura;
                menorM = altura;
            }
<<<<<<< HEAD

            totalM += altura;

=======
            totalM += altura;
>>>>>>> a552121eb2ad44d8c162b5879b27eaa049f5b624
            if (altura >= maiorM)
                maiorM = altura;
            else if (altura < menorM)
                menorM = altura;
        }
    }

    if (masc > 0)
        mediaH = (totalH / masc);
    if (fem > 0)
        mediaM = (totalM / fem);

    if (maiorH >= maiorM)
        maiorGeral = maiorH;
    else
        menorGeral = maiorM;

    if (menorH <= menorM)
        menorGeral = menorH;
    else
        menorGeral = menorM;

    printf("\nMenor altura da turma: %gm.\n", menorGeral);
    printf("Maior altura da turma: %gm.\n", maiorGeral);
    printf("Maior homem: %gm.\n", maiorH);
    printf("Menor homem: %gm.\n", menorH);
    printf("Maior mulher: %gm.\n", maiorM);
    printf("Menor mulher: %gm.\n", menorM);
    printf("Media das alturas das mulheres: %.2gm.\n", mediaM);
    printf("Media das alturas dos homens: %.2gm.\n", mediaH);

    return 0;
}
<<<<<<< HEAD

/*
questão: A maior e a menor altura da turma.
jordana: float menor = 0;
        if (h2 < menor)
            menor = h2;
*/
=======
>>>>>>> a552121eb2ad44d8c162b5879b27eaa049f5b624
