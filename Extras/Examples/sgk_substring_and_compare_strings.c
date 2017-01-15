#include <stdio.h>
#include <string.h>

/* takes a string and replaces double spaces with one space */

int main() {
	char string[256];
	char newString[256];
	char x = 0;
	
	printf("Enter a string: ");
	fgets(string, 256, stdin);
	
	for(int i=0; i<strlen(string); i++) {
		char substring[50];
		strncpy(substring, string + i, 2);  // parse= 2 char substring
		if(strncmp(substring, "  ", 2) == 0) { // compare substring w. target
			newString[x] = ' ';
			i+=1;
		} else {
			newString[x] = string[i];
		}
		x+=1;
	}
	
	printf("%s\n", newString);
	
	
	return 0;
}
