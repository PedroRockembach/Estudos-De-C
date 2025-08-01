#include <stdio.h>
#include <stdlib.h>


int altura;
int main()
{
	

printf("Digita: ");
scanf("%d",&altura);

	for (int i = 0;i < altura;i++)
	{
		for(int j = 0; j < altura; j++)
		{
			if(i == 0 || i == altura - 1)
			{
				printf(" * ");
			}
			else
			{
				if(j == 0 || j == altura-1)
				{
					printf(" * ");
				}
				else
				{
					printf("   ");
				}
			}

		}
		printf("\n");
	}
}