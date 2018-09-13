#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont = 0, invalidos = 0;
    float dist, total = 0;
    char opcao = 's';

    while (opcao == 's')
    {
        printf("Entre com a leitura do medidor:\n");
        scanf(" %f", &dist);

        while (dist <= 0)
        {
            printf("Entre com a leitura VALIDA do medidor:\n");
            scanf(" %f", &dist);
            invalidos++;
        }

        cont++;
        total = total + dist;

        printf("Deseja realizar nova leitura (s/n)?\n");
        scanf(" %c", &opcao);
    }
    
    printf("Quantidade de carros pesquisados: %d\n", cont);
    printf("Quilometragem total:              %.2f\n", total);
    printf("Quantidade de dados invalidos:    %d\n", invalidos);

    return 0;
}
