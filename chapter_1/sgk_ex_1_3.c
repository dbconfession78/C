#include <stdio.h>
#include <string.h>

/*Exercise 1-3: Modify the temperature conversion program to print a heading above the table  */

/* print Farenheit-Celsius table
	for fahr = 0, 20, ..., 300; floating-point version */
int main() {
	float fahr, celsius;
	int lower, upper, step;
	
	lower = 0;		/* lower limit of temperature table */
	upper = 300;	/* upper limit */
	step = 20;		/* step size */
	
	fahr = lower;
	
	printf("\n");
	printf("Temperature Conversion Table\n");
	printf("============================\n");
	printf("\n");
	printf("%11s%10s\n", "Fahr.", "Cels.");
	printf("%12s%10s\n", "-------", "-------");
	while (fahr <= upper) {
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%11.1f %9.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
	printf("\n");
	
	return 0;
}
