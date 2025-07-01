#include <stdlib.h>
#include <stdio.h>
#include <strings.h>

int main()
{
	int tamanho;
	
	printf("Qual tamanho da matriz desejada? ");
	scanf(" %d",&tamanho);
	
	char matriz [tamanho][tamanho];
	
	for (int i = 0;i < tamanho; i++)
	{
		for(int j = 0; j < tamanho; j++)
		{
			
			matriz[i][j] = 'X';
			
		}
	}
	
	for (int i = 0;i < tamanho; i++)
	{
		for(int j = 0; j < tamanho; j++)
		{
			
			printf(" %c ",matriz[i][j]);
			
		}
		printf("\n");
	}	
	
}