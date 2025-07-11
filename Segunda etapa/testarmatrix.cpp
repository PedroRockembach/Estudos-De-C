#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	
	int matrix [3][3];
	
	for (int j = 0; j < 3; j++)
	{
		for (int i = 0;i < 3; i++)
		{
			printf("num[%d][%d]:",j,i);
			scanf("%d",&matrix[j][i]);
		}	
	}
	
	printf("\n");
	
	for (int j = 0;j < 3;j++)
	{
		for (int i = 0;i < 3; i++)
		{		
			printf(" %d ",matrix[j][i]);	
			
		}
		printf("\n");
	}

}