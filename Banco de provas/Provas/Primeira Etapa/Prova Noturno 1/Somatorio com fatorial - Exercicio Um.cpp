#include <Stdio.h>
#include <stdlib.h>

int main()
{
	int contagem = 0;
	float resultado = 1; // esse resultado DEVE começar em 1 pois ele sera usado no fatorial, que é feito com multiplicação, o fator comum de multiplicação é sempre 1
	float soma_resultado; // nessa variavel vai ser somado o resultado do fatorial de cada numero no somatorio.
	
	printf("Digite um numero: ");
	scanf("%d" , &contagem);
	
	// Esses for são apenas para mostrar como no exemplo.
	//A parte necessaria é apenas o for final.
		for (int i = 1; i <= contagem;i++)
		{	
			if (i != 4)
			{
				printf("!%d +",i);	
			}
			
			else
			{
				printf("!%d = ",i);
			}
		}	
		for (int i = 1; i <= contagem;i++)
		{	
			resultado *= i;
			if (i != 4)
			{
				printf("%.2f + ",resultado);	
			}
			
			else
			{
				printf("%.2f = ",resultado);
			}
		}
		
		printf("\n");
	//	
	//for da logica em si. 
	
	resultado = 1; // aqui eu reseto o resultado para 1, pois usei ele no for de cima para mostrar a conta sendo feita.
	for (int i = 1; i <= contagem; i++)
	{
		resultado *= i;
		soma_resultado += resultado;
	}
	
	printf("Resultado = %.2f",soma_resultado);
	
	
	// atente-se que para resolver o exercicio, só esse for e as variaveis são necessarios.
	
}