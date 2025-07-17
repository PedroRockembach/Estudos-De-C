#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
void criptografia(char palavra[],int vetor_mudanca[])
{
	int tamanho = strlen(palavra);
	
	// A - B Se o valor da posicao for 1 e esta posicao for minuscula, muda para maiuscula
	//Se o valor do vetor na posi¸c˜ao corrente for ”1”, e nessa posi¸c˜ao a palavra cont´em uma letra
	//mai´uscula, essa deve ser substitu´ıda por sua correspondente min´uscula;
	
		for(int percorre = 0; percorre < tamanho; percorre++)
		{
			if (vetor_mudanca[percorre] == 1)
			{
				if (palavra[percorre] >= 'a' && palavra[percorre] <= 'z')
				{ 
				// tomar cuidado com a posicao do vetor e o igual na comparação
					palavra[percorre] = palavra[percorre] - 32;
				
				}
				
				else
				{
					if (palavra[percorre] >= 'A' && palavra[percorre] <= 'Z')
					{ 
					// tomar cuidado com a posicao do vetor e o igual na comparação
						palavra[percorre] = palavra[percorre] + 32;
					}
				}
										
			}

		}
	// C - 
	
		for(int percorre = 0; percorre < tamanho; percorre++)
		{
			if (vetor_mudanca[percorre] == 2)
			{
				palavra[percorre] = palavra[percorre] / 2;
				
			}	
		}		
	
	//Saida
		printf("Palavra Transformada: %s",palavra);	
}

int main()
{
	printf("BEM VINDO A CRIPTOGRAFIA\n");
	printf("INSTRUCOES:\n-Ao digitar 1 a posicao da chave, a letra vai inverter sua capitalizacao(a = A or A = a)\n-Ao digitar 2, o codigo ascci do valor naquela posicao vai ser dividido por 2.\n\n");
	
	char palavra[300];	
	
	printf("digite uma palavra: ");
	scanf(" %s",palavra);
	
	printf("Palavra antes: %s\n\n",palavra);
	
	int tamanho = strlen(palavra);
	int mudanca[tamanho];
	
		for (int c = 0;c < tamanho;c++)
		{
			printf("Digite o valor da pos[%d] da chave: ",c);
			scanf("%d",&mudanca[c]);
			
		}
		
		printf("\n");
		printf("Essa eh a chave de criptografia: ");
		
		for (int mostra = 0;mostra < tamanho;mostra++)
		{
			printf("%d",mudanca[mostra]);
		}
			
		printf("\n");
	
	
	criptografia(palavra,mudanca);

	
}