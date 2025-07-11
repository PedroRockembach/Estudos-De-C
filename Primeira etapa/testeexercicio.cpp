#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Faça um programa que receba a quantidade de valores e mostre a diferença entre os valores menores que 60kg e maiores que 70kg

main ()
{
int contadorbaixo,contadoralto = 0; 
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
	
	if (valor>=70)
	
		{
		contadoralto+=1;
		}
		
	else if (valor<=60)
	
		{
		contadorbaixo+=1;	
		}
			
	if (valor<0)
	
		{
		break;	
		}
		
	}
	
diferenca = contadoralto-contadorbaixo; //faz a conta
diferenca = abs(diferenca);

printf("%d",diferenca);


}