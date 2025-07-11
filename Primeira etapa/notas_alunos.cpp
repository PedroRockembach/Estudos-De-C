#include <stdlib.h>
#include <stdio.h>

int main()
{
	while(1)
	{
		float nota; 
		float falta;
		int conceito;
		
		printf("Digite a nota do aluno: ");
		scanf("%f",&nota);
		if (nota<0)
		{
			break;
		}
		
		printf("Digite o numero de faltas: ");
		scanf("%f",&falta);
		
// condição menos que 20 faltas
			
		if (falta<20)
		{
			if (nota >= 9.0 && nota <= 10.0)
			{
				
			printf("CONCEITO = A\n");	
			conceito == 1;
			system("pause");	
			}
			
			if (nota >= 7.5 && nota <= 8.9)
			{
				
			printf("CONCEITO = B\n");	
			conceito == 1;
			system("pause");	
			}
			
			if (nota >= 5.0 && nota <= 7.4)
			{
				
			printf("CONCEITO = C\n");
			conceito == 1;	
			system("pause");	
			}
			
			if (nota >= 4.0 && nota <= 4.9)
			{
				
			printf("REPROVADO = D\n");
			conceito == 0;
			system("pause");	
			}
			
			if (nota >= 0.0 && nota <= 3.9)
			{
				
			printf("REPROVADO = E\n");
			conceito == 0;
			system("pause");	
			}
			
// condição mais que  20 faltas		
	
		else if(falta>20)
		{
			if (nota >= 9.0 && nota <= 10.0)
			{
				
			printf("CONCEITO = B\n");	
			conceito == 1;
			system("pause");	
			}
			
			if (nota >= 7.5 && nota <= 8.9)
			{
				
			printf("CONCEITO = C\n");	
			conceito == 1;
			system("pause");	
			}
			
			if (nota >= 5.0 && nota <= 7.4)
			{
				
			printf("REPROVADO = D\n");
			conceito == 1;	
			system("pause");	
			}
			
			if (nota >= 4.0 && nota <= 4.9)
			{
				
			printf("REPROVADO = E\n");
			conceito == 0;
			system("pause");	
			}
			
			if (nota >= 0.0 && nota <= 3.9)
			{
				
			printf("REPROVADO = E\n");
			conceito == 0;
			system("pause");
			}		
		}	
		system("cls");									
		}
		
	}
	
	
		
}