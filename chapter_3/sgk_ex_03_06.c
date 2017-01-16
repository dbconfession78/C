#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <ctype.h>

#define MAX_BYTES 256

/* Exercise 3-6: Write a version of itoa that accepts three arguments instead of two. The third argument is a minimum field width; the converted number must be padded with blanks on the left if necessary to make it wide enough. */

char *reverseStr(char string[]);
char *itoa(int i);
int main(void) {
	char *string = itoa(98234);
	printf("%s\n", string);
	
	return 0;
}

char *itoa(int n) {
	char *result = malloc(MAX_BYTES);
	char *final = malloc(MAX_BYTES);
	int i = 0;
	do {
		result[i++] = (n % 10) + '0';
	} while((n /= 10) > 0);
	final  = reverseStr(result);
	return final;
}

char *reverseStr(char string[]) {
	char *result = malloc(strlen(string));

	for(int i=0; i<strlen(string); i++) {
		result[i] = string[strlen(string)-1-i];
	}

	return result;
}

