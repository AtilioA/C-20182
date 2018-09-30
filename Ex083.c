/* 8) Faça um vetor de tamanho 50 preenchido com o seguinte valor: (i + 5 * i) % (i + 1), sendo
i a posição do elemento no vetor. Em seguida imprima o vetor na tela.
 */

#include <stdio.h>
#include <string.h>

int main()
{
    int i, n[50];

    for (i = 0; i < 50; i++)
    {
        n[i] = (i + 5 * i) % (i + 1);
    }

    printf("O vetor se da por:\n");
    for (i = 0; i < 50; i++)
    {
        printf("%i.\n", n[i]);
    }

    return 0;
}
