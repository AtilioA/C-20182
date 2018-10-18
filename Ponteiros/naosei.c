#include <stdio.h>

#define l 3

int soma(int A[l], int B[l], int *C[l])
{
    int i;

    for (i = 0; i < l; i++)
    {
       // C[l] = A[l] + B[l]
    }

    return 0;
}

le(int *A[l])
{
    int i;

    for (i = 0; i < l; i++)
    {
        scanf("%i", &A[i]);
    }

    return 0;
}

int main()
{
    int i, A[l], B[l], C[l], (*pC)[l];
    pC = C;

    le(&A);

    soma(A, B, &C);

    for (i = 0; i < l; i++)
    {
        printf("%i", C[i]);
    }

    return 0;
}
