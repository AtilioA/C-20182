/* 6) Fazer um programa para simular uma agenda de telefones. Para cada pessoa devem-se ter os
seguintes dados:

O programa deve:
//(a) Definir a estrutura acima.
// (b) Declarar a variável agenda (vetor) com capacidade de agendar até 100 nomes.
// (c) Definir uma função que busca por primeiro nome: Imprime os dados da pessoa com esse nome (se tiver mais de uma pessoa, imprime para todas).
// (d) Definir uma função que busca por mês de aniversário: Imprime os dados de todas as pessoas que fazem aniversario nesse mês.
// (e) Definir uma função que busca por dia e mês de aniversário: Imprime os dados de todas as pessoas que fazem aniversario nesse dia e mês.
// (f) Definir uma função que insere pessoa: Insere por ordem alfabética de nome.
(g) Definir uma função que retira pessoa: retira todos os dados dessa pessoa e desloca todos os elementos seguintes do vetor para a posição anterior.
// (h) Definir duas funções que imprimem a agenda, com as opções:
// • imprime nome, telefone e e-mail.
// • imprime todos os dados
*/

// Intercalei fgets e scanf(%[^\n]s) pra testar

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct numerotel
{
    int DDD;
    int numero;
};
typedef struct numerotel NumTel;

struct date
{
    int dia;
    int mes;
    int ano;
};
typedef struct date Date;

struct endereco
{
    char *rua;
    int numero;
    char *complemento;
    char *bairro;
    int CEP;
    char *cidade;
    char *estado;
    char *pais;
};
typedef struct endereco Endr;

struct contatinho
{
    char *nome;
    char *email;
    Endr endereco;
    NumTel telefone;
    Date nascimento;
    char *obs;
};
typedef struct contatinho Contato;

void LeDataNascimento(Contato *contato)
{
    printf("Data de nascimento:\n");
    printf("Ano:\n");
    scanf("%i", &(*contato).nascimento.ano);
    printf("Mes:\n");
    scanf("%i", &(*contato).nascimento.mes);
    printf("Dia:\n");
    scanf("%i", &(*contato).nascimento.dia);
}

void PrintaDataNascimento(Contato contato)
{
    printf("Data de nascimento: %i/%.2i/%i\n", contato.nascimento.dia, contato.nascimento.mes, contato.nascimento.ano);
}

void LeTelefone(Contato *contato)
{
    printf("DDD:\n");
    scanf("%i", &(*contato).telefone.DDD);
    printf("Numero:\n");
    scanf("%i", &(*contato).telefone.numero);
}

void PrintaTelefone(Contato contato)
{
    puts("\nTelefone:");
    printf("%i %i\n", contato.telefone.DDD, contato.telefone.numero);
}

// Endereço (contendo campos para Rua, número, complemento, bairro, cep, cidade, estado, país);
void LeEndereco(Contato *contato)
{
    // Aloca espaço para strings de endereço
    (*contato).endereco.rua = malloc(50 * sizeof(char));
    (*contato).endereco.complemento = malloc(50 * sizeof(char));
    (*contato).endereco.bairro = malloc(50 * sizeof(char));
    (*contato).endereco.cidade = malloc(50 * sizeof(char));
    (*contato).endereco.estado = malloc(50 * sizeof(char));
    (*contato).endereco.pais = malloc(50 * sizeof(char));

    printf("\nEndereco:\n");
    printf("Informe a rua:\n");
    scanf("%[^\n]s", (*contato).endereco.rua);
    printf("Informe o numero:\n");
    scanf("%i", &(*contato).endereco.numero);
    printf("Informe o complemento:\n");
    getchar();
    scanf("%[^\n]s", (*contato).endereco.complemento);
    printf("Informe o bairro:\n");
    getchar();
    scanf("%[^\n]s", (*contato).endereco.bairro);
    printf("Informe o CEP:\n");
    scanf("%i", &(*contato).endereco.CEP);
    printf("Informe a cidade:\n");
    getchar();
    scanf("%[^\n]s", (*contato).endereco.cidade);
    printf("Informe o estado:\n");
    getchar();
    scanf("%[^\n]s", (*contato).endereco.estado);
    printf("Informe o pais:\n");
    getchar();
    scanf("%[^\n]s", (*contato).endereco.pais);
}

