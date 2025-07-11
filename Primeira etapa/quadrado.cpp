
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int h, t;
	
	printf("Qual altura do seu quadrado? ");
	scanf("%d",&h);
	
	printf("Qual tamanho? ");
	scanf("%d", &t);
	
	for (int c = 0; c<h; c++)
	{
		for (int j = 1; j<=t;j++)
		{
			printf(" * ");
			
		}
			
		printf("\n");
		
	}	
	
	
	
	
	
	
}