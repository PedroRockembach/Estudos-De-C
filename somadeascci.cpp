#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Leia uma palavra e calcule a soma dos valores ASCII de todas as letras. Depois imprima o total.

Exemplo de entrada: casa
Saída esperada: Soma dos valores ASCII: 411*/



int main()
{
	
	char nome[150];
	int cont = 0;
	int tamanho;
	
	printf("Digite um nome: ");
	scanf(" %s",nome);	
	
	tamanho = strlen(nome);
		
	for (int i = 0; i < tamanho; i++)
	{
		
		cont += nome[i];
		printf("%c - %d\n",nome[i],nome[i]);

	}
	printf("O valor final da soma eh %d",cont);
	
	
}