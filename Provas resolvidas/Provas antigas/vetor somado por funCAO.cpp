#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int vetor(float tamv[], int tam)
{
	float soma = 0;
	//vetor comeca em 0
	for(int i = 0; i < tam; i++)
	{
	
	soma = soma + tamv[i]; 
	}		
	
	return soma;
}
void dividendo(float v[],int tamanho)
{
	float sum;
	sum = vetor(v,tamanho);
	
	for (int i = 0;i < tamanho;i++)
	{
		v[i] = (v[i]/sum);
		
	}	
}
int main()
{
	int a;
		
	printf("Digite o tamanho do seu vetor: ");
	scanf("%d", & a);
	
	float v[a];
	
	for (int i = 0; i < a; i++ )
	{
		printf("Digite o valor: ");
		scanf("%f", & v[i]);	
	}
	
	int sum,div;
	
	sum = vetor(v,a);
		
	dividendo(v,a);
	
	for (int j = 0;j < a;j++)
	{
		printf("%.2f\n",v[j]);
		
	}	
	
	
}