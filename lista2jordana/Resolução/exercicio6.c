#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int modo;
    float s = 0, i, j;
    printf("Digite 1 para s1, 2 para s2 e 3 para s3:\n");
    scanf("%d", &modo);

    switch(modo)
    {
        case 1:
            for(i=1, j=1; i < 100; i=i+2, j++){
                s = (i / j) + s;
            }
        break;

        case 2:
            for(i=1, j=50; i < 100; i=i+2, j--){
                s = (pow(2,i) / j) + s;
            }
        break;

        case 3:
            for(i=1, j=2; i < 10; i=i+2, j=j+2){ // i SAO IMPARES E j SAO PARES
                s = (i / pow(i, 2)) - (j / pow(j, 2)) + s;
            }
        break;

        default:
            return 0;
    }
    printf("soma: %.3f\n", s);
    return 0;
}