void PrintaEndereco(Contato contato)
{
    puts("\nEndereco:");
    printf("Rua: %s\n", contato.endereco.rua);
    printf("Numero: %i\n", contato.endereco.numero);
    printf("Complemento: %s\n", contato.endereco.complemento);
    printf("Bairro: %s\n", contato.endereco.bairro);
    printf("CEP: %i\n", contato.endereco.CEP);
    printf("Cidade: %s\n", contato.endereco.cidade);
    printf("Estado: %s\n", contato.endereco.estado);
    printf("Pais: %s\n", contato.endereco.pais);
}

void PrintaAgendaNomeEmailTel(Contato *agenda, int nContatos)
{
    int i;

    printf("\n%i\n", nContatos);
    for (i = 0; i < nContatos; i++)
    {
        puts("");

        printf("Nome: %s", agenda[i].nome);
        printf("Email: %s", agenda[i].email);
        printf("Telefone: %i %i", agenda[i].telefone.DDD, agenda[i].telefone.numero);

        puts("");
    }
}

Contato *BoaSorteNome(Contato *agenda, int nContatos)
{
    int i, j;
    Contato aux;
    Contato *ordenada = agenda;

    for (i = 0; i < nContatos; i++)
    {
        for (j = i + 1; j < nContatos; j++)
        {
            if (strcmp((ordenada[j]).nome, (ordenada[j + 1]).nome) > 0)
            {
                aux = ordenada[i];
                ordenada[i] = ordenada[j];
                ordenada[j] = aux;
            }
        }
    }

    return ordenada;
}

Contato *BuscaContato(Contato *agenda, int nContatos, int *nAchados)
{
    int i, k = 0;
    char *nomeBuscado;
    Contato *contatosAchados;
    contatosAchados = malloc(100 * sizeof(Contato));
    nomeBuscado = malloc(50 * sizeof(char));

    printf("Informe o nome a ser buscado na agenda:\n");
    getchar();
    fgets(nomeBuscado, 50, stdin);

    for (i = 0; i < nContatos; i++)
    {
        if (strcmp(agenda[i].nome, nomeBuscado) == 0)
        {
            contatosAchados[k] = agenda[i];
            k++;
            contatosAchados = realloc(contatosAchados, (k + 1) * sizeof(Contato));
        }
    }

    *nAchados = k;

    return contatosAchados;
}

Contato *BuscaContatoMes(Contato *agenda, int nContatos, int *nAchados)
{
    int i, k = 0;
    int mesBuscado = 0;
    Contato *contatosAchados;
    contatosAchados = malloc(100 * sizeof(Contato));

    printf("Informe o mes de aniversario a ser buscado na agenda:\n");
    scanf("%i", &mesBuscado);

    for (i = 0; i < nContatos; i++)
    {
        if (agenda[i].nascimento.mes == mesBuscado)
        {
            contatosAchados[k] = agenda[i];
            k++;
            contatosAchados = realloc(contatosAchados, (k + 1) * sizeof(Contato));
        }
    }

    *nAchados = k;

    return contatosAchados;
}

Contato *BuscaContatoDiaMes(Contato *agenda, int nContatos, int *nAchados)
{
    int i, k = 0;
    int mesBuscado = 0;
    int diaBuscado = 0;
    Contato *contatosAchados;
    contatosAchados = malloc(100 * sizeof(Contato));

    printf("Informe o mes de aniversario a ser buscado na agenda:\n");
    scanf("%i", &mesBuscado);

    printf("Informe o dia de aniversario a ser buscado na agenda:\n");
    scanf("%i", &mesBuscado);

    for (i = 0; i < nContatos; i++)
    {
        if (agenda[i].nascimento.mes == mesBuscado && agenda[i].nascimento.dia == diaBuscado)
        {
            contatosAchados[k] = agenda[i];
            k++;
            contatosAchados = realloc(contatosAchados, (k + 1) * sizeof(Contato));
        }
    }

    *nAchados = k;

    return contatosAchados;
}

void PrintaContato(Contato contato)
{
    puts("");

    printf("Nome: %s", contato.nome);
    printf("E-mail: %s", contato.email);
    PrintaEndereco(contato);
    PrintaTelefone(contato);
    PrintaDataNascimento(contato);
    printf("Observacao: %s", contato.obs);

    puts("");
}

void PrintaAgenda(Contato *agenda, int nContatos)
{
    int i;

    printf("\n%i\n", nContatos);
    for (i = 0; i < nContatos; i++)
    {
        PrintaContato(agenda[i]);
    }
}

