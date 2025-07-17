#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void delay(int number_of_seconds)
{
	// Converting time into milli_seconds
	int milli_seconds = 1000 * number_of_seconds;

	// Storing start time
	clock_t start_time = clock();

	// looping till required time is not achieved
	while (clock() < start_time + milli_seconds)
		;
}

int main () 
{
	char letra;
	int frase [4];
	
	//int lau [15];
	
/*	frase[0] = 82;
	frase[1] = 79;
	frase[2] = 67;
	frase[3] = 75;
	
	lau[0] = 69;
	lau[1] = 117;
	lau[2] = 32;
	lau[3] = 116;
	lau[4] = 101;
	lau[5] = 32;
	lau[6] = 97;
	lau[7] = 109;
	lau[8] = 111;
	lau[9] = 32;
	lau[11] = 76;
	lau[12] = 97;
	lau[13] = 117;
	lau[14] = 114;
	lau[15] = 97;*/
	
	//qualquer letra maiuscula do alfabeto +32 mostra seu equivalente em minusculo e vice versa	
	//97 a 122 é alfabeto em minusculo
	//65 A 90 É ALFABETO MAIUSCULO
	// 0 = 48 9 = 57	
	
	/*
	printa alfabeto
	for (int i = 97;i<=122;i++)
	{
		printf("%c ",i);
	}
	
	printf("\n");
	
	printa lista
	for (int a = 0;a<=15;a++)
	{
		printf(" %c",frase[a]);
		delay(1);
	}*/
	
	printf("digite uma letra: ");
	scanf(" %c",&letra);
	
	if (letra  >= 97 && letra <= 122)
	{
		printf("MAIUSCULA - %c\nMINUSCULA - %c",letra-32,letra);
	}
	if (letra  >= 65 && letra <= 90)
	{
		printf("MAIUSCULA - %c\nMINUSCULA - %c",letra,letra+32);
	}	
	if (letra  >= 48 && letra <= 57)
	{
		printf("ANTECESSOR - %c\n",letra-1);
		printf("SUCESSOR - %c",letra+1);	
	}
	if (letra >= 33 && letra <= 64)
	{
		int num = letra;
		
		for (int i = 1;i <= num;i++)
		{
			printf("%c",letra);
		}	
	}
	printf("\nEquivalente em ascci - > %d\n",letra);

}