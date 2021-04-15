#include <stdio.h>

//deklaration
int computeFactorial(int n);

int main()
{
	int n = 1;
	int factorial = 0;
	factorial = computeFactorial(n);
	
	printf("%d\n", n);


	return 0;
}

int computeFactorial(int n);
{
	if(n>=1)
	{
		return n*computeFactorial(n-1);
	}
	else
	{
		return 1;
	}
}
