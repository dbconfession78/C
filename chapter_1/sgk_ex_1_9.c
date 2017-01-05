#include <stdio.h>
#include <string.h>


/*Exercise 1-9:  Write a program to copy its input to it's output, 
replacing each string of one or more blanks by a single blank. */

#define MAX_CHARS 1024

int main() {
	char string[MAX_CHARS];
	char result[MAX_CHARS];
	int x;
	
	printf("Enter a string: ");
	fgets(string, MAX_CHARS, stdin);

	x = 0;
	for(int i=0; i<strlen(string); i++) {
		while(string[i] == ' ') {
			i++;
			if(string[i] != ' ') {
				result[x] = ' ';
				x++;
				continue;
			}
		}
		
		result[x] = string[i];
		x++;
	}
	
	printf("%s\n", result);
	
	
	return 0;	

}
