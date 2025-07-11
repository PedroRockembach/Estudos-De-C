#include <stdio.h>
#include <stdlib.h>
#include <math.h>


//Faça um programa que receba a quantidade de valores e mostre a diferença entre os valores menores que 60kg e maiores que 70kg
//variação 1 - Vai comparar o menor e o maior valor e mostrar a diferença entre eles 


main ()
{

//definindo variaveis	
float metro,cm,dm = 0;
int escolha = 0;
int continua = 1;


//inicio do while que opera
	if (continua == 1)
		{
		system("cls");	
		while(1)
		
			{
			system("cls");	
			printf("Qual operacao voce deseja fazer?\n 1 - > Metro P/ CM E DM\n 2 - > CM P/ Metro E DM\n 3 - > DM P/ METRO E CM  \n --> ");
			scanf("%d",&escolha);
			
			//Metro p cm e dm
			if (escolha == 1 )
				{
					
				printf("Quantos METROS voce deseja converter para cm e dm?\n --> ");
				scanf("%f",&metro);
				
				cm=metro*100;
				dm=metro*10;				

				printf("\nO seu valor inicial de %.2f metros vale:\n\nCENTIMETRO -->%.2fcm\nDECIMETRO -->%.2fdm\n",metro,cm,dm);
				
				//Sleep(1.8);
				printf("\n=========================\n");
				printf("\nQuer continuar?[1-S|2-N]\n - > ");
				scanf("%d",&continua);	
				}
				
			//CM p metro e dm
			if (escolha == 2 )
				{
						
				printf("Quantos CENTIMETROS voce deseja converter para metro e dm?\n --> ");
				scanf("%f",&cm);
				
				metro = cm/100;
				dm = cm/10;
				
				printf("\nO seu valor inicial de %.2f cm vale:\n\nMETROS -->%.2fm\nDECIMETRO -->%.2fdm\n",cm,metro,dm);
				
				//Sleep(1.8);
				printf("\n=========================\n");
				printf("\nQuer continuar?[S=1|N=2]\n - > ");
				scanf("%d",&continua);					
					
				}
				
			//DM p cm e metro
			if (escolha == 3 )
				{
				
				printf("Quantos DECIMETROS voce deseja converter para metro e cm?\n --> ");
				scanf("%f",&dm);
				
				metro = dm/10;
				cm = dm*10;
				
				printf("\nO seu valor inicial de %.2f Dm vale:\n\nMETROS -->%.2fm\nCENTIMETROS -->%.2fdm\n",dm,metro,cm);
				
				//Sleep(1.8);
				printf("\n=========================\n");
				printf("\nQuer continuar?[S=1|N=2]\n - > ");
				scanf("%d",&continua);					
									
				}
			
			//se for diferente disso ele sái e retorna 
			if (escolha != 1 && escolha != 2 && escolha != 3 && escolha != 0 || continua == 2)

			
				{
				break;	
				//printf("\nOpcao invalida, tente novamente.\n");
					
				//printf("Se voce deseja realmente sair digite algo diferente de 1, se deseja continuar digite 1.\n --> ");
				//scanf("%d",&continua);	
				
				//erro ao recomeçar programa. Rever
				
				//tipo = typeof(continua)
				//printf("%d",tipo);
				
				//if (escolha == 1)	
				//	{
				//	continua=1;
				//	}
				//else
				//	{
				//	break;
				//	}
	
				}
			}
				
		printf("Ate mais tarde.");		
		}		
	
}		