#include <stdio.h>
#include <stdlib.h>

int main()
{
	int tamanho;
	int pos;
	int a; 
	
	printf("digite o tamanho da lista: ");
	scanf("%d",&tamanho);

	int lista [tamanho];
	
	for (int l = 0;l < tamanho;l++)
	{
		printf("digite a posicao %d ->",l);
		scanf("%d",&pos);
		lista[l] = pos;	
	}

	for (int a = 0;a < tamanho; a++)
	{
		printf("%d ",lista[a]);
		
	}
	
	printf("\n");
	
	for (int b = tamanho-1;b >= 0; b--)
	{
		printf("%d ",lista[b]);
		
	}








}