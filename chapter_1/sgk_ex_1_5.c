#include <stdio.h>
#include <string.h>

/*Exercise 1-5: Modify the temperture conversion program to print the table in reverse order, that is from 300 to 0 */

int main() {
	float fahr, celsius;
	int lower, upper, step;
	
	lower = 0;		/* lower limit of temperature table */
	upper = 300;	/* upper limit */
	step = 20;		/* step size */
	
	fahr = upper;
	
	printf("\n");
	printf("Temperature Conversion Table\n");
	printf("============================\n");
	printf("\n");
	printf("%11s%10s\n", "Cels.", "Fahr.");
	printf("%12s%10s\n", "-------", "-------");
	while (fahr >= lower) {
		celsius = (5.0/9.0) * (fahr - 32);
		printf("%11.1f %9.1f\n", celsius, fahr);
		fahr = fahr - step;	
	}

	return 0;
}
