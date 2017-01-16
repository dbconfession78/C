#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include "../Extras/functions.h"

#define MAX_BYTES 256

/* Exercise 4-1:  Write the function strrindex(s,t), which returns the position of the rightmost occurence of t in s, or -1 if there is none. */

int strrindex(char s[], char t);
int main(void) {
	char input1[MAX_BYTES];
	char input2;
	printf("Enter a string: ");
	fgets(input1, MAX_BYTES, stdin);
	printf("Enter a character: ");
	input2 = getchar();
	int idx = strrindex(input1, input2);
	printf("right-most idx: %d\n", idx);
	return 0;
}

int strrindex(char s[], char t) {
	for(int i=strlen(s); i>0; i--) {
		if(s[i] == t) {
			return i;
		}
	}
	return -1;
}


