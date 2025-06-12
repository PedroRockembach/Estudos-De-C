/*🔸 Exercício 4 – Trocar Diagonal Principal pela Secundária
Troque os elementos da diagonal principal com os da diagonal secundária. Mostre a matriz modificada.

💡 Troque:

[0][0] com [0][2]

[1][1] com [1][1] (não muda)

[2][2] com [2][0]*/

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
			printf(" %d ",matrix[l][j]);	
			if ((j+1) % 3 == 0)
			{
				printf("\n");
			}

		}
	}
	
	printf("==========================================\n");	



	for (int i = 0; i < 3; i++)
	{
		if (i != 1)
		{
			int temp = matrix[i][i];
			matrix[i][i] = matrix[i][2-i];
			matrix[i][2-i] = temp;	
			
			//dificil
		}		
	}
	
	
	
	
	printf("==========================================\n");	
		
	for (int l = 0; l < 3; l++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf(" %d ",matrix[l][j]);	
			if ((j+1) % 3 == 0)
			{
				printf("\n");
			}

		}
	}
}