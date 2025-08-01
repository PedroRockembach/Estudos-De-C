#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int decimal(int lista[],int tam)
{
	int dec;
	
	for (int fat = 0;fat < tam; fat++)
	{	
		dec += lista[fat]*pow(2, fat);
	}
	
	return dec;
}

int main()
{
	int tamanho = 0;
	
	printf("Quantos bits tem sua tupla? ");
	scanf("%d",&tamanho);
	
	int tupla[tamanho];
	
	for(int b = 0; b < tamanho; b++)
	{
		int escolha;
		
		printf("Qual valor do bit %d: ",b);
		scanf("%d",&escolha);
		
		tupla[b] = escolha;
		
	}
	
	for(int a = 0; a < tamanho; a++)
	{
		
		printf("%d",tupla[a]);
		
	}	
	printf("\n Valor decimal %d",decimal(tupla,tamanho));
}