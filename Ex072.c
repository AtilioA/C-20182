// 3. Crie um vetor capaz de armazenar 50 números inteiros. Em
// seguida faça o seu preenchimento automático com os
// números de 101 a 150, ou seja, na posição número 0 ponha
// 101, na posição 1 ponha o número 102, e assim
// sucessivamente. Em seguida exiba os valores deste vetor.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[50], i;

    for (i = 0; i < 50; i++)
    {
        arr[i] = i + 101;
    }

    for (i = 0; i < 50; i++)
    {
        printf("%i.\n", arr[i]);
    }

    return 0;
}
