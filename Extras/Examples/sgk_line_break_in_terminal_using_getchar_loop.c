#include <stdio.h>
#include <string.h>

#define MAX_BYTES 256
#define MAX_LINES 10

int main () {
	char string[MAX_BYTES];	
	printf("Enter string: ");
	
	int ch;
	int idx = 0;
	while( ( (ch = getchar()) != EOF ) && idx < MAX_BYTES)
	{
	    string[idx++] = ch;
	}
	printf("\n");
	printf("---------------------------\n");
	printf("You entered:\n%s\n", string);
	
	return 0;
}