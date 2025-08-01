#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main()
{
	
	float vref;
	int binario[32];
	int n;
	float somatorio = 0.0;
	
	///////////////////////////////////////////////////////////////////
	printf("insira a tensao de referencia: ");
	scanf("%f",&vref);
	///////////////////////////////////////////////////////////////////
	printf("insira o numero de bits: ");
	scanf("%d",&n);
	
	for (int i = 0; i < n;i++)
	{
		printf("Insira um numero binario comecando da posicao msb: ");
		scanf("%d",&binario[i]);	
		if (binario[i] != 0 && binario[i] != 1)
		{
			i--;
			printf("por favor insira somente 0 ou 1\n");
		}
	}
	///////////////////////////////////////////////////////////////////
	printf("Seu numero >> ");
	for(int j = 0; j < n;j++)
	{
		printf("%d",binario[j]);
	}
	printf("\n");
	///////////////////////////////////////////////////////////////////
	printf("A conversao do seu sinal digital com tensao de referencia de %f e %d bits é: ",vref,n);

	
	for (int k = 0; k < n; k++)
	{
		somatorio += (float)binario[k]/(pow(2,(k+1)));
	}
	printf("%f",somatorio*vref);
	
	
	
	
}