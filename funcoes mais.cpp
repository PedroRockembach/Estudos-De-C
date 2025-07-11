#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int triangulo(int altura,char caractere)
{
	for (int i = 0; i < altura;i++)
	{
		for(int j = 0; j <= i;j++)
		{
			printf(" %c ",caractere);		
		}
		printf("\n");
	}

}

int main()
{
	
	triangulo(5,'@');
	
	
}
