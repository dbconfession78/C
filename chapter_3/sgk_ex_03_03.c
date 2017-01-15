#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include "../Extras/functions.h"

#define MAX_BYTES 256
#define ALPHA "abcdefghijklmnopqrstuvwxyz"

/* Excercise 3-3: Write a function expand(s1, s2) that expands shorthand notatations like a-z in the string s1 into the equivalent complete list abc...xyz in s2. Allow for letters of either case and digits, and be prepared to handle cases like a-b-c and a-z0-9 and -a-z. Arrange that a leading or trailing - is taken literally. */

char *expand(char string[]);
int main(void) {
	char *s1 = "\nheres some expanded shorthand:\na-z\nA-Z\n0-9\n\nand heres some more:\nA-B-C\na-b-c\n";
	char *s2;
	
	s2 = expand(s1);
	
	return 0;
}

char *expand(char string[]) {
	char *result = malloc(MAX_BYTES);
	memset(result, 0, MAX_BYTES);
	
	int x = 0;
	for(int i = 0; i<strlen(string); i++) {
		char substring[5];
		strncpy(substring, string + i, 5);
		if(strncmp(substring, "a-z", 3) == 0) {
			for(int j=0; j<26; j++) {
				result[x] = ALPHA[j];
				x++;
			}
			i = i+2;
		} else if(strncmp(substring, "A-Z", 3) == 0) {
			for(int j=0; j<26; j++) {
				result[x] = toupper(ALPHA[j]);
				x++;
			}
			i = i+2;
		} else if(strncmp(substring, "0-9", 3) == 0) {
			for(int j=0; j<10; j++) {
				result[x] = j + '0';
				x++;
			}
			i = i+2;
		} else if(strncmp(substring, "a-b-c", 5) == 0) {
			for(int j=0; j<26; j++) {
				result[x] = ALPHA[j];
				x++;
			}
			i = i+4;
		} else if(strncmp(substring, "A-B-C", 5) == 0) {
			for(int j=0; j<26; j++) {
				result[x] = toupper(ALPHA[j]);
				x++;
			}
			i = i+4;
		} else {
			result[x] = string[i];
			x++;
		}	
	}
	result[strlen(result)] = '\0';
	printf("%s\n", result);
	
	
	return result;
}

