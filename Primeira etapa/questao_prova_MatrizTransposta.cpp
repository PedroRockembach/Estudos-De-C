#include <stdio.h>
#include <stdlib.h>

int main()
{
	int dimensao;
	
	printf("insira a dimensao da matriz: ");
	scanf("%d",&dimensao);
	
	int matriz[dimensao][dimensao];
	int matriz_transposta[dimensao][dimensao];
	int matriz_sub[dimensao][dimensao];
	
	for (int i = 0; i < dimensao; i++)
	{
		for(int j = 0; j < dimensao; j++)
		{
			printf("insira o valor da posicao[%d][%d]: ",i,j);
			scanf("%d",&matriz[i][j]);
		}
	}
/////////////////////////

	printf("\n");

/////////////////////////
//Mostrar a matriz na tela
	for (int i = 0; i < dimensao; i++)
	{
		for(int j = 0; j < dimensao; j++)
		{
			printf(" %d ",matriz[i][j]);
		}
		
		printf("\n");
	}	
////////////////////////
	
	printf("\n");

////////////////////////
//Segunda matriz com transposta da primeira
	for (int i = 0; i < dimensao; i++)
	{
		for(int j = 0; j < dimensao; j++)
		{
			matriz_transposta[i][j] = matriz[j][i];		
		}
	}
////////////////////////
	

////////////////////////
//mostrar a transposta
	for (int i = 0; i < dimensao; i++)
	{
		for(int j = 0; j < dimensao; j++)
		{
			printf(" %d ",matriz_transposta[i][j]);		
		}
		
		printf("\n");
	}
////////////////////////
	

////////////////////////
//subtração da matriz pela transposta.
	for (int i = 0; i < dimensao; i++)
	{
		for(int j = 0; j < dimensao; j++)
		{
			matriz_sub[i][j] = matriz[i][j]- matriz_transposta[i][j];		
		}
	}
////////////////////////
	
printf("\n");

////////////////////////
//mostrar a matriz final
	for (int i = 0; i < dimensao; i++)
	{
		for(int j = 0; j < dimensao; j++)
		{
			printf(" %d ",matriz_sub[i][j]);		
		}
		
		printf("\n");
	}	
}

