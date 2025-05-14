#include <stdlib.h>
#include <stdio.h>

int main()
{
	int retangulo;
	int triangulo;
	
	printf("digite a altura do triangulo: ");
	scanf("%d",&triangulo);
	printf("digite a altura do retangulo: ");
	scanf("%d",&retangulo);	

	for(int l = 1; l<triangulo;l++ )
	{
		for(int e = 1;e<=triangulo-l;e++)
		{
			printf(" ");	
		}
		for(int c = 1;c <= (l*2)-1;c++ )
		{
			printf("*");
		}	
			
		printf("\n");
		
	}
	
	for(int p = 1;p<=retangulo;p++)
	{
		for(int k=1; k <= (triangulo*2)-1;k++)
		
		{
			
			printf("*");
			
		}
		
	printf("\n");
	}
	
	
}