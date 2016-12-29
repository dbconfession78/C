#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Exercise 1-23: Write a program to remove all comments from a C program.  Don't
forget to handle quoted string character constants properly. C comments do not 
nest */

//TODO: program should identify .c extension

#define MAX_CHARS 10000

int main() {	
	char string[MAX_CHARS];
	char result[MAX_CHARS];
	char fileName[MAX_CHARS];
	int x;
	
	x = 0;
	printf("Enter file name to open: ");
	fgets(fileName, MAX_CHARS, stdin);
	
	for(int i=0; i<strlen(fileName); i++) {
		if(fileName[i] == '\n' || fileName[i] == ' ') {
			fileName[i] = '\0';
		}
	}

	FILE *f = fopen(fileName, "r+");
	int c;
	if(f == NULL) {
		printf("Error opening file!\n");
		exit(1);
	}

	c = 0;
	
	int i=0;
	while((c = fgetc(f)) != EOF) {
		string[i] = c;
		i++;
	}
	fclose(f);
	
	// copy only non-commented text into a character array
	for(int i=0; i<strlen(string); i++) {
		char substring[2];
		strncpy(substring, string+i, 2);
		if(strncmp(substring, "//", 2) == 0) {
			char j = 0;
			while(string[i+j] != '\n') {
				j++;
			}
			i = i+j;

		} else if(strncmp(substring, "/*", 2) == 0) {
			char j = 0;			
			while(1 == 1) {
				printf("%c%c\n", string[i+j], string[i+(j+1)]);
				if((string[i+j] == '*') && (string[i+(j+1)] == '/')) {
					break;
				}
				j++;
			}
			i = i+j+1;
		} else  {
			result[x] = string[i];
			x++;
		}		
	}
	
	// overwrite the contents of original file with contents of comment-parsed character array
	f = fopen(fileName, "w");
	fwrite(result, 1, strlen(result)-2, f);
	printf("\nFINAL:\n%s\n", result);
	fclose(f);
	
	// display new contents of file
	f = fopen(fileName, "r+");
	i=0;
	memset(string, 0, MAX_CHARS);
	while((c = fgetc(f)) != EOF) {
		string[i] = c;
		i++;
	}
	fclose(f);
	printf("%s\n", string);
	
	return 0;
}


