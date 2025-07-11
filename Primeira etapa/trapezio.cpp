#include <stdio.h>
#include <stdlib.h>

int main()
{	
	int H,base_menor,base_maior = 0;
	
	printf("digite o valor da base superior do trapezio: ");
	scanf("%d",&base_menor);
	
	printf("\ndigite o valro da base inferior do trapezio: ");
	scanf("%d",&base_maior);
	
	printf("\ndigite a altura do trapezio: ");
	scanf("%d",&H);

	
	for (int c=0;c<H;c++)
	{
		
		for (int j = 0;j < base_menor+c;j++)
		{
			printf(" * ");
			
		}
		
	if (c == H-1)
	
		{
			printf("\n");
			for (int a = 0; a < base_maior ;a++)
			{
				printf(" * ");
				
			}		
		}
		
	printf("\n");


	
	}
	
	return 0; 
}

	