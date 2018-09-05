#include <stdio.h>
#include <stdlib.h>

int main(){
    int a = 0, n = 0, soma = 0, i;
    printf("Digite a e n:\n");
    scanf(" %d %d", &a, &n);
    while(n <= 0){
        printf("Digite novamente n:\n");
        scanf(" %d", &n);
    }
    for(i = a; i < n + a; i++){
        soma = soma + i;
    }
    printf("%d\n", soma);
}