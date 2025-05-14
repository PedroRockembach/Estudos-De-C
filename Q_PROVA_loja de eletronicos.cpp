#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int compra;
	int comp;
	float quant = 0;
	float soma = 0;
	int saida = 1;
	float preco_final;
	

	while(1)
	{
		
	system("cls");
	
	printf("------TABELA DE COMPONENTES------");
	printf("\n1 - Resistor = R$0.10\n2 - Capacitor = R$0.20\n3 - Indutor = R$0.30\n4 - Diodo = R$0.40\n5 - LED = R$0.50\n6 - Transistor = R$0.60");
	
	printf("\n---------------------------------\nO usuario deseja comprar algo?\n[1] Sim\n[2] Nao\n---> ");
	scanf("%d",&saida);	
	
	if (saida == 2)
	
	{	
		printf("preco final = %f\n",soma);
		printf("O PROGRAMA SERA ENCERRADO"); 	
		break;
	}	
	
	else
	{
		
		printf("Indique NUMERICAMENTE qual componente voce deseja: ");
		scanf("%d",&comp);
		
		printf("Quantos deste componente voce deseja? ");	
		scanf("%f",&quant);
		
		
		
		if (comp == 1) //RESISTOR
		{
		
			if (quant<10)
			
			{
				soma += quant*0.10;
			}
			
			else 
			{
				
				soma += (quant*0.10);
					
				if (soma > 15.00)
				
					{
					soma += (quant*0.10)-(quant*0.10)*0.10;	
					}	
			}
		}		
		
		
		
		if (comp == 2) // CAPACITOR
		{
		
			if (quant<15)
			
			{
				soma += quant*0.20;
			}
			
			else
			{
				soma += (quant*0.20);
				
				if (soma>16.00)
				{
				soma -= soma*0.05;
				}
				
			}
		}



		if (comp == 3) // INDUTOR
		{
		
			if (quant<20)
			
			{
				soma += quant*0.30;
			}
			
			else
			{
				soma += (quant*0.30);
				
				if (soma>17.00)
				{
				soma += (quant*0.30)-(quant*0.30)*0.04;					
				soma -= soma*0.08;
				}
				
			}
		}	
		
			
		if (comp == 4) // DIODO
		{
		
				soma += quant*0.40;
		}		
		if (comp == 5) // lED
		{
		
				soma += quant*0.50;
		}		
		if (comp == 6) // TRANSISTOR
		{
		
				soma += quant*0.60;
		}		
	
	
	}
		
		
		
		
		
	}
	
}