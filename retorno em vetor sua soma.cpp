#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
int somafuncao(int g,int j[]);

int main(){
int i,j[50],v[50], qtd, soma,d, g;

printf("quantidade de elementos no vetor:\n");
scanf("%d",&qtd);

for(i=0;i<qtd;i++){
	printf("elemento [%d] do vetor: ",i);
	scanf("%d",&v[i]);

	soma = somafuncao(qtd,v);
	}
	
	printf("a soma total e igual a %d: ",soma);
	
	
return 0;
}

int somafuncao(int g,int j[]){
	int i,soma=0;
	
	  for(i=0;i<g;i++){
	  	soma=soma+j[i];
	  }
	  return soma;
}