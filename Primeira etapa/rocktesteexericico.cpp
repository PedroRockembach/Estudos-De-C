#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Faça um programa que receba a quantidade de valores e mostre a diferença entre os valores menores que 60kg e maiores que 70kg
//variação 1 - Vai comparar o menor e o maior valor e mostrar a diferença entre eles 


main ()
{
	
int	maior = -999; 
int menor = 999;
int ntermos = 0;
int valor = 0;
int c;
int diferenca = 0;

//quantidade de valores a ser informado sinaliza o final do FOR

printf("Insira o numero de termos a ser digitado: ");
scanf("%d",&ntermos);


printf("===============\n");


for (c=1;c<=ntermos;c++)	

	{
		
	printf("Insira um valor: ");
	scanf("%d",&valor);
	
	//confirma se os valores são maiores que setenta ou menores que sessenta e após ve o maior e menor 
	
	if (valor>=70 && valor > maior)
	
		{
		maior = valor;
		}
		
	if (valor<=60 && valor < menor)
	
		{		
		menor = valor;
		}	
		
	}
	
diferenca = maior-menor; //faz a conta
diferenca = abs(diferenca);// confirma se o resultado foi um numero inteiro 

printf("A Diferenca entre o maior (%d) e o menor (%d) eh de %d",maior, menor, diferenca);
}