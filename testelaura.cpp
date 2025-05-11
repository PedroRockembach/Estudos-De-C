#include <stdio.h>
#include <stdlib.h>


int main()
	{
	int altura, espaco,largura;
	
	printf("Qual a altura da sua piramide?");
scanf("%d",&altura);

for(int linha = 1; linha<= altura;  linha++){
	for(int espaco = 1; espaco <= altura - linha; espaco++){
		printf(" ");
	}
for(int num = 1; num <= 2 * linha - 1; num++){
printf("%d",linha);
}

printf("\n");
}



return 0;
}
