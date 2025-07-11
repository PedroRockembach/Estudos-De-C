#include <stdlib.h>
#include <stdio.h>

main()
{
	int entrada;
	int i;
	int j;
	
	printf("digite um numero para ver sua queda: ");
	scanf("%d",&entrada);
	
	for (i = 0; i <= entrada; i++)
	
	{
		for (j = 1; j <= i; j++)
		
		{
			printf("%d ",j);	
		}
		
	printf("\n");
				
	}		
}