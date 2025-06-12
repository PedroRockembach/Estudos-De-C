#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main ()
{
	
	char frases[150];
	
	printf("digite uma frase: ");
	scanf("%[^\n]",frases);
	
	//printf("%s\n",frases);
	
	int tamanho = 0;
	int palavra = 0;
	int maiuscula = 0;
	int minuscula = 0;
	int especial = 0;
	int j = 0;
	char palavras[150];
	
	tamanho = strlen(frases);
	printf("tamanho da frase - %lu\n",tamanho);
	
	for (int t = 1; t <= tamanho;t++)
	{
		if (frases[t-1] == 32)
		{
		palavra += 1;			
		}
		
		if (frases[t-1] <= 90 && frases[t-1] >= 65)
		{
		maiuscula += 1;			
		}
		
		if (frases [t-1] >= 97 && frases[t-1] <= 122)
		{
		minuscula += 1;			
		}
		
		if ( (frases[t-1] == ',')||(frases[t-1] == '.')||(frases[t-1] == '!')||(frases[t-1] == '?')||(frases[t-1] == ':')||(frases[t-1] == ';'))
		{
		especial += 1;			
		}							
	}
	

	for (int t = 0; t <= tamanho;t++)
	{
			if (frases[t] != ' ' && frases[t] != '\0')
			{
			palavras[j++] = frases[t];			
			}	
			else{			
					palavras[j] = '\0';	
					if (j > 0)
					{
					printf("Palavra: %s\n", palavras);
					j = 0;	
					}			
				}
	}	
	
printf("palavras - %d\n",palavra+1);
printf("maiuscula - %d\n",maiuscula);
printf("minuscula - %d\n",minuscula);
printf("especial - %d\n",especial);


}