#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int digit;
	int resistencia_entrada;
	int faixa_um;
	int faixa_dois;
	int faixa_tres;
	
	printf("Digite o valor do resistor: ");
	scanf("%d",&resistencia_entrada);
	
	printf("Informe a quantidade de digitos da resistencia: ");
	scanf("%d",&digit);
	
	faixa_um = resistencia_entrada/pow(10,digit-1);
	printf("FAIXA UM = %d\n",faixa_um);	
	
	faixa_dois = (resistencia_entrada/pow(10,digit-2))-faixa_um*10;
	printf("FAIXA DOIS = %d\n",faixa_dois);
	
	faixa_tres = digit-2;
	printf("FAIXA TRES = %d\n",faixa_tres);
	
	// que baita trambolhada vai vir agora, com um switch case ficaria bem melhor
	
	printf("\n");
	
	if (faixa_um == 0 )
	{
		
		printf("PRIMEIRA FAIXA: PRETO");
		
	}
	if (faixa_um == 1 )
	{
		
		printf("PRIMEIRA FAIXA: MARROM");
		
	}
	if (faixa_um == 2 )
	{
		
		printf("PRIMEIRA FAIXA: VERMELHO");
		
	}		
	if (faixa_um == 3 )
	{
		
		printf("PRIMEIRA FAIXA: LARANJA");
		
	}
	if (faixa_um == 4 )
	{
		
		printf("PRIMEIRA FAIXA: AMARELO");
		
	}

	if (faixa_um == 5 )
	{
		
		printf("PRIMEIRA FAIXA: VERDE");
		
	}

	if (faixa_um == 6 )
	{
		
		printf("PRIMEIRA FAIXA: AZUL");
		
	}
	if (faixa_um == 7 )
	{
		
		printf("PRIMEIRA FAIXA: VIOLETA");
		
	}
	if (faixa_um == 8 )
	{
		
		printf("PRIMEIRA FAIXA: CINZA");
		
	}

	if (faixa_um == 9 )
	{
		
		printf("PRIMEIRA FAIXA: BRANCO");
		
	}


	printf("\n");
// =============================== FAIXA DOIS ====================================//

	if (faixa_dois == 0 )
	{
		
		printf("SEGUNDA FAIXA: PRETO");
		
	}
	if (faixa_dois == 1 )
	{
		
		printf("SEGUNDA FAIXA: MARROM");
		
	}
	if (faixa_dois == 2 )
	{
		
		printf("SEGUNDA FAIXA: VERMELHO");
		
	}		
	if (faixa_dois == 3 )
	{
		
		printf("SEGUNDA FAIXA: LARANJA");
		
	}
	if (faixa_dois == 4 )
	{
		
		printf("SEGUNDA FAIXA: AMARELO");
		
	}

	if (faixa_dois == 5 )
	{
		
		printf("SEGUNDA FAIXA: VERDE");
		
	}

	if (faixa_dois == 6 )
	{
		
		printf("SEGUNDA FAIXA: AZUL");
		
	}
	if (faixa_dois == 7 )
	{
		
		printf("SEGUNDA FAIXA: VIOLETA");
		
	}
	if (faixa_dois == 8 )
	{
		
		printf("SEGUNDA FAIXA: CINZA");
		
	}

	if (faixa_dois == 9 )
	{
		
		printf("SEGUNDA FAIXA: BRANCO");
		
	}
	
	printf("\n");
	//============================================ FAIXA TRES AGORA ===============================//
	
	if (faixa_tres == 0 )
	{
		
		printf("TERCEIRA FAIXA: PRETO");
		
	}
	if (faixa_tres == 1 )
	{
		
		printf("TERCEIRA FAIXA: MARROM");
		
	}
	if (faixa_tres == 2 )
	{
		
		printf("TERCEIRA FAIXA: VERMELHO");
		
	}		
	if (faixa_tres == 3 )
	{
		
		printf("TERCEIRA FAIXA: LARANJA");
		
	}
	if (faixa_tres == 4 )
	{
		
		printf("TERCEIRA FAIXA: AMARELO");
		
	}

	if (faixa_tres == 5 )
	{
		
		printf("TERCEIRA FAIXA: VERDE");
		
	}

	if (faixa_tres == 6 )
	{
		
		printf("TERCEIRA FAIXA: AZUL");
	}
}
