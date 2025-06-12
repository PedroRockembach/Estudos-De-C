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
		int temp = 0;
		
		printf("digite o valor da posicao %d: ",i);
		scanf("%d",&temp);
		
		cript[i] = temp;
		
	}
	 
		for (int a = 0;a < tamanho - 1;a++)
		{
			if (cript[a] == 1)
			{
				
				if (cript[a] >= 'a' && cript[a] <= 'z')
				{
					nome[a] = nome[a] - 32;
				}
					
				else
				{
					nome[a] = nome[a] + 32;	
				}
				
			}		
		}
		printf("%c",cript[0]);
}