#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ab, cd, ef, i;

    for (i = 1000; i < 10000; i++)
    {
        ab = i / 100;
        cd = i - ab * 100;
        ef = ab + cd;
        if (ef * ef == i)
            printf("%d\n", i);
    }

    return 0;
}
