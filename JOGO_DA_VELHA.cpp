#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void linha()
{
	printf("--------------------------------\n");
}

int main()
{	
//DEFINE VARIAVEIS 
	
	
	int jogo_inicial [3][3];
	// variavael inicial do jogo, usada para demonstrar posições
	
	char jogo_atualiza [3][3];
	// essa é a matrix que sera atualizda
	
	char jogador;
	
	int numeros_escolhidos_X [5];
	int numeros_escolhidos_O [5];
	
	int posX = 0;
	int posO = 0;
	// variavel que vai armazenar os numeros ja escolhidos para: Se numero in vetor, return false, else true


//Matrix inicial, mostrando as posiçoes a esquerda(1 a 9) e a direita a matrix que vai ser preenchida 

	int conta = 0;
	for (int i = 0; i < 3; i++)
	{

		
		for (int z = 0;z < 3;z++)
		{
			if (z < 2)
			{	
				jogo_atualiza[i][z] = '*';
				printf(" %c |",jogo_atualiza[i][z]);
			}
			else
			{
				jogo_atualiza[i][z] = '*';
				printf(" %c ",jogo_atualiza[i][z]);
			}

		}
		
		printf(" ");	
			
		for (int j = 0; j < 3; j++)
		{
			
			conta++;
			
			if (j < 2)
			{
				jogo_inicial[i][j] = conta;
				printf(" %d |",jogo_inicial[i][j]);
				
			}
			else
			{
				jogo_inicial[i][j] = conta;
				printf(" %d ",jogo_inicial[i][j]);
			}
			
		}
		printf("\n");
    if (i < 2)
        printf("---|---|--- ---|---|---\n");
	}
	
	linha();
	
//Usuario escolhe posição na matrix e marca ela.

	int escolha = 0;
	// variavel para escolha da jogada
	
	int numeros_escolhidos [9];
	// vetor para armazenar valores gerais

	for (int i = 0;i < 9;i++)
	{numeros_escolhidos[i] = -1;}
	//prenche esta matrix com valores "vazio"
	
	for (int turno = 0; turno < 9; turno++)
	{
		
		//o if inline é para descobrir se a jogada é do jogador 'X' ou do jogador 'O'
		// if inline é coisa doida, nao entendo nao
		
		jogador = (turno % 2 == 0) ? 'X' : 'O';
		{	
			
			printf("Que posicao vai escolher jogador %c?(1-9) ",jogador);		
			scanf("%d",&escolha);
			
			bool repetido = false;
			
			for (int i = 0; i < turno; i++ )
			{
				if (escolha == numeros_escolhidos[i])
				{
					repetido = true;
					break;
				}	
			}
		
			if (repetido || escolha > 9 || escolha < 1)
			{
				linha();
				printf("ERRO! Caractere ja escolhido ou fora de raio(1-9)\n");
				linha();
				turno --;
				continue;
			}
			
			else
			{
				numeros_escolhidos[turno] = escolha;
				
					int linha = (escolha - 1) / 3;
					int coluna = (escolha - 1) % 3;
					jogo_atualiza[linha][coluna] = jogador;  // 'X' ou 'O'
					//calcula linah e coluna a partir da escolha
					
				// for que vai mostrar cada jogada
				for (int i = 0; i < 3;i++)
				{
					for(int j = 0;j < 3;j++)
					{
						
						if (j < 2)
						{	
							printf(" %c |",jogo_atualiza[i][j]);
						}
						else
						{
							printf(" %c ",jogo_atualiza[i][j]);
						}
					}	
					
					printf(" ");
					
					// mesma logica do comeco para mostrar uma matrix com posições
					for (int j = 0; j < 3; j++)
					{
						if (j < 2)
							printf(" %d |",jogo_inicial[i][j]);
						else
							printf(" %d ",jogo_inicial[i][j]);
					}
					
					printf("\n");
					if (i < 2)
        				printf("---|---|--- ---|---|---\n");
						
				}
				
				
				if (jogador == 'X')
				{
					numeros_escolhidos_X [posX] = escolha;
					posX++;
				}
				else
				{
					numeros_escolhidos_O [posO] = escolha;	
					posO++;
				}
			}
		}	
	}
	
//Testando as funcionalidades
	
	printf("TODAS AS ESCOLHAS -");
	for (int i = 0;i < 9;i++)
	{
		printf(" %d ",numeros_escolhidos[i]);	
	}
	
	printf("\n");
	printf("NUMEROS DO JOGADOR X -");
	for (int i = 0;i < 5;i++)
	{
		printf(" %d ",numeros_escolhidos_X[i]);	
	}
	
	printf("\n");
	printf("NUMEROS DO JOGADOR O -");	
	for (int i = 0;i < 4;i++)
	{
		printf(" %d ",numeros_escolhidos_O[i]);	
	}	
	
	
		

}
