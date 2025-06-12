#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//soma dos numeros pares da matrix

int main()
{
	int matrix[3][3];
	int soma = 0;
	int numero = 0;
	for (int l = 0; l < 3; l++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("digite um numero na pos [%d][%d]: ",l,j);
			scanf("%d",&matrix[l][j]);
		}
	}
	for (int l = 0; l < 3; l++)
	{
		for (int j = 0; j < 3; j++)
		{
			
			printf(" %d ",matrix[l][j]);	
			if (matrix[l][j] % 2 == 0)
			{
				soma += 1;
				numero += matrix[l][j];
			}
			if ((j+1) % 3 == 0)
			{
				printf("\n");
			}
		}
	}
	
printf("nessa matrix existem %d numeros pares\n",soma);
printf("a soma dos pares foi %d",numero);
}