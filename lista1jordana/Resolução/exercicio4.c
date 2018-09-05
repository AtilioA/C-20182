#include <stdio.h>
#include <stdlib.h>

int main(){
    float peso, altura;
    printf("Digite seu peso e altura:\n");
    scanf(" %f %f", &peso, &altura);

    if(peso >= 70 && peso <= 80 && altura >= 1.75 && altura <= 1.90){
        printf("Aceito.\n");
    }
    else if(peso >= 70 && peso <= 80){
        printf("Recusado por altura.\n");
    }
    else if(altura >= 1.75 && altura <= 1.90){
        printf("Recusado por peso.\n");
    }
    else{
        printf("Recusado em todos os quesitos.\n");
    }
}