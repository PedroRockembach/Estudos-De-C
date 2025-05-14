#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() 
{
	int entrada = 0;
	int quadrado = 0;
	int saida_um = 0;
	int saida_dois = 0;
	int soma = 0;
	int saida =0;
	int cont = 1;
	int contador = 0;
	int maior = 0;
	
	while(1)
	{	
		//limpa variaveis
		saida_um = saida_dois = quadrado = soma = entrada = saida = 0;
		
		//limpa tela
		system("cls");
		
		printf("digite um numero: ");
		scanf("%d",&entrada);
		
		//contador
		contador += 1;
		
		for (int c = 1; c<=entrada;c++)
		
		{
			quadrado = pow(c,2);
			saida_um += quadrado;
		}
		
		printf("Diferenca entre a soma dos quadrados = %d\n",saida_um);
		
		for (int i = 1; i<=entrada;i++)
		
		{
			
			soma += i;
			saida_dois = pow(soma,2);			
		}
		
		printf("o quadrado da soma entre os numeros eh = %d\n",saida_dois);
		
		saida = saida_um - saida_dois;
		
		if (saida < 0)
		
		{
			saida = saida * (-1);
			
			if (saida>2000)
			{
				maior += 1;
			}
		}
		else
		
		{
			saida = saida;
			
			if (saida>2000)
			{
				maior += 1;
			}
		}
		printf("a diferenca entre os dois em modulo eh: %d ",saida);
		
		
		printf("\nvoce deseja continuar?\n[1] = continua\n[2] = sair\n --> ");
		scanf("%d",&cont);
		
		if (cont == 2)
		{
		printf("OBRIGADO POR UTILIZAR O PROGRAMA!");
		printf("\nVOCE DIGITOU %d ENTRADAS",contador);
		printf("\nTIVERAM %d NUMEROS MAIORES QUE 2000",maior);
		break;
		}
		
		else
		{
			cont == 1;
		}
	
	}
		
}