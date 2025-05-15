#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	int entrada;
	
	
	while(1)
	{
		entrada = 0; //limpa as entradas
			
		printf("Digite o numero para o quadrado: "); //valor inicial
		scanf("%d",&entrada);
		
		printf("\n"); // quebra linha 
		
		if (entrada < 0) // fecha se for valor negativo
		
		{
			printf("FINALIZANDO GERADOR DE PADRAO QUADRATICO");
			break;
		
		}
		
		for (int l = 1;l <= entrada;l++) // faz as linhas
		{
			for (int c = 1;c <= entrada;c++) //faz as colunas
			{
				if (l % 2 != 0 ) // se linha for impar printa a linha que ele está inserido
				{
					printf("%d ",l);
				}
				else // se nao(linha par) ele printa a contagem da coluna
				{
					printf("%d ",c);
				}
				
			}
			printf("\n");
		}
		
		
	
	}
	
}