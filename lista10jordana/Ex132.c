/* 3) Faça um programa que leia dados de 5 livros: título (máximo 30 letras), autor (máximo 15
letras) e ano, armazenando-os em um vetor. Procure um livro por título, perguntando ao usuário
qual título deseja buscar. Mostre os dados de todos os livros encontrados */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct livro
{
    char titulo[50];
    char autor[50];
    int ano;
    // int ISBNPOXAVIDA;
};
typedef struct livro Livro;

void printaDadosLivro(Livro livro)
{
    printf("Dados do livro:\n");
    // It's over, Anakin!
    printf("Titulo: %s", livro.titulo);
    // I have the high ground.
    printf("Autor: %s", livro.autor);
    // Don't try it.
    printf("Ano: %i\n", livro.ano);
}

Livro procuraLivro(Livro *livros, int *achou, int nLivros)
{
    int i;
    char *tituloLivroBuscado;
    tituloLivroBuscado = malloc(50 * sizeof(char));

    printf("Informe o titulo do livro a ser buscado:\n");
    getchar();
    fgets(tituloLivroBuscado, 50, stdin);

    for (i = 0; i < nLivros; i++)
    {
        if (strcmp(livros[i].titulo, tituloLivroBuscado) == 0)
        {
            *achou = 1;
            printf("\nO livro foi encontrado!\n");
            return livros[i];
        }
    }

    printf("\nO livro nao foi encontrado.\n");
    *achou = 0;
}

Livro leLivro(Livro livro)
{
    printf("Titulo:\n");
    getchar();
    fgets(livro.titulo, 50, stdin);

    printf("Autor:\n");
    fgets(livro.autor, 50, stdin);

    printf("Ano:\n");
    scanf("%i", &livro.ano);
    puts("---------------");

    return livro;
}

Livro *leLivros(int nLivros) // HA! e quem lembra daquele site lelivros (bagulho é libgen)
{
    int i;
    Livro *livros;
    livros = malloc(nLivros * sizeof(Livro));

    for (i = 0; i < nLivros; i++)
    {
        livros[i] = leLivro(livros[i]);
    }

    return livros;
}

int main()
{
    int nLivros, *achou;
    Livro *livros, livroProcurado;
    achou = malloc(1 * sizeof(int)); // ALOCAR ESPAÇO PRO PONTEIRO NÉ SUA MULA

    printf("Informe a quantidade de livros:\n");
    scanf("%i", &nLivros);

    livros = malloc(nLivros * sizeof(Livro));

    if (nLivros < 2)
    {
        puts("WTF BRO");
        exit(0);
    }

    livros = leLivros(nLivros);

    livroProcurado = procuraLivro(livros, achou, nLivros);
    if (*achou == 1)
    {
        printaDadosLivro(livroProcurado);
    }

    return 0;
}
