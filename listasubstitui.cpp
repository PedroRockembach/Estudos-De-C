	#include <stdio.h>
	#include <stdlib.h>
	
	int main()
	{
		int tamanho; 
		
		printf("tamanho: ");
		scanf("%d",&tamanho);
		
		int lista [tamanho];
		int pos;
		int contador = 0;
		int menorescinco [tamanho];
		
		for (int c = 0;c < tamanho;c++)
		{
			printf("qual valor da pos [%d]: ",c+1);
			scanf("%d",&pos);
			lista[c] = pos;
			
			if (pos < 5)
			{
				menorescinco[contador] = pos;	
				contador++;
			}
		}
		
		for (int l = 0;l < tamanho;l++)
		{		
			printf("%d",lista[l]);			
		}
		
		printf("\n");
		
		for (int m = 0;m < contador;m++)
		{		
			printf("%d",menorescinco[m]);			
		}
		
		
		
	}