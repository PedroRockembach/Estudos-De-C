//Triangulo vazado

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int altura;
	
	printf("digite a altura do triangulo: ");
	scanf("%d",&altura);
		
	for (int c = 0; c < altura;c++)
	{
		
		for (int a = 0; a<=c;a++)
		{
			
			if (a == 0 || a == c || c == altura-1)
			{	
		
				printf("* ");	
			
			}
			
			else
			{
				
				printf("  ");	
			
			}	
		}
		
	printf("\n");
	
	}	
	
return 0;
	
}