#include <stdio.h>
#include <string.h>

/*Exercise 1-8: Write a program to count blanks, tabs and newlines */
int main() {
	int blanks, tabs, newLines;
	int c;
	int done = 0;
	int lastChar = 0;
	
	blanks = 0;
	tabs = 0;
	newLines = 0;
	
	printf("Enter a string: ");
	while(done == 0) {
		c = getchar();
		
		if(c == ' ') {
			++blanks;
		}
		
		if(c == '\t') {
			++tabs;
		}
		
		if(c == '\n') {
			++newLines;
		}
		
		if(c == EOF) {
			if(lastChar != '\n') {
				++newLines; 
			}
			done = 1;
		}
		lastChar = c;
	}
	
	printf("Blanks: %d\nTabs: %d\nLines: %d\n", blanks, tabs, newLines);	
	return 0;	

}
