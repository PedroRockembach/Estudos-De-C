#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char nome [150];
	char invertido [150];
	int tamanho;
		
	printf("digite um nome: ");
	scanf(" %s",nome);	
	
	tamanho = strlen(nome);
	if (nome[0] >= 'a' && nome[0] <= 'z')
	{
		nome[0] = nome[0] - 32;
	} 
	for (int i = 1; i < tamanho;i++)
	{
		if (nome[i] >= 'A' && nome[i] <= 'Z')
		{
			nome[i] = nome[i] + 32;
		}
	}
	
	printf("Ola %s, boa noite ",nome);
}