#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int inicio;
	int fim  ;
	int passo;
	int somatorio;
	int novopasso = 1;
	int contador = 0;
	
	printf("Digite o valor inicial: ");
	scanf("%d",&inicio);
	
	printf("Digite o valor final: ");
	scanf("%d",&fim);
	
	printf("Digite o valor do passo: ");
	scanf("%d",&passo);		
	
	for (int s = inicio; s <= fim;s++)
	{
		contador += 1;
		
		if (s == 1)
		{
			
		somatorio += 0+1;
			
		}
		else
		{
			
		novopasso *= 2;
		somatorio += novopasso;	
		
			if (somatorio > 15)
			{
				
			break;
			
			}
			
		}
		printf("Soma no passo %d = %d\n",s,somatorio);	
	}
		printf("\nA quantidade de passos somados foi %d",contador-2);
		
	
}
	
