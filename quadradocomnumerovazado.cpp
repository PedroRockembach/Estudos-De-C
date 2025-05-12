#include <stdlib.h>
#include <stdio.h>

int main()
{
	int largura = 0;
	
	printf("Digite o tamanho do seu quadrado: ");
	scanf("%d",&largura);
	
	for (int l = 1;l<=largura;l++)
	{
		
		for (int c = 1;c<=largura;c++)
		{
			
			if (l ==  1 || l == largura)	//linha
			{
			
				printf("%d ",l);
			
			}
			
			else if ( c == 1 || c == largura)
			{
			
				printf("%d ",l);
			
			}
			else
			{
				// Interior do quadrado
				printf("  ");
			}
		}	
		
	printf(" \n");	
	}
	
	
	
	
	
	
	
	
	
	
}