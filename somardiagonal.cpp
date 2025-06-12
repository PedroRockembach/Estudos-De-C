#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//soma da matrix principal

int main()
{
	int matrix[3][3];
	int soma = 0;
	int somainv = 0;
	
	for (int l = 0; l < 3; l++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("digite um numero na pos [%d][%d]: ",l,j);
			scanf("%d",&matrix[l][j]);
		}
	}
	
	printf("==========================================\n");
	
	for (int l = 0; l < 3; l++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (l == j)
			{
				printf(" %d ",matrix[l][j]);	
				soma += matrix[l][j];
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
	printf("A soma da diagonal principal foi de %d \n",soma);
	
	printf("==========================================\n");	
	
	for (int l = 0; l < 3; l++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (l + j == 2)
			{
				printf(" %d ",matrix[l][j]);	
				somainv += matrix[l][j];
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
	printf("A soma da diagonal inversa foi de %d \n",somainv);
	
	printf("==========================================\n");		
	
}