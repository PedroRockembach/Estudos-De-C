#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>


int somafuncao(int qtd,float v[]);
void divisaof(int qtd,float v[]);

int main(){
int i, qtd, soma;
float div, v[50];

printf("quantidade de elementos no vetor:\n");
scanf("%d",&qtd);

for(i=0;i<qtd;i++){
	printf("elemento [%d] do vetor: ",i);
	scanf("%f",&v[i]);
	}
	
	divisaof(qtd,v);
	
	for(i=0;i<qtd;i++){
		
		printf("%f \n",v[i]);
	}
	
	
return 0;
}

int somafuncao(int qtd,float v[]){
	int i,soma=0;
	
	  for(i=0;i<qtd;i++){
	  	soma=soma+v[i];
	  }
	  
	  
	  return soma;
}

void divisaof(int qtd,float v[]){
	int i;
	float div, soma;
	
soma = somafuncao(qtd,v);
	
	for(i=0;i<qtd;i++){
		
		v[i]=v[i]/soma;
	
	}

	
	
}









