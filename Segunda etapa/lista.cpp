#include <stdio.h>
#include <stdlib.h>

int main()
{	
	int tamanho;
	int entrada ;
	printf("digite o tamanho da sua lista: ");
	scanf("%d",&tamanho);
		
	int lista  [tamanho];
	int invertidalista  [tamanho];
	
	for (int l = 0; l<tamanho;l++)
	
	{
		printf("qual o numero da pos [%d]: ",l);
		scanf("%d",&entrada);
		
		lista[l] = entrada;
		invertidalista[tamanho-1-l] = entrada;
	}
	
	for (int p = 0; p<tamanho;p++)
	{
		
		printf("%d",lista[p]);
		
	}
	
	printf("\n");
	
	for (int p = 0; p<tamanho;p++)
	{
		
		printf("%d",invertidalista[p]);
		
	}
	
	
	
}