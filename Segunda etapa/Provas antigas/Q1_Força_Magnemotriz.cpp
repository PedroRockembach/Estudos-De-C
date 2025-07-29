#include <stdio.h>
#include <stdlib.h>
float permeabilidade_absoluta =  0.000001256;
float pi = 3.14;

float area_transversal(float raio)
{
	float A = pi*(raio*raio);
	return A;
}

float calcula_comprimento_magnetico(float R)
{
	float l = 2*pi*R;
	return l;
}

float permeabilidade_magnetica(float permeabilidade_relativa)
{
	float permeabilidade = permeabilidade_relativa * permeabilidade_absoluta;
	return permeabilidade;
}
float relutancia(float largura,float perme,float area)
{
	float reluti = largura/(perme*area);
	return reluti;
}
float magnemotriz(float raio, float R,float permeabilidade,float fluxo_magnetico)
{
	float r,magnetico,perme,reluta,ffm;
	
r = area_transversal(raio);
magnetico = calcula_comprimento_magnetico(R);	
perme = permeabilidade_magnetica(permeabilidade);
reluta = magnetico / (perme*r);
ffm = fluxo_magnetico * reluta;

return ffm;
}

int main()
{
	// força magnemotriz (N.I)
	float raio,R,permeabilidade,fluxo;
	system("color A1");
	printf("Insira o raio(m):");
	scanf("%f",&raio);

	printf("Insira o raio magnetico(m):");
	scanf("%f",&R);
	
	printf("Insira a permeabilidade relativa:");
	scanf("%f",&permeabilidade);
	
	printf("Insira o fluxo magnetico(w):");
	scanf("%f",&fluxo);			
	
	float NI = magnemotriz(raio,R,permeabilidade,fluxo);
	
	system("cls");
	
	printf("%.2fA",NI);
	
}