#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
int decimal(int qtd, int b[]);

int main(){
	int i, qtd, b[50], x;
	
	printf("a quantidade de bits sera: ");
	scanf("%d",&qtd);
	
	for(i=0; i<qtd; i++){
	    printf("bit[%d]:",i);
	    scanf("%d",&b[i]);
	
	}
	x = decimal(qtd,b);
	
	printf("A conversao decimal e:%d\n",x);
}

int decimal(int qtd, int b[]){
	int i, dec=0;
	
	for(i=0; i<qtd; i++){
	
	dec+=b[i]*pow(2,i);
	
	}
	return dec;

	
	
	
	
	
}