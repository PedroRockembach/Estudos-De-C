#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Peça ao usuário para digitar uma palavra criptografada.
Essa palavra foi criada ao subtrair 1 do valor ASCII de cada caractere da palavra original.

Seu programa deve descriptografar a palavra, somando 1 no valor ASCII de cada caractere.*/

int main()
{
	char nome[150];
	int tamanho;
	
	printf("Digite uma palavra: ");
	scanf("%s",nome);
	
	tamanho = strlen(nome);
	
	for (int i = 0; i < tamanho; i++)
	{		
		nome[i] = nome[i] + 1;		
	}
	
	printf("%s",nome);
	
}