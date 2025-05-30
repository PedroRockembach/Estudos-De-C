#include <stdio.h>
#include <stdlib.h>

int main()
{
	int tamanho;
	int entrada;
	
	printf("defina tamanho: ");
	scanf("%d",&tamanho);
	
	int lista [tamanho];
	int maiscinco [tamanho];

	
	for (int c = 0;c<tamanho;c++)
	{
		
		printf("digito [%d] da lista: ",c);
		scanf("%d",&entrada);
		
		if (entrada % 2 == 0)
		{
			lista[c] = entrada*2;	
		}
		else
		{
			lista[c] = entrada*3;
		}
	}
	
	for (int h = 0; h<tamanho; h++)
	
	{
		printf("%d ",lista[h]);
		
	}
	
	printf("\n");
	
}