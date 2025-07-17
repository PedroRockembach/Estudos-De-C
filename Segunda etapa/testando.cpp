#include <stdio.h>
#include <stdlib.h>

int main()
{
	int linha,coluna;
	
	printf("qual valor das linhas: ");
	scanf("%d",&linha);
	
	printf("qual valor das colunas: ");
	scanf("%d",&coluna);
	
	int matriz[linha][coluna];
	
	for (int i = 0; i < linha; i++)
	{  //linhas
		for (int j = 0; j < coluna; j++)
		{ //colunas
			int psicose;
			
			printf("numero da posicao %d %d: ",i,j);
			scanf("%d",&psicose);
			matriz[i][j] = psicose ;	
		}
		printf("\n");
	}
	
	
	for (int i = 0; i < linha; i++)
	{  //linhas
		for (int j = 0; j < coluna; j++)
		{ //colunas
		
			printf(" %d ",matriz[i][j]);		
		}
		printf("\n");	
	}
	printf("\n");
//==============================================================//
	for (int i = 0; i < linha; i++)
	{  //linhas
		for (int j = 0; j < coluna; j++)
		{ //colunas
		if (i >= j)
			{
				printf(" %d ",matriz[i][j]);	
			}
		else
			{
				printf(" 0 ");	
			}			
		}
		printf("\n");	
	}	
	printf("\n");
//==============================================================//
	
	for (int i = 0; i < linha; i++)
	{  //linhas
		for (int j = 0; j < coluna; j++)
		{ //colunas
		
		if (i <= j)
			{
				printf(" %d ",matriz[i][j]);	
			}
		else
			{
				printf(" 0 ")	;
			}		
		}
		printf("\n");	
	}	
	
	
}