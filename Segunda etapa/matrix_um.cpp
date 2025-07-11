#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	int valor;
	int matrix [9];
	
	for (int i = 0; i < 9; i++)
	{
		
		printf("digite o valor %d da matriz: ",i+1);
		scanf("%d",&valor);
		matrix[i] = valor;
		
	}
	
	printf("\n");
	
	for (int i = 0; i < 9; i++)
	{
		printf(" %d ",matrix[i]);
		if ((i+1) % 3 == 0)
		{
			printf("\n");
		}
	}	
	
}