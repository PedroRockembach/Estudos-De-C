#include <stdio.h>
#include <stdlib.h>


int altura;
int main()
{
	

printf("Digita: ");
scanf("%d",&altura);

	for (int i = altura;i > 0;i--)
	{
		
		for(int j = altura; j > 0;j--)
		{
			printf(" * ");
		}
	printf("\n");
	}

		
	
}