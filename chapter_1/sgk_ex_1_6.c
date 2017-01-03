#include <stdio.h>
#include <string.h>

/*Exercise 1-6: Verify that the expression getchar() != EOF is 0 or 1. */

int main() {
	printf("EOF is true: %d\n", getchar() == EOF);
	printf("EOF is false: %d\n", getchar() != EOF);

	return 0;
}
