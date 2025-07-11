#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//matrix controlada

int main()
{
	int matrix [3][3];
	//          i  j
	// i = linha 
	//j = coluna
	
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			
			printf("digite o valor da matriz[%d][%d]: ",i,j);
			scanf("%d",&matrix[i][j]);
			
		}
	}
	
	printf("\n");
	
	for (int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			printf(" %d ",matrix[i][j]);
			if ((j+1) % 3 == 0)
			{
				printf("\n");
			}

		}	
	}
	
	printf("===================\n");
	
	for (int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			if (i == j)
			{
				printf(" %d ",matrix[i][j]);
			}
			
			if ((j+1) % 3 == 0)
			{
				printf("\n");
			}
			
			else
			{
				printf(" * ");
			}

		}
	
	}	
	
}