Contato LeContato()
{
    Contato contato;
    contato.nome = malloc(50 * sizeof(char));
    contato.email = malloc(50 * sizeof(char));
    contato.obs = malloc(50 * sizeof(char));

    printf("Nome:\n");
    getchar();
    fgets(contato.nome, 50, stdin);

    printf("E-mail:\n");
    // getchar();
    fgets(contato.email, 50, stdin);

    LeEndereco(&contato);

    LeTelefone(&contato);

    LeDataNascimento(&contato);

    printf("Observacao:\n");
    getchar();
    fgets(contato.obs, 50, stdin);

    return contato;
}

void InsereContato(Contato *agenda, int *nContatos)
{
    int op = 1;

    while (op != 0)
    {
        agenda[*nContatos] = LeContato();
        (*nContatos)++;

        if (*nContatos > 1) // Aqui fica a limitação de 100 da questão
        {
            break;
        }

        else
        {
            printf("Deseja inserir outro contato?\n(0) Nao\n");
            scanf("%i", &op);
        }
    }

    agenda = BoaSorteNome(agenda, *nContatos);
}

void RemoveContato(Contato **agenda, int *nContatos)
{
    int i, indiceRemovido = 0;

    printf("Informe o indice do contato a ser removido. Sim, eu sei, vai se.\nAinda vou compensar o indice com - 1, entao voce nao precisa se preocupar com isso.\n");
    scanf("%i", &indiceRemovido);

    for (i = indiceRemovido - 1; i < *nContatos - 1; i++)
    {
        *agenda[i] = *agenda[i + 1];
    }

}

void Menu()
{
    printf("(1) Imprime os dados da(s) pessoa(s) com o nome escolhido.\n");
    printf("(2) Imprime os dados de todas as pessoas que fazem aniversario no mes escolhido.\n");
    printf("(3) Imprime os dados de todas as pessoas que fazem aniversario no dia e mes escolhidos.\n");
    printf("(4) Insere pessoa por ordem alfabetica de nome.\n");
    printf("(5) Retira todos os dados de uma pessoa.\n");
    printf("(6) Imprime nome, telefone e e-mail de toda a agenda.\n");
    printf("(7) Imprime todos os dados de toda a agenda.\n");
    printf("(0) SAIR\n\n");
}

int main()
{
    int op = 0;
    int nContatos = 0, nAchados = 0, nAchadosMes = 0, nAchadosDiaMes = 0;
    Contato *agenda, *contatosBuscados, *contatosBuscadosMes, *contatosBuscadosDiaMes;

    agenda = malloc(100 * sizeof(Contato));
    contatosBuscados = malloc(100 * sizeof(Contato));
    contatosBuscadosMes = malloc(100 * sizeof(Contato));
    contatosBuscadosDiaMes = malloc(100 * sizeof(Contato));

    do
    {
        printf("\nEscolha a opcao:\n");
        Menu();
        scanf(" %i", &op);

        switch (op)
        {
        case 1:
            contatosBuscados = BuscaContato(agenda, nContatos, &nAchados);

            if (nAchados > 0)
            {
                printf("\nContatos encontrados:");
                PrintaAgenda(contatosBuscados, nAchados);
            }
            else
            {
                printf("Nenhum contato foi encontrado.\n");
            }
            break;

        case 2:
            contatosBuscadosMes = BuscaContatoMes(agenda, nContatos, &nAchadosMes);

            if (nAchadosMes > 0)
            {
                printf("\nContatos encontrados:");
                PrintaAgenda(contatosBuscadosMes, nAchadosMes);
            }
            else
            {
                printf("Nenhum contato foi encontrado.\n");
            }
            break;

        case 3:
            contatosBuscadosDiaMes = BuscaContatoDiaMes(agenda, nContatos, &nAchadosDiaMes);

            if (nAchadosDiaMes > 0)
            {
                printf("\nContatos encontrados:");
                PrintaAgenda(contatosBuscadosDiaMes, nAchadosDiaMes);
            }
            else
            {
                printf("Nenhum contato foi encontrado.\n");
            }
            break;

        case 4:
            InsereContato(agenda, &nContatos);
            agenda = realloc(agenda, (nContatos + 1) * sizeof(Contato));
            break;

        case 5:
            RemoveContato(&agenda, &nContatos);
            agenda = realloc(agenda, (nContatos + 1) * sizeof(Contato));
            break;

        case 6:
            PrintaAgendaNomeEmailTel(agenda, nContatos);
            break;

        case 7:
            PrintaAgenda(agenda, nContatos);
            break;
        }
    } while (op != 0);

    free(agenda);
    free(contatosBuscados);
    free(contatosBuscadosMes);
    free(contatosBuscadosDiaMes);

    return 0;
}
