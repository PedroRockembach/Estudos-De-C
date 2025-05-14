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
	
	printf("digite o numero de entradas: "); // recebe numero fixo de entradas
	scanf("%d",&n);
	
	printf("Qual sera o Resistor de Referencia? "); // recebe numero fixo de entradas
	scanf("%f",&vref);
	
	// anuncia as entrdas
		
	printf("=============\n  RF - %.2f\n  Vins - %d\n=============\n",vref,n);
	
	// n = N de entradas 
	
	// vref = Resistor de referencia
	// valor variavel que é referente as entradas
	
	
	for (int i = 1;i <= n;i++)
	{
		//Vin é igual as entradas de tensoa que serão limpas toda vez que repetir
		//rin é igual as entradas de resistencia que serão limpas toda vez que repetir
		
		Vin = rin = 0;
		
		printf("Qual sera a %d tensao? ",i);
		scanf("%f",&Vin);
		
		printf("\nQual resistor dessa entrada? ");
		scanf("%f",&rin);
		
		//essa é a formula pedida pelo professor, trabalhar em float p evitar se perder
		
		vout = (vout + (vref/rin)*Vin);
		
		// adiciona as entradas parciais a variavel que salva o valor parcial
	}	
	// nega o valor resultante
	vout = -vout;
	printf("Saida final = %.2fV",vout);
	
	
	
	
	
}