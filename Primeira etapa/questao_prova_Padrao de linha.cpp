#include <stdio.h>
#include <stdlib.h>

int main()
{
	int padrao = 0;
while (1)
	{
		printf("insira um numero: ");
		scanf("%d",&padrao);
		if (padrao > 0)
		{
			for (int i = 1; i <= padrao; i++)
			{
				printf("%d: ",i); 
				if (padrao %2 != 0)
				{
					if (i % 2== 0)
					{		
						for (int j = 0;j <= padrao; j++)
						{
							if (j % 2 == 0)
							{
							printf("%d ",j);		
							}
						}
					}
					else
					{
						for (int x = 1; x <= padrao; x++)
						{
							if (x % 2 != 0)
							{
							printf("%d ",x);		
							}	
						}
					}
				}
				else
				{
					if (i % 2== 0)
					{		
						for (int j = 2;j <= padrao; j++)
						{
							if (j % 2 == 0)
							{
							printf("%d ",j);		
							}
						
						}
					}
					else
					{
						for (int x = 1; x <= padrao; x++)
						{
							if (x % 2 != 0)
							{
							printf("%d ",x);		
							}	
						}
					}
					
				}	
			printf("\n");
			}	
		}
		else
		{
			printf("obrigado por participar!");		
			break;
		}
		
	}				
}