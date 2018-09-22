// 1. Você foi contratado por uma empresa de estatística para pesquisar as distâncias
// registradas nos ODÔMETROS dos automóveis que passam por uma rodovia. O programa
// deverá ler a quilometragem informada e perguntar: “Deseja realizar nova leitura
// (S/N)?”. O programa deverá validar se as entradas são válidas: Não permitir
// quilometragens menores ou iguais a zero e a resposta da pergunta deve ser igual a S ou N.
// Ao final da pesquisa o programa deverá informar: a quantidade de carros pesquisados,
// a quilometragem total e a quantidade de dados inválidos digitados pelo usuário.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int carros = 0, invalid = 0;
    float km, kmTotal = 0;
    char resp = 'S';

    while (resp == 'S')
    {
        printf("Informe a distancia registrada no odometro do %io carro: ", carros + 1);
        scanf("%f", &km);

        while (km <= 0)
        {
            invalid++;
            printf("Quilometragem INVALIDA. Informe uma quilometragem maior que zero: ");
            scanf("%f", &km);
        }

        kmTotal += km;

        printf("Deseja realizar nova leitura (S/N)? ");
        scanf(" %c", &resp);
        while ((resp != 'S') && (resp != 'N'))
        {
            invalid++;
            printf("Opcao INVALIDA. Responda com S ou N. Deseja realizar nova leitura? ");
            scanf(" %c", &resp);
        }

        carros += 1;

        }

    printf("Quantidade de carros pesquisados: %i.\nQuilometragem total: %g km.\nQuantidade de dados invalidos: %i.\n", carros, kmTotal, invalid);

    return 0;
}
