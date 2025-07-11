#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char nome [150];
	int tamanho;
		
	printf("digite um nome: ");
	scanf(" %s",nome);	
	
	tamanho = strlen(nome);
	int cript [tamanho];
	
	for (int i = 0;i < tamanho;i++)
	{
		printf("digite o valor da posicao %d: ",i);
		scanf("%d",&cript[i]);
	}
	 
	 
	for (int a = 0;a < tamanho; a++)
	{
		if (cript[a] == 1)
		{
			
			if (nome[a] >= 'a' && nome[a] <= 'z')
			{
				nome[a] = nome[a] - 32;
			}	
						
			else
			{
				nome[a] = nome[a] + 32;	
			}
			
		}	
	
		if (cript[a] == 2)
		{
			nome[a] = nome[a] + 10;
		}	
		
		if (cript[a] == 3)
		{
			nome[a] = nome[a] - 10;
		}	
			
		if (cript[a] == 0)
		{
			nome[a] = nome[a];
		}		
	}
		printf("Resultado: %s\n", nome);
}