
/*Fazer um programa em "C" que pergunte um valor em graus Fahrenheit e
imprime no vídeo o correspondente em graus Celsius usando as fórmulas que
seguem.

 a) Usar uma variável double para ler o valor em Fahrenheit e a fórmula
 
 C=(f-32.0) * (5.0/9.0).
 
 b) Usar uma variável int para ler o valor em Fahrenheit e a fórmula
 
 C=(f-32)*(5/9).*/
#include <stdio.h>
#include <stdlib.h>

main()
{
double fahrenheit;
double celsius;

printf("digite um valor em fahrenheit: ");
scanf("%lf",&fahrenheit);

celsius = (fahrenheit-32.0) * (5.0/9.0);
	
printf("%lf",celsius);
}

 