#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float indutancia_equiv(float ind_um,float ind_dois)
{
	float l_equiv;
	l_equiv = (ind_um*ind_dois/(ind_um+ind_dois));
	return l_equiv;
}
float energia_total(float amperes,float l_equiv)
{
	float energia;
	
	energia = (0.5)*(l_equiv * (amperes*amperes));
	return energia;
}
int main()
{	
	int corrente;
	int eT;
	float indutor_um = 0;
	float indutor_dois = 0;

	printf("qual valor de L1: ");
	scanf("%f",&indutor_um);

	printf("qual valor de L2: ");
	scanf("%f",&indutor_dois);
	
	float indutor_equivalente = indutancia_equiv(indutor_um,indutor_dois);
	
	printf("a indutancia equivalente é %.2fH",indutor_equivalente);
	
	printf("digite a corrente: ");
	scanf("%f",&corrente);
	
	eT = energia_total(corrente, indutor_equivalente);
	
	printf("Energia total: %.2fJ",eT);
}