// 7) Um professor que trabalha em um colégio da cidade Felicidade, adotou o seguinte critério de avaliação do aluno em sua disciplina:
// • Se a soma das 4 notas obtidas nos bimestres for maior ou igual a 32, o aluno está aprovado sem prova final;
// • Se a soma das 4 notas obtidas nos bimestres for maior igual a 20 e menor que 32, o aluno faz prova final. Neste caso, o aluno precisa de uma nota mínima calculada pela fórmula
// (100 − soma das 4 provas) / 10 para ser aprovado;
// • Se a somas das 4 notas obtidas nos bimestres for inferior a 20, o aluno está reprovado diretamente.
// Faça um programa que leia as notas dos alunos e imprima sua situação: aprovado, prova final (e a nota que precisa para ser aprovado) ou reprovado.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, n3, n4, soma, media, formulaFinal;

    printf("Informe as notas do aluno nas 4 provas: ");
    scanf("%f%f%f%f", &n1, &n2, &n3, &n4);

    while (n1 < 0 || n1 > 10 || n2 < 0 || n2 > 10 || n3 < 0 || n3 > 10 || n4 < 0 || n4 > 10)
    {
        printf("Alguma nota invalida. Por favor, informe as notas do aluno nas 4 provas: ");
        scanf("%f%f%f%f", &n1, &n2, &n3, &n4);
    }

    soma = n1 + n2 + n3 + n4;
    media = soma / 4;

    printf("Media do aluno: %.2f.\n", media);

    if (soma >= 32)
        printf("Aluno aprovado sem prova final.\n");

    else if (soma >= 20)
    {
        formulaFinal = (100 - soma) / 10;
        printf("Aluno de prova final. Nota minima para ser aprovado na final: %.2f.\n", formulaFinal);
    }

    else 
        printf("Aluno reprovado diretamente.\n");

    return 0;
}
