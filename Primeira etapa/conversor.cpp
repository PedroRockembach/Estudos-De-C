#include <stdio.h>
#include <stdlib.h>

//Fazer um programa que solicita um número decimal e imprime o
//correspondente em hexa e octal.

main()
{
int decimal;	
		
printf("digite um numero decimal:");
scanf("%d",&decimal);
	
printf("\nHexadecimal: %X\n",decimal);	
printf("Octal: %o\n",decimal);	
	
	
	
//	%d → leitura de inteiro decimal.
//
//	%X → imprime o número em hexadecimal (com letras maiúsculas).
//
//	%x → hexadecimal com letras minúsculas, se preferir.
//
//	%o → imprime o número em octal.

}