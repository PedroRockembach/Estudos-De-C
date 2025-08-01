#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char frase[500];
	char frase_nova[500];
	char letra;
	int contador = 0;
	printf("digite uma frase: ");
	scanf("%[^\n]",frase);
	
	printf("Sua frase original: %s \n",frase);
	
	printf("Insira a letra que voce deseja retirar da frase: ");
	scanf(" %c",&letra);
	
	for (int i = 0; i < strlen(frase); i++)
	{
		if (frase[i] == letra)
		{
			contador += 1;
		}
	}
	
	printf("A Letra '%c'' aparece %d vezes na frase.\n",letra,contador);
	
	printf("A frase modificada ficou: ");
	
	int j = 0;
	
	for (int i = 0; i < strlen(frase); i++)
	{
		if (frase[i] != letra)
		{
			frase_nova[j] = frase[i];
			j++;
		}
		
	}
		
	printf("%s",frase_nova);
	
	
}