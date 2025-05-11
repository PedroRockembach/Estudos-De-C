#include <stdio.h>
#include <stdlib.h>

// programa do somatorio com fatorial 

int calcular_fatorial(int n)
{
int fat = 1;

for (int i = 1; i<=n; i++)
	{
	fat*=i;
	}
	return fat;
}

main()
{
	int termos;
	float somatorio = 0.0;
	
	printf("informe a quantidade de termos: ");
	scanf("%d",&termos);

	for (int i = 1; i<=termos; i++)
	{
	int fatorial = calcular_fatorial(i)	;
	somatorio += (float) i/fatorial;
	}
		
	printf("esse é o somatorio %.4f",somatorio);
	
	
}
