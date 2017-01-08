// Libraries
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

/* Excercise 2-4: Write an alternative version of squeeze(s1, s2) that deletes each character in s1 that 
matches any character in the string s2. */

void squeeze(char s1[], char s2[]);
int main() {
	char s1[256];
	char s2[256];
	
	printf("Enter string 1: ");
	fgets(s1, 256, stdin);
	printf("Enter string 2: ");
	fgets(s2, 256, stdin);
	
	squeeze(s1, s2);

		
	return 0;
}

void squeeze(char s1[], char s2[]) {
	char result[256];
	int x = 0;
	int shouldDelete;
	
	memset(result, 0, 256);
	
	for(int i=0; i<strlen(s1); i++) {
		shouldDelete = 0;
		for(int j = 0; j<strlen(s2); j++) {
			if(s1[i] == s2[j]) {
				shouldDelete = 1;
				break;
			}
		}
		if(shouldDelete == 0) {
			result[x] = s1[i];
			x++;
		}
	}
	for(int i=0; i>strlen(result); i++) {
		if(result[i] == 0) {
			result[i] = '\0';
		}
	}
	printf("result: %s\n", result);
}








