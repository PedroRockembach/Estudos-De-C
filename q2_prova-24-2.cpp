#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	int tamanho;
	int soma = 0;
	printf("Qual sera a dimensao da matriz? ");
	scanf("%d",&tamanho);
	
	int matriz [tamanho][tamanho];
	
	for (int i = 0; i < tamanho;i++)
	{
		for(int j = 0;j < tamanho;j++)
		{
			int passagem;
			
			printf("qual valor da posicao [%d][%d] > ",i,j);
			scanf("%d",&passagem);
			
			matriz[i][j] = passagem;
			
		}
	}
	for (int i = 0; i < tamanho;i++)
	{
		for(int j = 0;j < tamanho;j++)
		{
			if ((i == 0 && j == 0) || (i == 0 && j == tamanho - 1) || (i == tamanho - 1 && j == 0) || (i == tamanho - 1 && j == tamanho -1))
			{
			soma += matriz[i][j];	
			}
			printf(" %d ",matriz[i][j]);	
		}
		printf("\n");
	}	
	printf("\n%d",soma);
}