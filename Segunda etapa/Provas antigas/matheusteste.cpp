#include <stdio.h>
#include <stdlib.h>




int main()
{

int altura = 0;
//int largura = 0;

printf("Digite a altura do seu quadrado: ");
scanf("%d", & altura);

for (int a = 1; a <= altura; a++)
	{

	printf("* ");

	}
	
	for(int j = 3; j <=altura ; j++)
	{
		printf(" \n* ");
		for(int k = 1; k <=altura; k++)
		{
			
		printf(" ");

			
		}
	
	printf(" *");
	
	}

printf("\n");	

for (int a = 1; a <= altura; a++)
	{

	printf("* ");

	}

}
