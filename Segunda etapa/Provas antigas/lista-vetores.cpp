
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int tamanho = 0;
	int pos = 0;
	printf("Digite o tamanho do seu vetor = ");
	scanf("%d",&tamanho);
	
	int lista [tamanho];
	int listadobrada [tamanho];
	int maisvinte = 0;
	
	for (int t = 0;t<tamanho;t++)
	{
		
		printf("Qual valor da posicao %d da lista? ",t+1);
		scanf("%d",&pos);
		
		lista[t] = pos;	
		listadobrada[t] = pos*2;
	}
	
	for (int i = 0; i < tamanho;i++)
	{
		printf("%d " ,lista[i]);
		
	}
	
	printf("\n==========\n");
	
	for (int i = 0; i < tamanho;i++)
	{	
		if (listadobrada[i] > 10)
		
		{
			printf("Este valor eh maior do que dez (%d) e esta na posicao %d da lista \n",listadobrada[i],i);
		}
		
		if (listadobrada[i] > 20)
		{
			
			maisvinte += 1; 	
			
		}
		else
		{
			printf("Valor menor que dez %d\n",listadobrada[i]);	
		}		
	}
	if (maisvinte > 0)
	{
	printf("\nExistem %d valores maiores que 20",maisvinte);
	}
	
	
	
	
	
	
	
	
	
}