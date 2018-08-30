// 8) Observe a seguinte propriedade que alguns números maiores que 1000 e menores que 9999 possuem [...]

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int abcd, ab, cd, ef, i;

    for (i = 1000; i < 9999; i++)
    {
        abcd = i;
        ab = abcd / 100;
        cd = abcd % 100;
        ef = ab + cd;

        if (pow(ef, 2) == abcd)
            printf("%i\n%i + %i = %i\n%i^2 = %i\n\n", abcd, ab, cd, ef, ef, abcd);
    }

    return 0;
}
