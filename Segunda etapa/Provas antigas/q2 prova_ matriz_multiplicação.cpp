#include <stdio.h>
#include <stdlib.h>

int main()
{
	int dimensao = 0;
	
	printf("Qual a dimensao das matrizes: ");
	scanf("%d",&dimensao);
	
	int matriz_um[dimensao][dimensao];
	int matriz_dois[dimensao][dimensao];
	
	for (int i = 0;i < dimensao; i ++)
	{
		for(int j = 0; j < dimensao; j++)
		{
			printf("Digite o valor [%d][%d] da primeira matriz: ",i,j);
			scanf("%d",&matriz_um[i][j]);	
			
		}
	}
	
	/*for (int i = 0;i < dimensao; i ++)
	{
		for(int j = 0; j < dimensao; j++)
		{
			printf(" %d ",matriz_um[i][j]);			
	
		}
	printf("\n");
	}*/
	
	for (int i = 0;i < dimensao; i ++)
	{
		for(int j = 0; j < dimensao; j++)
		{
			printf("Digite o valor [%d][%d] da segunda matriz: ",i,j);
			scanf("%d",&matriz_dois[i][j]);	
			
		}
	}	
	
	
	
	
}
