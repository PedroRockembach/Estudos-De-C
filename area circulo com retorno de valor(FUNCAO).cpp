#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>

float areaCirculo(int r);

int main(){
	
	int r;
	float areac;
	
	printf("digite o valor do raio do circulo:\n");
	scanf("%d",&r);
	
	
	areac=areaCirculo(r);
	
	printf("a area deste circulo e %f",areac);
	
}
 
 float areaCirculo(int R){
 	float area;
 	
 	
 	area=3.14*(R*R);
 	
 	return area;
 }