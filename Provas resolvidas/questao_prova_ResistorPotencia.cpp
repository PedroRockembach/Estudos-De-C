#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	float resistor;
	float corrente;
	float tensao;
	float pmax;
	float potencia_dissipada;
	
	printf("Insira a fonte de tensao(V): ");
	scanf("%f",&tensao);
		
	printf("Insira resistor(Ohm): ");
	scanf("%f",&resistor);
	
	corrente = tensao/resistor;	
	printf("\nCorrente calculada: %.2fA\n",corrente);
	
	printf("\nInsira a potencia maxima(W): ");
	scanf("%f",&pmax);
	
	potencia_dissipada = tensao * corrente;
	
	printf("\nPotencia dissipada: %.2fW.\n",potencia_dissipada);
	if(potencia_dissipada < pmax * 0.8)
	{
		if(pmax * 0.8 <= potencia_dissipada && potencia_dissipada < pmax)
			{
				printf("Atencao: Operacao proxima do limite!");
				
			}		
		else
			{
			printf("Operacao Segura");	
			}
	}
	if (potencia_dissipada >= pmax)
		{
			printf("Risco de queima! Potencia excedida.");
		}
}