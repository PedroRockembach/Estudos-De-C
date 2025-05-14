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
	int n;         		// controla o numero de entradas Vin
	float Vin = 0;  	// Entradas de tensão
	float vref;			// resistor de referencia do circuito
	float rin;			// resistor das entradas de tensao
	float vout = 0;		// saida V
	int saida = 1;		// saida do programa
	while(1)
	{
	
		Vin = vref = rin = vout = 0;
		
		printf("digite o numero de entradas: "); // recebe numero fixo de entradas
		scanf("%d",&n);
		
		printf("Qual sera o Resistor de Referencia? "); // recebe numero fixo de entradas
		scanf("%f",&vref);
		
		// anuncia as entrdas
			
		printf("=============\n  RF - %.2f\n  Vins - %d\n=============\n",vref,n);
		
		for (int i = 1;i <= n;i++)
		{
			//Vin é igual as entradas de tensoa que serão limpas toda vez que repetir
			//rin é igual as entradas de resistencia que serão limpas toda vez que repetir
			
			Vin = rin = 0;
			
			printf("\nQual sera a %d tensao? ",i);
			scanf("%f",&Vin);
			
			printf("Qual resistor dessa entrada? ");
			scanf("%f",&rin);			
			
			vout = (vout + (vref/rin)*Vin);		//essa é a formula pedida pelo professor, trabalhar em float p evitar se perder
			
			// adiciona as entradas parciais a variavel que salva o valor parcial
		}	
		
		vout = -vout; // nega o valor resultante
		printf("Saida final = %.2fV\n",vout);
		
		printf("deseja continuar?\n[1] - Continua\n[2] - Sair\n --> ");
		scanf("%d",&saida);
		if (saida == 1)
		
		{
			system("cls");
		}
		
		else if(saida == 2)
		{
			printf("O PROGRAMA DIVISOR RESISTIVO SERA ENCERRADO.");
			break;
		}
	}
	
	
	
	
}