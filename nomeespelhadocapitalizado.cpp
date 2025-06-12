#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	
	char nome[150];
	char invertido [150];
	int cont = 0;
	
	printf("Digite um nome: ");
	scanf(" %s",nome);
	
	if (nome[0] >= 'a' && nome[0] <= 'z')
	{
		nome[0] = nome[0] - 32;
	}
	else
	{
		nome[0] = nome[0];
	}
	
	int tamanho = strlen(nome);
	
	for (int i = 1; i < tamanho;i++)
	{
		if (nome[i] >= 'A' && nome[i] <= 'Z')
		{
			nome[i] = nome[i] + 32;	
		}
		else
		{
			nome[i] = nome[i];
		}
	}
	
	for (int a = tamanho - 1 ;a >= 0; a--)
	{
		invertido[cont] = nome[a]; 
		cont += 1;
		
		//printf("aqui");
	}
	
	
	
	
	printf("%s",nome);
	printf("\n%s",invertido);
	
	
}