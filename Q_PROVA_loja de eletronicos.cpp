#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int compra;
	int comp;
	float quant = 0;
	float soma = 0;
	int saida = 1;
	float preco_final;
	
printf("------TABELA DE COMPONENTES------");
printf("\n1 - Resistor = R$0.10\n2 - Capacitor = R$0.20\n3 - Indutor = R$0.30\n4 - Diodo = R$0.40\n5 - LED = R$0.50\n6 - Transistor = R$0.60");

	while(1)
	{

	printf("\n---------------------------------\nO usuario deseja comprar algo?\n[1] Sim\n[2] Nao\n---> ");
	scanf("%d",&saida);	
	
	if (saida == 2)
	{
		break;
	}	
	
	else
	{
		
		printf("Indique NUMERICAMENTE qual componente voce deseja: ");
		scanf("%d",&comp);
		
		printf("Quantos deste componente voce deseja? ");	
		scanf("%f",&quant);
		
		if (comp == 1)
		{
		
			if (quant<15)
			
			{
			soma += quant*0.10;
			}
			
			else
			{
			soma += (quant*0.10)-(quant*0.10)*0.10;
			}
			
		preco_final = soma;
		}
		
		
	}	
		
		
		
		
	}
	
}