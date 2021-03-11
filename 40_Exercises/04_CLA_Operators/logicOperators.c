#include <stdio.h>

int main(int argc, char *argv[] )
{	
	// falls NICHT 3 argumente erhalten, dann --> Block 7 bis 10
	if( argc != 3 ){
		//input not valid
		printf("Usage:\n");
		printf("logicOperators Input1 Input2\n");
	}
	//genau 3 argumente erhalten
	else
	{	//input is valid	
		printf("Number of input arguments: %d\n", argc ); //anzahl args. printen
	
		// die drei elemente in der for-loop deklaration
		//----------------------------------------------
		// nimm eine int-variable i und starte mit 0.
		// führe folgenden Code aus, solange i < argc
		// inkrementiere i bei jedem Durchlauf um 1 (++).
		
	
		for( int i = 0; i < argc; i++ )
		{
			printf("Argument %d was %s\n", i, argv[i]);
		
			// argv:	- ./logicOperators
			//		- 23
			//		- 99
		}
		
	}
	return 0;

}



/*
	double e = 2.718281828;
	
	printf("%0.15f", e);
	
*/
