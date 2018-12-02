#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char nome[30];
    int idade;
    float altura, peso;
} Paciente;

void printaPaciente(Paciente p)
{
    printf("\nNome do paciente: %s", p.nome);
    printf("Idade do paciente: %i anos\n", p.idade);
    printf("Altura do paciente: %.2fm \n", p.altura);
    printf("Peso do paciente: %.2fkg \n", p.peso);
}

void toPrintandoNumHospital(Paciente *p, int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printaPaciente(p[i]);
    }
}

Paciente inicializaPaciente(Paciente p)
{
    memset(p.nome, 0, 30);
    p.idade = 0;
    p.altura = 0;
    p.peso = 0;
}

Paciente inicializaHospital(Paciente *p, int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        p[i] = inicializaPaciente(p[i]);
    }
}

Paciente lePaciente(Paciente p)
{
    printf("Informe o nome do paciente:\n");
    getchar(); // Precaução é tudo (mas realmente precisa disso no Hospital)
    fgets(p.nome, 30, stdin);

    printf("Informe a idade do paciente:\n");
    scanf("%i", &p.idade);

    printf("Informe a altura do paciente (metros):\n");
    scanf("%f", &p.altura);
    printf("Informe o peso do paciente (quilos):\n");
    scanf("%f", &p.peso);

    return p;
}

Paciente toLendoNumHospital(Paciente *p, int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        p[i] = lePaciente(p[i]);
    }
}

int main()
{
    Paciente p, *pacientoes;
    int n;

    printf("Registrar quantos pacientes?\n");
    scanf("%i", &n);
    pacientoes = (Paciente*)malloc(n * sizeof(Paciente));

    // Para ler um só paciente
    // Mas quem disse que paciente tem que ser de hospital essas coisa tfw para inteligente
    // inicializaPaciente(p);
    // lePaciente(p);
    // printaPaciente(p);

    inicializaHospital(pacientoes, n);
    toLendoNumHospital(pacientoes, n);
    toPrintandoNumHospital(pacientoes, n);

    free(pacientoes);
    
    return 0;
}