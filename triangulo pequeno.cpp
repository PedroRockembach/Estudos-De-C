#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int H;
	
	printf("digite um numero para altura do triangulo: ");
	scanf("%d",&H);
	
	for (int i = 0;i<H;i++)	//for que faz a linha
	
	{
		
		for (int j = 1;j<=i+1;j++) //for que preenche
		
			printf(" * ");	
			
			printf("\n");	
			
	}
	
	return 0;
	
}