 /*o programa deve perguntaruma quantidade indeterminada numeros, se 
 o numero da entrada for maior que 5, deve mostrar ele dobrado e 
 se for menor que 5 deve mostrar ele triplicado, o programa deve parar se a entrada for maior que 100 ou um negativo  */
 
 #include <stdio.h>
 #include <stdlib.h>
 
 main()
 {
	int entrada = 0;
	
	while(entrada != -1)
	{
		printf("digite um numero: ");
		scanf("%d",&entrada);
			
		if (entrada <= 0 || entrada >100)
		{
			break;
		}
			
		
		if (entrada > 5)
		{
			printf("%d x 2 = %d\n",entrada,entrada*2);	
		}	
		
		if (entrada==5)
		{
		printf("te amo\n");
		}
		
		if (entrada < 5)
		{
			printf("%d x 3 = %d\n",entrada,entrada*3);	
		}
	} 		
 	
 	
 }
