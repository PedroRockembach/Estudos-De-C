// vetores


#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	int tamanho = 0;
	int v = 0;
	int maior = -999;
	int quadrado;
	printf("Qual sera o tamanho da sua lista? ");
	scanf("%d",&tamanho);	

	int lista[tamanho];
	
	//char lista[3] = {'o','l','a'};
	
	for (int i = 0;i<tamanho;i++)
	
	{
	
		printf("Digite um numero para ser adicionado a posicao %d da lista: ",i);
		scanf("%d",&v);
		
		
		if (v > 5)	
		{
			quadrado = v*v;
			lista[i] = quadrado;
			
			if (quadrado > maior)
			{
				maior = quadrado;
			}
		}
		
		else
		{
			lista[i] = v;
			
			if (v > maior)
			{
				maior = v;
			}
		}
	}
	
	for (int a = 0; a < tamanho; a++)
	{
		printf("'%d', ",lista[a]);	
	}
	printf("\nO maior valor foi %d",maior);
	
	

	
	
	
	
	
	
}