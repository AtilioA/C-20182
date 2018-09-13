#include <stdio.h>
#include <stdlib.h>

int main(){
    int idade, doenca;
    float total;
    printf("Digite a sua idade:\n");
    scanf(" %d", &idade);
    printf("Digite a quantidade de doencas cronicas que voce tem:\n");
    scanf(" %d", &doenca);

    if(idade <= 18){
        printf("83.15\n");
    }
    else if(idade <= 33){
        total = 133.88 + 0.05*133.88*doenca;
        printf("%.2f\n", total);
    }
    else if(idade <= 44){
        total = 203.73 + 0.1*203.73*doenca;
        printf("%.2f\n", total);
    }
    else if(idade <= 58){
        total = 312.44 + 0.15*312.44*doenca;
        printf("%.2f\n", total);
    }
    else {
        total = 498.53 + 0.3*498.53*doenca;
        printf("%.2f\n", total);
    }
    return 0;
}