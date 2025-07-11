#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char palavra [150];
	char invertido [150];
	int tamanho;
	int cont = 0;
	printf("digite uma PALAVRA: ");
	scanf(" %s",palavra);	
	
	tamanho = strlen(palavra);
	
	//printf("%lu",tamanho);	
	
	for (int i = tamanho-1 ;i >= 0;i--)
		{
			//printf("\n%d",cont);
			
			invertido[cont] = palavra[i];
			cont++;
		}
	
	printf("\n%s",invertido);
	
	
	
}