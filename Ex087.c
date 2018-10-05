/* Júlio César usou um sistema de criptografia, agora conhecido como Cifra de César, que
deslocava cada letra 2 lugares para frente pelo alfabeto (por exemplo, 'A' muda para 'C',
'R' muda para 'T', etc.). No final do alfabeto nós damos a volta, isso é, 'Y' muda para 'A'.
Podemos, é claro, tentar mudar qualquer número.
Dado um número e uma string já codificada utilizando a cifra de César, decodifique-a e
imprima a sentença original.
*/

#include <stdio.h>
#include <string.h>

int decifra(char frase[], int cifra);

int main()
{
    char frase[50];
    int cifra;

    printf("Informe o numero da cifra: ");
    scanf("%i", &cifra);

    printf("Informe uma string codificada: ");
    scanf("%s", frase);

    decifra(frase, cifra);

    return 0;
}

int decifra(char frase[], int cifra)
{
    int tamanho, i, cifraVolta;

    tamanho = strlen(frase);

    for (i = 0; i < tamanho; i++)
    {
        if (distZ(frase[i]) < cifra)
        {
            cifraVolta = cifra - distZ(frase[i]);

            if maiuscula(frase[i])
            {
                frase[i] = 'A';
            }
            else
            {
                frase[i] = 'a';
            }
        }
    }

    for (i = 0; i < tamanho; i++)
    {
        printf("%c", (frase[i] - cifra));
    }

    printf("\n");

    return 0;
}


int distZ(char frase)
{
    if maiuscula(frase)
    {
        return frase - 'Z';
    }

    else
    {
        return frase - 'z';
    }
}

int maiuscula(char frase)
{
    if (frase > 'a' && frase < 'z')
    {
        return 1;
    }

    else
    {
        return 0;
    }
}
