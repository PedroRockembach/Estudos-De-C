/*1. (4,0) Crie um programa que receba uma palavra digitada pelo usu´ario. Para a palavra digitada, fa¸ca:
(a) (0,25) Mostre a palavra digitada na tela;
(b) (1,0) Verifique se a primeira letra da palavra ´e mai´uscula. Se for min´uscula, substitua por sua
correspondente mai´uscula;
(c) (1,0) Verifique se cada uma das demais letras da palavra digitada s˜ao min´usculas. As que forem
mai´usculas, substitua por sua correspondente min´uscula;
(d) (0,25) Mostre a palavra transformada na tela;
(e) (1,5) Apresente o c´odigo ASCII correspondente a cada letra da palavra transforma*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void verifica_maiuscula(char palavra[])
{
	if (palavra[0] >= 'a' && palavra[0] <= 'z')
	{
		palavra[0] = palavra[0] - 32;
	}
}

void verifica_minuscula(char palavra[])
{
	int tamanho = strlen(palavra);
		for(int i = 1;i < tamanho;i++)
		{
			if (palavra[i] >= 'A' && palavra[i] <= 'Z')
			{
				palavra[i] = palavra[i] + 32;   
			}
		}
}

int main ()
{
	char palavra_usuario[100];
	
	printf("digite uma palavra: ");
	scanf("%[^\n]",palavra_usuario);
	
	printf("Palavra inical: %s\n",palavra_usuario);

	verifica_maiuscula(palavra_usuario);
	printf("\nInicial maiuscula: %s\n",palavra_usuario);	

	verifica_minuscula(palavra_usuario);
	printf("\nPalavra minuscula: %s\n",palavra_usuario);
}