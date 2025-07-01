#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void mostrar_matriz(float matriz[3][3])
{	
	for (int i = 0;i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf(" %-4.1f ",matriz[i][j]);
		}
	printf("\n");
	}
}

void matriz_ao_quadrado(float matriz [3][3])
{
	float copia[3][3];
	memcpy(copia, matriz, sizeof(copia));
	
	for (int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			copia[i][j] = pow(copia[i][j],2);
			printf(" %-4.1f ",copia[i][j]);
		}
		printf("\n");
	}
}
	
void raiz_quadrada(float matriz[3][3])
{
	float copia[3][3];
	memcpy(copia, matriz, sizeof(copia));
		
	for(int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			copia[i][j] = sqrt(copia[i][j]);
			printf(" %-5.2f ",copia[i][j]);						
		}
		printf("\n");
	}
}

void troca_colunas(float matriz[3][3], int col1, int col2)
{
	float copia[3][3];
	memcpy(copia, matriz, sizeof(copia));
		
    // percorre cada linha da matriz
    for (int i = 0; i < 3; i++)
    {
        // guarda o valor da coluna col1 em uma variável temporária
        float temp = copia[i][col1];

        // substitui o valor da coluna col1 pelo da col2
        copia[i][col1] = copia[i][col2];

        // coloca o valor temporário (original da col1) na col2
        copia[i][col2] = temp;
    }   
	for (int i = 0;i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf(" %-4.1f ",copia[i][j]);
		}
	printf("\n");
	}    
}
void troca_linhas(float matriz[3][3], int lin1, int lin2)
{
	float copia[3][3];
	memcpy(copia, matriz, sizeof(copia));	
    // percorre cada coluna da matriz
    for (int j = 0; j < 3; j++)
    {
        // guarda o valor da coluna lin1 em uma variável temporária
        float temp = copia[lin1][j];

        // substitui o valor da coluna lin1 pelo da lin2
        copia[lin1][j] = copia[lin2][j];

        // coloca o valor temporário (original da lin1) na lin2
        copia[lin2][j] = temp;   
    }
	for (int i = 0;i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf(" %-4.1f ",copia[i][j]);
		}
	printf("\n");
	} 
}	
int soma_diag(float matriz[3][3])
{
	int saida = 0;
	for (int i = 0; i < 3; i++)
	{
		for(int j = 0;j < 3; j++)
		{
			if (i+j == 2)
			{
				
				saida += matriz[i][j];
				
			}
		}
	}
	return saida;
}

void matriz_transposta(float matriz[3][3])
{
	for (int j = 0;j < 3; j++)
	{
		for (int i = 0; i < 3; i++)
		{
			printf(" %-4.1f ",matriz[i][j]);
		}
	printf("\n");
	}
	
}
int main()
{
	printf("MATRIZ MANIPULADA\n");
	
	// esse programa vai pedir ao usuario que preencha uma matriz e fara as seguintes manipulações com a mesma
	// Mostrar valores de cada posição ao quadrado
	// Mostrar a raiz quadrada)
	// inverter primeira coluna com terceira 
	// inverter primeira linha com terceira linha
	// somar a transposta
	// cada uma das manipulações em diferentes matrizes para ser possivel a vizualização 
	// essas manipuações seram selecionadas a partir de um menu
	
	float matriz[3][3];
	float temporario;
	
	for (int i = 0;i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("Qual valor da posicao [%d][%d] ",i,j);
			scanf("%f",&temporario);
			matriz[i][j] = temporario;
		}
	}
	
	printf("\nMATRIZ COMPLETA\n");
	mostrar_matriz(matriz);
	
	printf("\nMATRIZ AO QUADRADO\n");
	matriz_ao_quadrado(matriz);	
	
	printf("\nMATRIZ RAIZ QUADRADA\n");	
	raiz_quadrada(matriz);
	
	printf("\nINVERTE COLUNA 1 E 3\n");
	troca_colunas(matriz,0,2);
	
	printf("\nINVERTE LINHA 1 E 3\n");
	troca_linhas(matriz,0,2);	
	
	printf("\nSOMA DA DIAGONAL PRINCIPAL\n");
	printf("%d",soma_diag(matriz));

	printf("\n\nTRANSPOSTA\n");
	matriz_transposta(matriz);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}