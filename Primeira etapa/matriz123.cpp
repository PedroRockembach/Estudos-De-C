#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//matrix controlada

int main()
{
	int dimensao;
	
	printf("dimensao: ");
	scanf("%d",&dimensao);
	
	int matriz[dimensao][dimensao];
	
	for (int i = 0; i < dimensao; i++)
	{
		for (int j = 0; j < dimensao; j++ )
		{
			printf("num da posicao [%d][%d]: ",i,j);
			scanf("%d",&matriz[i][j]);
		}
		
	}
	printf("\n");
	for (int i = 0; i < dimensao; i++)
	{
		for (int j = 0; j < dimensao; j++ )
		{
			printf(" %d ",matriz[i][j]);
		}
		printf("\n");
		
	}
	
		int soma = 0;
		
	printf("\n");
	for (int i = 0; i < dimensao; i++)
	{
		for (int j = 0; j < dimensao; j++ )
		{
			if ((i == 0 && j == 0) || (i == 0 && j == dimensao-1) || (i == dimensao - 1 && j == dimensao - 1) || (i == dimensao - 1 && j == dimensao-1))
			{
				
				soma += matriz[i][j];
			}
		}
		printf("\n");
		
	}
	if (soma == 13)
	{
		printf("Faz o L\n");
	}
	
	printf("soma = %d",soma);
	
	
}