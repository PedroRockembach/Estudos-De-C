#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Exercício 3: Substituição de vogais
Peça ao usuário para digitar uma palavra. Depois, substitua todas as vogais por *.

Exemplo de entrada: computador
Saída esperada: c*mp*t*d*r*/

int ehVogal(char c){
	return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
			c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');		
}

int main()
{
	
	char nome[150];
	int tamanho;
	
	printf("Digite uma palava: ");
	scanf(" %s",nome);
	
	tamanho = strlen(nome);
	
	for (int i = 0; i < tamanho;i++)
	{
		if (ehVogal(nome[i])) 
		{
			
			nome[i] = '*';
			
		}
		
		/*if (nome[i] == 'a' || nome[i] == 'e' || nome[i] == 'i' || nome[i] == 'o' ||nome[i] == 'u')
		{
			nome[i] = '*';
			
		}*/
	}
	
	printf("%s",nome);
	
}