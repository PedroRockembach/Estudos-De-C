#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float calcula_tensao(float ohm,float ampere)
{
	float v = ohm * ampere;
	printf("Sua tensao eh: %.2fV\n",v);
	return v;
}
float calcula_potencia(float ohm,float ampere)
{
	float v = calcula_tensao(ohm,ampere);
	float p = v * ampere;
}

int main()
{
	float resistor;
	float corrente;
	float potencia;
	
	printf("insira o resistor(ohm): ");
	scanf("%f",&resistor);
	
	printf("insira a corrente(A): ");
	scanf("%f",&corrente);

	potencia = calcula_potencia(resistor,corrente);
	printf("Sua potencia eh: %.2fW",potencia);
	







}