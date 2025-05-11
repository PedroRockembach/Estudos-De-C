#include <stdio.h>
#include <stdlib.h>

main () 
{
	
    int entrada;
    int soma;
    
    printf("informe um vlaor ");
    scanf("%d",&entrada);
    
    for (int a = 0; a <= entrada;a++)
	{
		if (a % 2 == 0)
		{
		soma = soma + a;
		}
	}
    printf("%d",soma);
    
}
