#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

void linha_reta()
{
	
	printf("------------------------\n");
	
}

bool verifica_jogo(int numeros_jogador[],int quantidade_de_jogadas)
{
	// vai verificar se jogador X ou O ganhou 
	// verifia se deu velha
	
	int vitorias [8][3] = {
	{1,2,3}, {4,5,6}, {7,8,9}, // Linhas
    {1,4,7}, {2,5,8}, {3,6,9}, // Colunas
    {1,5,9}, {3,5,7}           // Diagonais
	};
	
	for (int percorre_vitorias = 0; percorre_vitorias < 8; percorre_vitorias++)
	{
		int acertos = 0;
		
		for (int percorre_opcao = 0; percorre_opcao < 3; percorre_opcao++)
		{
			int numero_da_vitoria = vitorias[percorre_vitorias][percorre_opcao];
			
			for (int confirma_numero = 0; confirma_numero < quantidade_de_jogadas; confirma_numero++)
			{
				if (numeros_jogador[confirma_numero] == numero_da_vitoria )	
				{
					acertos++;
					break;
				}	
			}
		}
	if (acertos == 3)
		return true;
	}
	return false;
}

int main()
{	
	int saida = 1;
	
	while (saida == 1)
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
	printf(" XxJOGO DA VELHA 2000xX\n");
	linha_reta();
	
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
		
		linha_reta();
		
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
				printf("\nQue posicao vai escolher jogador %c?(1-9) ",jogador);		
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
					linha_reta();
					printf("ERRO! Caractere ja escolhido ou fora de raio(1-9)\n");
					linha_reta();
					turno --;
					continue;
				}
				
				else
				{
					system("cls");				
					numeros_escolhidos[turno] = escolha;
					
						int linha = (escolha - 1) / 3;
						int coluna = (escolha - 1) % 3;
						
						printf(" XxJOGO DA VELHA 2000xX\n");
						linha_reta();
						
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
					linha_reta();
					
	// somando contadores e coloccando em lista
					
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
				
				if (turno >= 4)
					{
						bool vitoria = false; // guarda resultado da funcao 
						
						if (jogador == 'X')
						{
							vitoria = verifica_jogo(numeros_escolhidos_X,posX);
							
						}
						else
						{
							vitoria = verifica_jogo(numeros_escolhidos_O,posO);	
						}
		
					
					if (vitoria == true)
					{
						linha_reta();
						printf("FIM DE JOGO! Jogador '%c' vence \n",jogador);
						linha_reta();
						break;
					}
				}
			if (turno == 8)
			{
				linha_reta;
				printf("DEU VELHA!, O JOGO EMPATOU.\n");
				linha_reta();
			}		
		}
	printf("Voce deseja jogar mais uma vez?\nSIM = 1\nNAO = 0\n >>>> ");
	scanf("%d",&saida);	
	}
	
/*Testando as funcionalidades
	1
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
	
*/
}
