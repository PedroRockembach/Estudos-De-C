#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void verifica_maiuscula(char palavra[])
{
    if (palavra[0] >= 'a' && palavra[0] <= 'z')
    {
        palavra[0] = palavra[0] - 32;
    }
}
void verifica_minuscula(char palavra[])
{
    int tamanho = strlen(palavra);
    for (int i = 1; i < tamanho; i++)  // corrigido de i <= tamanho
    {
        if (palavra[i] >= 'A' && palavra[i] <= 'Z')
        {
            palavra[i] = palavra[i] + 32;
        }
    }
}
int main()
{
    char palavra_usuario[100];

    printf("Digite uma palavra: ");
    scanf("%[^\n]", palavra_usuario);

    printf("\nPalavra inicial: %s\n", palavra_usuario);

    verifica_maiuscula(palavra_usuario);
    verifica_minuscula(palavra_usuario);
    
    printf("Palavra transformada: %s\n", palavra_usuario);

    return 0;
}
