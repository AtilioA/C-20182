#include <stdio.h>
#include <stdlib.h>

int main(){
    int idade;
    printf("Digite a sua idade:\n");
    scanf(" %d", &idade);

    if(idade >= 5 && idade <= 10){
        printf("Infantil\n");
    }
    else if(idade <= 17){
        printf("Juvenil\n");
    }
    else if(idade <= 30){
        printf("Profissional\n");
    }
    else if(idade >= 30){
        printf("Senior\n");
    }
    else{
        printf("Idade invalida.\n");
    }

}
