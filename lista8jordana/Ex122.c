/* 4) Faça um programa para associar nomes às linhas de uma matriz de caracteres. O usuário
irá informar o número máximo de nomes que poderão ser armazenados. Cada nome
poderá ter até 30 caracteres com o '\0'. O usuário poderá usar 5 opções diferentes para
manipular a matriz:
(a) Gravar um nome em uma linha da matriz;
(b) Apagar o nome contido em uma linha da matriz;
(c) Informar um nome, procurar a linha onde ele se encontra e substituir por outro
nome;
(d) Informar um nome, procurar a linha onde ele se encontra e apagar;
(e) Pedir para recuperar o nome contido em uma linha da matriz;
(f)* Sair */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *alocaLinhas(int l)
{
    char *linha;

    linha = (char *)malloc(l * sizeof(char));
    return linha;
}

char **mallocaMatriz(int l, int c)
{
    int i;
    char **matriz;

    matriz = (char **)malloc(c * sizeof(char *));
    for (i = 0; i < c; i++)
    {
        matriz[i] = alocaLinhas(l);
    }

    return matriz;
}

// Para retirar lixo das linhas não inicializadas (sem nome)
// to triste pq n funcionou
void inicializaMat(char **matriz, int l)
{
    int jordana;

    for (jordana = 0; jordana < l; jordana++)
    {
        memset(matriz[jordana], 0, 30); // demorei um pouco pra pensar nisso talkei e talvez esteja errado
    }
}

// a. Usa fgets para escrever o nome no vetor da linha indicada
void escreveNome(char **matriz, int maxNomes)
{
    int linhaAlvo;

    printf("Escrever nome em qual linha? (Linha maxima: %i)\n", maxNomes);
    scanf("%i", &linhaAlvo);

    while (linhaAlvo <= 0 || linhaAlvo > maxNomes)
    {
        printf("Por favor, escolha uma linha entre 1 e %i. (Voce escolheu %i)\n", maxNomes, linhaAlvo);
        scanf("%i", &linhaAlvo);
    }

    getchar(); // scanf diretamente acima atrapalha o fgets
    printf("Informe o nome:\n");
    fgets(matriz[linhaAlvo - 1], 30, stdin);
}

// b. Usa memset para zerar o vetor do nome na linha indicada)
void apagaNome(char **matriz, int maxNomes)
{
    int linhaAlvo;

    printf("Apagar nome de qual linha? (Linha maxima: %i)\n", maxNomes);
    scanf("%i", &linhaAlvo);

    while (linhaAlvo <= 0 || linhaAlvo > maxNomes)
    {
        printf("Por favor, escolha uma linha entre 1 e %i. (Voce escolheu %i)\n", maxNomes, linhaAlvo);
        scanf("%i", &linhaAlvo);
    }

    memset(matriz[linhaAlvo - 1], 0, 30);
}

// c, d. Usa strcmp para checar se o nome está em alguma das linhas e retorna o nº da linha
int procuraNome(char **matriz, int maxNomes)
{
    int i;
    char *string;

    string = (char *)malloc(30 * sizeof(char));

    getchar();
    printf("Informe o nome:\n");
    fgets(string, 30, stdin);

    for (i = 0; i < maxNomes; i++)
    {
        if (strcmp(string, matriz[i]) == 0)
        {
            return i;
        }
    }

    printf("O nome nao foi encontrado na matriz.\n");

    return -1;
}

int procuraSubstituiNome(char **matriz, int maxNomes)
{
    int linhaAlvo;
    linhaAlvo = procuraNome(matriz, maxNomes);
    if (linhaAlvo == -1) // Caso o nome não exista na matriz
    {
        return 0;
    }

    printf("Informe o novo nome:\n");
    fgets(matriz[linhaAlvo], 30, stdin);

    return 0;
}

int procuraApagaNome(char **matriz, int maxNomes)
{
    int linhaAlvo;
    linhaAlvo = procuraNome(matriz, maxNomes);
    if (linhaAlvo == -1) // Caso o nome não exista na matriz
    {
        return 0;
    }

    memset(matriz[linhaAlvo], 0, 30);

    return 0;
}

// e. Seleciona a linha do nome e printa caractere por caractere
void printaNome(char **matriz, int maxNomes)
{
    int i, linhaAlvo;

    printf("Exibir nome de qual linha? (Linha maxima: %i)\n", maxNomes);
    scanf("%i", &linhaAlvo);

    while (linhaAlvo <= 0 || linhaAlvo > maxNomes)
    {
        printf("Por favor, escolha uma linha entre 1 e %i. (Voce escolheu %i)\n", maxNomes, linhaAlvo);
        scanf("%i", &linhaAlvo);
    }

    for (i = 0; matriz[linhaAlvo - 1][i] != '\0'; i++)
    {
        printf("%c", matriz[linhaAlvo - 1][i]);
    }
}

void menuGaludo(char **nomes, int maxNomes)
{
    char op;

    do
    {
        printf("\n-- MATRIZ DE NOMES --\n");
        printf("------ OPCOES: ------\n\n");
        printf("[a] Gravar um nome em uma linha da matriz\n");
        printf("[b] Apagar o nome contido em uma linha da matriz\n");
        printf("[c] Informar um nome, procurar a linha onde ele se encontra e substituir por outro nome\n");
        printf("[d] Informar um nome, procurar a linha onde ele se encontra e apagar\n");
        printf("[e] Pedir para recuperar o nome contido em uma linha da matriz\n");
        printf("[f] Sair\n");

        scanf(" %c", &op);

        switch (op)
        {
        case 'a':
            escreveNome(nomes, maxNomes);
            break;

        case 'b':
            apagaNome(nomes, maxNomes);
            break;

        case 'c':
            procuraSubstituiNome(nomes, maxNomes);
            break;

        case 'd':
            procuraApagaNome(nomes, maxNomes);
            break;

        case 'e':
            printaNome(nomes, maxNomes);
            break;

        case 'f': // Para não dar erro no 'do while'
            break;

        default:
            printf("Entrada invalida (%c)! Tente novamente.\n", op);
        }

    } while (op != 'f');
}

int main()
{
    int maxNomes;
    char **nomes;

    printf("Informe o numero maximo de nomes na matriz:\n");
    scanf("%i", &maxNomes);

    nomes = mallocaMatriz(maxNomes, 30);
    // inicializaMat(nomes, maxNomes);

    menuGaludo(nomes, maxNomes);

    for (int i = 0; i < maxNomes; i++)
    {
        free(nomes[i]);
    }
    free(nomes);
    return 0;
}
