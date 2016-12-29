#include <stdio.h>
#include <string.h>

#define MAX_CHARS 10000
#define MAX_COLS 80
#define MAX_ROWS 100

/* Exercise 1-22
Write a program to "fold" long input lines into two or more
shorter lines after the last non-blank character that occurs before the n-th
column of input. 

Make sure your program does something intelligent with very long lines, 
and if there are no blanks or tabs before the specified column.
*/


int main() {
	// char string[MAX_CHARS] = "This is a string that is very very very long and is being regulated by this program.  Isn't that nice?";
	char string[MAX_CHARS];
	char word[MAX_CHARS];
	char lines[MAX_ROWS][MAX_CHARS];
	int i, c, x, row, column;
	i = c = row = column = x = 0;
	
	printf("Enter a string: ");
	while((c = getchar()) != EOF) {
		string[i] = c;
		i++;
	}
	
	// reset all lines so length is 0; default length is 1.
	for(int i=0; i<MAX_ROWS; i++) {
		memset(lines[i], 0, MAX_COLS);
	}
	
	for(int i=0; i<=strlen(string); i++) {
		if(string[i] == ' ' || i== strlen(string)) {
			if(strlen(word) + column <= MAX_COLS) {
				for(int k=0; k<strlen(word); k++) {
					lines[row][column] = word[k];
					column++;
					if(k == strlen(word)-1) {
						lines[row][column] = ' ';
						column++;
					}
				}
				memset(word, 0, MAX_CHARS);
				x=0;
			} else {
				row++;
				column = 0;
			}
			
		} else {
			word[x] = string[i];
			x++;
		}
	}
	
	row = 0;
	while(strlen(lines[row])!=0) {
		printf("line %d: %s\n", row, lines[row]);
		row++;
	}

	return 0;
}


