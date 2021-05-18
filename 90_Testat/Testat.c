#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct DataFrame {
	long long timeStamp;
 	int pressure;
 	char systemState;
 	char alarmState;
};

long long wert_timeStamp;
int wert_pressure;
char wert_systemState;
char wert_alarmState;

char str[5];

//str[4] = 0;
int a, b, c, d;

int main()
{
	FILE *pBin= fopen("pressureSpike.bin", "rb");
	FILE *pCsv= fopen("pressureSpike.csv", "w");
	// check if file opening worked
	if( pBin != NULL )
	{
		// prepare a buffer of correct length
		const int BYTES_IN_LINE = 14;
		unsigned char lineBuffer[BYTES_IN_LINE]; 
		fprintf(pCsv,"Time Stamp, Pressure [Pa], System State, Alarm State\n");
		// read dataframe by dataframe 
		while(fread(lineBuffer,BYTES_IN_LINE, 1, pBin) )
		{
			wert_timeStamp = ((struct DataFrame *)lineBuffer)->timeStamp;
			
			time_t rawtime = wert_timeStamp/1000 ;
			
			struct tm ts;
			char buf[80];
			
			ts=*localtime(&rawtime);
			
			strftime(buf,sizeof(buf),"%A %d-%m-%Y %X %Z %z",&ts);
			
			wert_pressure = ((struct DataFrame *)lineBuffer)->pressure;
			
			wert_systemState = ((struct DataFrame *)lineBuffer)->systemState;
			
			wert_alarmState = ((struct DataFrame *)lineBuffer)->alarmState;
			
			fprintf(pCsv,"%s,%d,%d,%d\n",buf,wert_pressure,wert_systemState,wert_alarmState);
			
		}

	}
	fclose(pBin);
	fclose(pCsv);
	return 0;
}
	
