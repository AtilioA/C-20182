#include <stdio.h>

int main()
{
    FILE *f1, *f2;
    int x;
    char str1[50], str2[50];

    f1 = fopen("primeiro.txt", "r");
    f2 = fopen("segundo.txt", "r");

    fgets(str1, 50, f1);
    fgets(str2, 50, f2);    
    printf("%s\n", str1);    
    printf("%s\n", str2);    

    fclose(f1);
    fclose(f2);
}