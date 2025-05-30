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
	int maiscinco_pos = 0;
	
	for (int c = 0;c<tamanho;c++)
	{
		
		printf("digito [%d] da lista: ",c);
		scanf("%d",&entrada);
		
		lista[c] = entrada;
		
		if (entrada > 5)
		{
			maiscinco[maiscinco_pos] = entrada;
			maiscinco_pos+=1;
		}
	}
	
	for (int h = 0; h<tamanho; h++)
	
	{
		printf("%d ",lista[h]);
		
	}
	
	printf("\n");
	
	for (int a = 0; a < maiscinco_pos; a++)
	
	{
		printf("%d ",maiscinco[a]);
		
	}	
		
}