#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "../Extras/functions.h"

#define MAX_CHARS 256

/*Exercise 3-2:  Write a function escape (s,t) that converts characters like newline and tab into visible escape sequences like \n and \t as it copies the string t to s.  Use a switch. Wrtie a function for the other direction as well, converting escape sequences into the real characters */


char *escape1(char string[]); // converts chars to visible esc. sequences
char *escape2(char string[]); // converts escape sequences to chars

int main() {
	char *string1 = "this is a string\nwith 2 lines and a\ttab";
	char *string2 = "this is a string\\nwith 2 lines and a\\ttab";	
 	char *result1;
 	char *result2;
	
	result1 = escape1(string1);
	result2 = escape2(string2);
	printf("%s\n", result1);
	printf("%s\n", result2);
	
	return 0;
}

char *escape1(char string[]) {
	char *result = malloc(MAX_CHARS);
	int x;
	
	x = 0;
	for(int i=0; i<strlen(string); i++) {
		switch(string[i]) {
			case '\n':
			result[x] = '\\';
			x++;
			result[x] = 'n';
			break;
			
			case '\t':
			result[x] = '\\';
			x++;
			result[x] = 't';
			break;
			
			default:
			result[x] = string[i];
			x++;
		}

	}
	return result;

}

char *escape2(char string[]) {
	char *result;
	int x;
	
	result = malloc(MAX_CHARS);
	x = 0;
	for(int i=0; i<strlen(string); i++) {
		if(string[i] == '\\') {
			switch(string[i+1]) {
				case 't':
				result[x] = '\t';
				i++;
				break;
					
				case 'n':
				result[x] = '\n';
				i++;
				break;
				
				default:
				result[x] = string[i];
			}
		} else {
			result[x] = string[i];
		}
		x++;
	}
	
	return result;
}