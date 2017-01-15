#include <stdio.h>
#include <string.h>

#define IN 1
#define OUT 0

/* write a program that outputs its input one word per line */

int main () {
	char string[64];
	int nw, state, j;
	nw = 0;
	j = 0;
	state = OUT;
	
	char word[65];
	
	printf("Enter a string: ");
	fgets(string, 64, stdin);
	
	for(int i=0; i<strlen(string); i++) {
		if(state == OUT) {
			if(string[i] != ' ') {
				state = IN;
				word[j] = string[i];
				j+=1;
			}
		} else {
			if(string[i] == ' ') {
				state = OUT;
				j = 0;
				printf("%s\n", word);
				memset(word, 0, 64); // use to clear a char array
			} else {
				word[j] = string[i];
				j+=1;
			}
		}
	}
	printf("%s\n", word);
	
	return 0;
}