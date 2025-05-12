#include <stdlib.h>
#include <stdio.h>

int main()
{
	int largura = 0;
	
	printf("Digite o tamanho do seu quadrado: ");
	scanf("%d",&largura);
	
	// para fazer o quadrado ficar preenchido e so retirar os ifs
	for (int n = 1;n<=largura;n++)
	{
	
		for (int l = 1;l<=largura;l++)
		{
			
			for (int c = 1;c<=largura;c++)
			{
				
				if (l ==  1 || l == largura)	//linha
				{
				
					printf("%d ",l);
				
				}
				
				else if ( c == 1 || c == largura) 	//coluna
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
	printf(" \n");	
	}
	
	
	
	
	
	
	
	
}