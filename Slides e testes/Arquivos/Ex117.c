#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f1;
    int x;

    f1 = fopen("primeiro.txt", "a+");

    if (f1 == NULL)
    {
        printf("Nao foi possivel abrir o arquivo.\n");
        exit(1);
    }

    while (1){
    fprintf(f1, "Coxinha\n");
    }

    fclose(f1);


    return 0;
}
