/* 4) . Faça um programa que armazene em um registro de dados (estrutura composta) os dados
de um funcionário de uma empresa, compostos de: Nome, Idade, Sexo (M/F), CPF, Data de
Nascimento, Código do Setor onde trabalha (0-99), Cargo que ocupa (string de até 30 caracteres)
e Salário. Os dados devem ser digitados pelo usuário, armazenados na estrutura e guardados
em um vetor. O vetor deve ser alocado dinamicamente e deve receber novos registros até que
o usuário diga que não irá mais inserir outro registro. Os registros devem ser impressos por idade
(em ordem decrescente) e por cargo que ocupa (em ordem crescente) */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct date // data fica estranho
{
    int dia;
    int mes;
    int ano;
};
typedef struct date Date;

struct funcionario
{
    char *nome;
    int idade;
    char sexo;
    int CPF;
    Date nasc;
    int setor;
    char *cargo;
    float salario;
};
typedef struct funcionario Func;

void PrintaFunc(Func funcionario)
{
    puts("--------------------------");
    printf("Nome: %s\n", funcionario.nome);
    printf("Idade: %i\n", funcionario.idade);
    printf("Sexo: %c\n", funcionario.sexo);
    printf("CPF: %i\n", funcionario.CPF);
    printf("Data de nascimento: %i/%i/%i\n", funcionario.nasc.dia, funcionario.nasc.mes, funcionario.nasc.ano);
    printf("Codigo do setor em que trabalha: %i\n", funcionario.setor);
    printf("Cargo: %s", funcionario.cargo);
    printf("Salario: %.2f\n", funcionario.salario);
    puts("");
}

void PrintaFuncs(Func *funcionarios, int nFunc)
{
    int i;

    for (i = 0; i < nFunc; i++)
    {
        PrintaFunc(funcionarios[i]);
    }
}

Func LeFunc()
{
    int tamString = 30; // Arbitrário
    Func funcionario;
    funcionario.nome = malloc(tamString * sizeof(Func));
    funcionario.cargo = malloc(tamString * sizeof(Func));

    puts("--------------------------");
    printf("Informe o nome:\n");
    // scanf (" %[^\n]s", funcionario.nome);
    getchar();
    fgets(funcionario.nome, tamString, stdin);

    printf("Informe a idade:\n");
    scanf("%i", &funcionario.idade);

    printf("Informe o sexo:\n");
    scanf(" %c", &funcionario.sexo);

    printf("Informe o CPF:\n");
    scanf("%i", &funcionario.CPF);

    printf("Informe o ano de nascimento [AAAA]:\n");
    scanf("%i", &funcionario.nasc.ano);

    printf("Informe o mes de nascimento [MM]:\n");
    scanf("%i", &funcionario.nasc.mes);

    printf("Informe o dia de nascimento [DD]:\n");
    scanf("%i", &funcionario.nasc.dia);

    printf("Informe o codigo do setor em que trabalha:\n");
    scanf("%i", &funcionario.setor);

    printf("Informe o cargo:\n");
    getchar();
    fgets(funcionario.cargo, tamString, stdin);

    printf("Informe o salario:\n");
    scanf("%f", &funcionario.salario);

    return funcionario;
}

Func *LeFuncs(int nFunc)
{
    Func *funcionarios;
    int i;
    funcionarios = malloc(nFunc * sizeof(Func));

    for (i = 0; i < nFunc; i++)
    {
        funcionarios[i] = LeFunc();
    }

    return funcionarios;
}


Func *BoaSortIdade(Func *funcionarios, int nFunc)
{
    int i, j;
    Func funcAux; // funcionario auxiliar haha

    for (i = 0; i < nFunc; i++)
    {
        for (j = 0; j < nFunc - 1; j++)
        {
            if (funcionarios[j].idade < funcionarios[j + 1].idade)
            {
                funcAux;
                funcAux = funcionarios[j + 1];
                funcionarios[j + 1] = funcionarios[j];
                funcionarios[j] = funcAux;
            }
        }
    }

    return funcionarios;
}

Func *BoaSortCargo(Func *funcionarios, int nFunc)
{
    int i, j;
    Func funcAux; // funcionario auxiliar haha

    for (i = 0; i < nFunc; i++)
    {
        for (j = 0; j < nFunc - 1; j++)
        {
            if (strcmp(funcionarios[j].cargo, funcionarios[j + 1].cargo) < 0)
            {
                funcAux;
                funcAux = funcionarios[j + 1];
                funcionarios[j + 1] = funcionarios[j];
                funcionarios[j] = funcAux;
            }
        }
    }

    return funcionarios;
}

int main()
{
    int nFunc = 0;
    char op;
    Func *funcionarios, *funcionariosIdade, *funcionariosCargo;
    funcionarios = malloc(sizeof(Func));
    funcionariosIdade = malloc(sizeof(Func));
    funcionariosCargo = malloc(sizeof(Func));

    printf("Deseja informar um funcionario?\n");
    scanf(" %c", &op);
    if (op == 'N' || op == 'n')
    {
        exit(0);
    }

    while (op != 'N' && op != 'n')
    {
        funcionarios[nFunc] = LeFunc();
        nFunc++;
        funcionarios = realloc(funcionarios, (nFunc + 1) * sizeof(Func));
        printf("Deseja informar outro funcionario?\n");
        scanf(" %c", &op);
    }
    printf("\n%i funcionarios lidos.\n\n", nFunc);

    funcionariosIdade = realloc(funcionariosIdade, (nFunc + 1) * sizeof(Func));
    funcionariosCargo = realloc(funcionariosCargo, (nFunc + 1) * sizeof(Func));

    funcionariosIdade = BoaSortIdade(funcionarios, nFunc);
    funcionariosCargo = BoaSortCargo(funcionarios, nFunc);

    printf("Funcionarios em ordem decrescente de idade:");
    PrintaFuncs(funcionariosIdade, nFunc);
    printf("Funcionarios em ordem crescente de cargo:");
    PrintaFuncs(funcionariosCargo, nFunc);

    for (int i = 0; i < nFunc; i++)
    {
        free((funcionarios[i]).nome);
        free((funcionarios[i]).cargo);
        free((funcionariosIdade[i]).nome);
        free((funcionariosIdade[i]).cargo);
        free((funcionariosCargo[i]).nome);
        free((funcionariosCargo[i]).cargo);
    }
    free(funcionarios);
    free(funcionariosIdade);
    free(funcionariosCargo);

    return 0;
}
