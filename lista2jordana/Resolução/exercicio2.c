#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c1, c2, n;
    
    printf("Digite os dois characteres:\n");
    scanf(" %c %c", &c1, &c2);

    n = c2 - c1 - 1;

    int x = (int)c1;
    int y = (int)c2;
    int z = y - x - 1;

    printf("%d\n", z);
    printf("%d\n", n);

    return 0;
}