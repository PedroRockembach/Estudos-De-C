//triangulo invertido

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int altura;
	
	printf("digite a altura do triangulo invertido: ");
	scanf("%d",&altura);
	
	for (int tamanho = altura; tamanho > 0; tamanho--)
		{
		
		for (int linha = 0; linha<tamanho;linha++)
			{
				
			if (linha == tamanho-1 || tamanho == altura || linha == 0)
				
				// condiçoes onde o * vai ser colocado
				//linha == tamanho-1 -> Ultima coluna
				// tamanho == altura -> primeira linha
				//linha == 0 ->primeira coluna
				
				{
					
				printf("* ");
				
				}
			
			else
				{
				
				printf("  ");
				
				}
				
			}	
		printf("\n");
		}
	
	return 0;
}
	
	
	
	
	
	
	
	
	
