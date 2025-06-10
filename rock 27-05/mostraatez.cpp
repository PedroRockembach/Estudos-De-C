#include <stdio.h>
#include <stdlib.h>

int main()
{	
	char saida;
	char entrada;
	
	while(1)
	{
	
		printf("digite um caractere: ");
		scanf(" %c",&entrada);
		
		//printf("%d %c",entrada,entrada);
		
		if (entrada >= 65 && entrada <= 90 || entrada >= 97 && entrada <= 122)
		{
			
			
			if (entrada >= 65 && entrada <= 90)
			
			{
			
				for (int i = entrada;i <= 90;i++)
				{
					printf(" %c ",i);
				}
			}
			
			if (entrada >= 97 && entrada <= 122)
			
			{
			
				for (int i = entrada;i <= 122;i++)
				{
					printf(" %c ",i);
				}
			}	
			
			printf("\nvoce deseja sair? [s/n] \n");
			scanf(" %c",&saida);
			
			if (saida == 's' || saida == 'S')
			
			{
				printf("saindo...");
				break;	
			}
		}
		
		else
		{
			printf("digite apenas letras por favor.\n");
		}	
	
	}
	
}