#include <stdio.h>
#include <stdlib.h>

int main ()
{
	
	int altura;
	
	printf("digite o tamanho do quadrado: "); 
	scanf("%d",&altura);
	
	for (int l = 1; l <= altura; l ++)
		{
			for(int c = 1; c <= altura; c ++ )
			{	
				printf("%d ",l);
			}
			
		printf("\n");	
		}
	
	
}
