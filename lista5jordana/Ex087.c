/* 3) Júlio César usou um sistema de criptografia, agora conhecido como Cifra de César, que
deslocava cada letra 2 lugares para frente pelo alfabeto (por exemplo, 'A' muda para 'C',
'R' muda para 'T', etc.). No final do alfabeto nós damos a volta, isso é, 'Y' muda para 'A'.
Podemos, é claro, tentar mudar qualquer número.
Dado um número e uma string já codificada utilizando a cifra de César, decodifique-a e
imprima a sentença original.
*/

#include <stdio.h>
#include <math.h>


int decifra(char frase[], int cifra);
int distA(char frase);
int maiuscminusc(char frase);

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

// Obtém a frase decifrada a partir da frase e da chave
int decifra(char frase[], int cifra)
{
    char fraseDescript[50];
    int i, cifraVolta;

    for (i = 0; frase[i] != '\0'; ++i)
    {

        if (distA(frase[i]) < cifra)
        {
            cifraVolta = (cifra - distA(frase[i])) - 1; // Pulos "excedentes" que a cifra causa

            if (maiuscminusc(frase[i]))
            {
                frase[i] = 'Z' - cifraVolta;
            }
            else
            {
                frase[i] = 'z' - cifraVolta;
            }
        }

        else
        {
            frase[i] -= cifra;
        }


    }

    for (i = 0; frase[i] != '\0'; i++)
    {
        fraseDescript[i] = frase[i];
    }

    printf("%s\n", fraseDescript);

    return fraseDescript[50];
}

// Para subtrair da cifra ao dar a volta no alfabeto
int distA(char letra)
{
    if (maiuscminusc(letra))
    {
        return abs(letra - 'A');
    }

    else
    {
        return abs(letra - 'a');
    }
}

// Para determinar o ponto de início ao dar a volta no alfabeto
int maiuscminusc(char letra)
{
    if (letra >= 'A' && letra <= 'Z')
    {
        return 1;
    }

    else if (letra >= 'a' && letra <= 'z')
    {
        return 0;
    }
}
