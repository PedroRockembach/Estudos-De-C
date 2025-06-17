#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int main()
{
	char palavra [500];
	
	printf("digite uma palavra: ");
	scanf("	%s",&palavra);
	
	int tam = 0;
	
	tam = strlen(palavra);
	printf("%d\n",tam);
	
	//ulsif
	//ulsif
	
	if (tam % 2 == 0)
	{
		char invertido[500];
		
		int v = 0;
		
		for(int i=tam-1; i>=0; i--)
		{
		
			invertido[v]=palavra[i];
			v++;
		
		}
		printf("%s",&invertido);	
	}
	else
	{
		char invertido[500];
		
		int meio = tam/2;
		
		for (int c = meio + 1;c < tam;c++)
		{
			printf("%c",palavra[c]);
		}
		
		printf("%c",palavra[meio]); 		
			
		for (int a = 0 ;a < meio; a++)
		{
			printf("%c",palavra[a]);
		}			
	}
	
	
	
	
}