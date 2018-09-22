#include <stdio.h>
#include <stdlib.h>

int main(){
    int t;
    float vol, total;
    printf("Digite o tipo de combustível e a quantidade em litros:\n");
    scanf(" %d %f", &t, &vol);

    switch(t)
    {
        case 1:
            if(vol > 20){
                total = vol*2.83*0.97;
                printf("%.2f\n", total);
            }
            else{
                total = vol*2.83*0.95;
                printf("%.2f\n", total);
            }
        break;
        case 2:
            if(vol > 15){
                total = vol*3.15*0.975;
                printf("%.2f\n", total);
            }
            else{
                total = vol*3.15*0.94;
                printf("%.2f\n", total);
            }
        break;
        default:
        break;
    }

    return 0;
}