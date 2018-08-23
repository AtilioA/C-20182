//

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n;

    printf("Informe n: ");
    scanf("%i", &n);

    for(i = 0; i < n; i = i + 1); 
    {
        n = n + i;
        printf("%i\n", n);
    }
    return 0;
}
