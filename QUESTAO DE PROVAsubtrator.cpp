#include <stdio.h>
#include <stdlib.h>

//subtrator
//saida = vout

//2 entradas
//ref = 8k 
//v1 = 20v e 15k
//v2 = 15v e 8k 
//vout == -25

int main()
{
	int n;
	float Vin = 0;
	float vref;
	float rin;
	float vout = 0;
	
	printf("digite o numero de entradas: ");
	scanf("%d",&n);
	
	printf("Qual sera o Resistor de Referencia? ");
	scanf("%f",&vref);
	
		
	printf("=============\n  RF - %.2f\n  Vins - %d\n=============\n",vref,n);
	
	// n = N de entradas 
	// vref = Resistor de referencia
	// valor variavel que é referente as entradas
	
	
	for (int i = 1;i <= n;i++)
	{
		Vin = rin = 0;
		
		printf("Qual sera a %d tensao? ",i);
		scanf("%f",&Vin);
		
		printf("\nQual resistor dessa entrada? ");
		scanf("%f",&rin);
		
		vout =(vout + (vref/rin)*Vin);
	}	
	
	vout = -vout;
	printf("Saida final = %fV",vout);
	
	
	
	
	
}