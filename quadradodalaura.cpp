#include <stdio.h>
#include <stdlib.h>

//faça um programa que recebe um numero do usuario e faça um quadrado com essas medidas

int main()
{

	int tamanho;
	
	printf("digite o tamanho do seu quadrado: ");
	scanf("%d",&tamanho);

	for (int linha = 1; linha <= tamanho;linha++) //<-
	{
		for (int coluna = 1; coluna <= tamanho; coluna++)
		{
			
		//printf(" * "); // --> quadrado com asterisco
		printf("%d ",linha); // --> quadrado com numeros
		
		}	
		
	printf("\n");
	}

//TRIANGULO
	printf("\n");
	for (int linha_triangulo = 1; linha_triangulo <= tamanho;linha_triangulo++) 
	{
		for (int coluna_triangulo = 1; coluna_triangulo <= linha_triangulo; coluna_triangulo++)
		{
			
		printf(" * ");
		
		}	
		
	printf("\n");
	}


}
