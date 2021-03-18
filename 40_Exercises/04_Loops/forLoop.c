#include <stdio.h>


/*
#define TASK_NUM 6

int main(int argc, char *argv[])
{
	//all used for task 4
	int sum = 0;
	int start = 1;
	int end = 10;
	
	switch(TASK_NUM)
	{
		
	for( int i = start; i <= end; (i = i + inkrement))
	{
		sum = sum + i;
	}

	printf("The sum from %d to %d is equal to %d\n", start, end, sum);

	return 0;
	}
}
*/

int main()
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
