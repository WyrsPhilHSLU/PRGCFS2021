#include <stdio.h>

int main()
{
	int sum = 0;
	int i = 1;
	int maxSum = 5049;
	
	for(i = 1; ; i++)
	{
		
		if( sum >= maxSum)
		{
			break;
		}
		sum = sum + i;
	}

	printf("The sum from 1 to %d is equal to %d\n", (i-1), sum);
	
	return 0;
}	
	
	
/*	//zeigt 1 - 100 in Zehnerfolge mit Abschnitten
{
	int start = 0;
	int end = 90;
	int ten = 10;
	int one = 1;
	
		
	for( int i = start; i <= end; ( i = i + ten))
	{	
		for( int k = 1; k <= 10; ( k = k + one))
		{
			printf("%d ", k+i);
		}
	
		printf("\n");
	}
	
	return 0;
}
*/

/*	//zeigt jeden wert bis 729, wenn man immer mal 3 rechnet, beginnend mit 1
{
	int start = 1;
	int end = 729;
	int multi = 3;
	
	for( int i = start; i <= end; ( i = i * multi))
	{
		printf("%d\n", i);
	}
	
	return 0;
}
*/

/*
	//zeigt jeden wert von 40 bis 25 einzeln
{
	int show = 40;
	int start = 40;
	int end = 25;
	int inkrement = 1;
	
	for( int i = start; i >= end; ( i = i - inkrement))
	{
		printf("%d\n", i);
	}
	
	return 0;	
}


	//summiert von 2 bis 10 alle Zahlen
{
	int sum = 0;
	int start = 2;
	int end = 10;
	int inkrement = 2;
	
	for( int i = start; i <= end; (i = i + inkrement))
	{
		sum = sum + i;
	}

	printf("The sum from %d to %d is equal to %d\n", start, end, sum);

	return 0;
}
*/
