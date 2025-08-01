#include <stdio.h>
#include <stdlib.h>

int main()
{
	int altura;
	int contador = 0;
	
	printf("Digite a altura do triangulo: ");
	scanf("%d",&altura);
	
	for (int l = 0; l<=altura; l++)
	{
		
		for (int c = 0;c <= l; c++)	
		{
			contador += 1;
			printf("%d ",contador);
		}
		
		printf("\n");
	}
	
	
	
	
}