#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char palavra [150];
	char invertido [150];
	int tamanho;
	int cont = 0;
	int pal = 0;
	printf("digite uma PALAVRA: ");
	scanf(" %s",palavra);	
	
	tamanho = strlen(palavra);
	
	//printf("%lu",tamanho);	
	
	for (int i = tamanho-1 ;i >= 0;i--)
		{
			invertido[cont] = palavra[i];
			cont++;
		}
	
	for (int i = 0;i <= tamanho;i++)
		{
			
			if (invertido[i] == palavra[i])
			{
				pal = pal;	
			}
			else
			{
				pal++;
			}
			
		}
	if (pal == 0)
	{
		printf("a palavra eh um palindromo");
	}
	else
	{
		printf("nao eh um palindromo");
	}
		
	/*int diferenca = strcmp(palavra,invertido );
	
	if (diferenca == 0)
	{
		printf("a palavra eh um palindromo");
	}
	else
	{
		printf("nao eh um palindromo");
	}*/
		
	
	
	
}