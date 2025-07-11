#include <stdio.h>
#include <stdlib.h>

int main()
{
	int altura;
	
	printf("Digite a altura do triangulo: ");
	scanf("%d",&altura);
	
	for (int l = 1; l <= altura; l++)
	{
		
		for (int c = 1; c <= l; c++)
		
		{
		
		printf("* ");
		
		}
		printf("\n");
	}
	
	for (int l = altura-1; l >= 1; l--)
	{
		
		for (int c = 1; c <= l; c++)
		
		{
		
		printf("* ");
		
		}
		printf("\n");
	}	
		
	
	
	
}
