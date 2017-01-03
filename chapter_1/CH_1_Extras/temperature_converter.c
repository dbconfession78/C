// Libraries
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>


// Definitions
#define MAX_BYTES 32
// C = (F * 1.8) <or 9/5> + add 32

// Macros

// Function prototypes
double convert(char scaleType[], double temperature);

// Global variables


int main() {
	char strTemperature[MAX_BYTES];
	double temperature;
	char scaleType[MAX_BYTES];
	double result;
	
	printf("scale type to convert from (F/C): ");
	scanf("%s", scaleType);
	scaleType[0] = toupper(scaleType[0]);
	
	if(strcmp(scaleType, "C") == 0 || strcmp(scaleType, "F") == 0) {
		printf("Enter %s temperature: ", scaleType);
		scanf("%s", strTemperature);

		temperature = strtod(strTemperature, NULL);
		result = convert(scaleType, temperature);
		printf("%s = %.1lf\n", scaleType, result);		

	} else {
		printf("invalid scale type\n");
	}
			
	return 0;
}

double convert(char scaleType[], double temperature) {	
	double result;
	if(strcasecmp(scaleType, "C") == 0) {
		return (temperature * 1.8) + 32.0;
	} else if(strcasecmp(scaleType, "F") == 0) {
		return (temperature -32.0) / 1.8;
	} 
	return 0;
}






