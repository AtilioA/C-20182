#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f1;
    int x = 0, y = 0, z = 0;

    f1 = fopen("segundo.txt", "r");

    if (f1 == NULL)
    {
        printf("Nao foi possivel abrir o arquivo.\n");
        exit(1);
    }

    fscanf(f1, "%i %i %i", &x, &y, &z);
    printf("%i\n%i\n%i\n", x, y, z);

    fclose(f1);


    return 0;
}
