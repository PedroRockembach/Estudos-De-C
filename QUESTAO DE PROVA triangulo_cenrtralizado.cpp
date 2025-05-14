#include <stdio.h>
#include <stdlib.h>

int main()
{
	int altura;
	
	printf("digite a altura do triangulo: ");
	scanf("%d",&altura);
	
	for (int l = 1; l <= altura; l++) // for das linhas 
	{
		for(int e = 1;e <= altura-l;e++) //for dos espaços e <= altura -L faz a altura inicial - a posição de l entao vai diminuindo o numero d espaços
		{
			printf(" ");
		}
		for(int c = 1;c <= (l*2)-1; c++ ) // faz as linhas alinhadas com L*2-1
		{
			printf("*");
		}
		printf("\n");
	}
	
	
}