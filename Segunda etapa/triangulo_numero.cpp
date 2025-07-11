#include <stdio.h>
#include <stdlib.h>

int main ()
{
	
	int altura;
	
	printf("digite o tamanho do triangulo: "); 
	scanf("%d",&altura);
	
	for (int l = 1; l <= altura; l ++)
		{
			
			for(int c = 1; c <= l; c ++ )
			{	

//				printf("%d ",c); faz dele numerico || QUEDA DE NUMEROS

//				printf("* "); // faz dele um triangulo em queda de asteriscos
				
				if (l == 1 || l == altura)
				{
					
					printf("%d ",l);
					
				}
				
				else
				{
					if(c == 1 || c == l) 
					{
						
					printf("%d ",l);
						
					}	
					
					else
					{
						
						printf("  ");
						
					}
				
				}
			
			}
			
		printf("\n");	
		}
	
	
}