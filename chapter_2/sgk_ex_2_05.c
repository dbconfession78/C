#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BYTES 256

/* Exercise 2-5: Write the function any(s1, s2), which 
returns the first location in the string s1 where any 
characters from the strgin s2 occurs, or -1 if s1 contains 
no characters from s2. 

(The standard library function strpbrk 
does the same job but returns a pointer to the location) */

int any(char s1[], char s2[]);
int main(void) {
	char s1[MAX_BYTES];
	char s2[MAX_BYTES];
	
	printf("Enter string 1: ");
	fgets(s1, MAX_BYTES, stdin);
	printf("Enter string 2: ");
	fgets(s2, MAX_BYTES, stdin);
	
	int firstLoc = any(s1, s2);
	printf("%d\n", firstLoc);

	return 0;
}

int any(char s1[], char s2[]) {
	int result;
	
	for(int i=0; i<strlen(s2); i++) {
		for(int j=0; j<strlen(s2); j++) {
			if(s1[i] == s2[j]) {
				return i;
			}
		}
	}
	return -1;
}



