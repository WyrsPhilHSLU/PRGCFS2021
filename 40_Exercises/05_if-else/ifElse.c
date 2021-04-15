#include <stdio.h>

int main()
{		//zwischen 1 & 200 Vielfache von 11, wenn gleichzeitigmit 7. oder nur V von 11
	int start = 1;
	int end = 200;
	
	for( int i = start; i <= end; i++)
	{
		if(i%7)
		{
			if(i%11)
			{
			
			}
			else
			{
				printf("11 but not 7: %d\n", i);	
			}
		}
		else
		{
			if(i%11)
			{
			
			}
			else
			{
				printf("11 and 7: %d\n", i);
			}
		}
	}
	printf("FUCK YEAH !!\n");
	
		
	return 0;
}

// Vielfache von 7 & 11 oder 17 zwischen 0 - 200
/*{
	int start = 1;
	int end = 200;
	
	for( int i = start; i <= end; i++)
	{
		if(i%17)
		{
			if((i%7) || (i%11))
			{
			
			}
			else
			{
			printf("7 and 11: %d\n", i); 
			}
		}
		else
		{
			printf("17: %d\n", i);
		}
	}
	return 0;
}*/


// 1 bis 500 alle Zahlen ,die durch 19 teilbar sind, auflisten
/*{
	int sum = 0;
	int a = 1;
	int inkrement = 1;
	int end = 500;
	
	for( int i = a; i <= end; i++)
	{
		if(i%19)
		{
		
		}
		else
		{
			printf("%d\n", i);
		}
		sum = sum + a;
	}

	return 0;
}*/
