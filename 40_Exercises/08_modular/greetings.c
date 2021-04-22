#include <stdio.h>


#include "greetings.h"




/* globale variable */
int greetingsCounter = 0;

int localCounter = 24;


/*implementations*/
void SayHello(void)
{
	printf("Hello!\n");
	greetingsCounter++;
}


void SayGoodBye(void)
{
	printf("Goodbye!!\n");
	greetingsCounter++;
}

