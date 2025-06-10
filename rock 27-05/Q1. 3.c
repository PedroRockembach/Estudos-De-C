#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int mesas, brancos, a, b, nulos, sbrancos = 0, snulos = 0, sA = 0, sB = 0;
	float perA, perB, perIn, total;
	
	printf("Entre com o numero de mesas: \n");
	scanf("%d", &mesas);
	
	for(; mesas > 0; mesas--){
	printf("Entre com o numero de votos em branco: \n");
	scanf("%d", &brancos);
	
	printf("Entre com o numero de votos nulos: \n");
	scanf("%d", &nulos);
	
	printf("Entre com o numero de votos no candidato A: \n");
	scanf("%d", &a);
	
	printf("Entre com o numero de votos no candidato B: \n");
	scanf("%d", &b);
	
	sbrancos = brancos + sbrancos;
	snulos = nulos + snulos;
	sA = a + sA;
	sB = b + sB;
	}
	
	total = sbrancos + snulos + sA + sB;
	perIn = (snulos + sbrancos) / total * 100;
	perA = sA * 100.0 / (sA + sB);
	perB = sB * 100.0 / (sA + sB);
	
	printf("Votos candidato A: %.2f\n",perA);
	printf("Votos candidato B: %.2f\n",perB);
	printf("Votos invalido %.2f\n",perIn);
	
	if(sA > sB)
	printf("Candidato A venceu!");
	
	if(sA < sB)
	printf("Candidato B venceu!");
	
	if(sA == sB)
	printf("Empate");
	}
               