#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float carga_eletrica(float neg_cargas)
{
	float e = 1.6;
	float q = neg_cargas*e;
	return q; 
}

float expressao(void)
{
	float E0 = 8.854;
	
	float k = 1/(4*3.14*E0);
	
	return k;
}

float f_eletrico(float corpo_1,float corpo_2,float divisor)
{
	float k = expressao();
	
	float q1 = carga_eletrica(corpo_1);
	float q2 = carga_eletrica(corpo_2);
	
	float d = divisor*divisor;
	
	float F = (k*q1*q2)/d;
	
	return F;
}

int main()
{
	float k;	
	float q;
	float d;
	
	printf("quantidade de cargas negativas do corpo 1: ");
	scanf("%f",&k);	
	
	printf("quantidade de cargas negativas do corpo 2: ");
	scanf("%f",&q);	
	
	printf("distancia: ");
	scanf("%f",&d);		
	
float forca = f_eletrico(k,q,d);	
printf("A forca eletrica que atua entre esses dois corpos eh %f",forca);

/*	float saida = expressao();
	printf("%f",saida);
*/


}
