#include <stdio.h>
#include <string.h>

#define MAX_BYTES 256
#define MAX_LINES 10

int main () {
	// char string[MAX_BYTES] = "This is a string\nwith a few lines\nhere is line 3\nand line 4\0";
	char string[MAX_BYTES];
	char lineStrings[MAX_LINES][MAX_BYTES];
	int lineNum, charNum;
	int longestLineNumber;
	
	lineNum = charNum = longestLineNumber = 0;
	
	printf("Enter string: ");
	fgets(string, MAX_BYTES, stdin);
	
	/* put each line into it;s own element in a 2d achar array */
	for(int i=0; i<=strlen(string); i++) {
		char substring[MAX_BYTES];
		strncpy(substring, string + i, 1);
		
		if(substring[0] == '\n') {
			getchar();
			lineStrings[lineNum][charNum] = '\0';
			charNum = 0;
			lineNum+=1;
		
		} else {
			lineStrings[lineNum][charNum] = substring[0];
			charNum+=1;
		}
	}
	printf("\n");
	
	/* find longest line */
	for(int i =0; i<=sizeof(lineStrings)/MAX_LINES;i++) {
		if(strlen(lineStrings[i]) == 0) {
			break;
		}
		
		printf("line %d len: %lu\n", i+1, strlen(lineStrings[i]));	
		if(strlen(lineStrings[i]) < strlen(lineStrings[i+1])) {
			longestLineNumber = i+1;
		}

	}
	printf("\n");
	printf("longest line number: %d\n", longestLineNumber);
	printf("line %d: %s\n", longestLineNumber, lineStrings[longestLineNumber]);
	printf("\n");	
		
	return 0;
}

// char string[MAX_BYTES] = "This is a string\nwith a few lines\nhere is line 3\nand line 4";
// char currentLine[MAX_BYTES];
// char lineStrings[MAX_LINES][MAX_BYTES];
// int lineNum = 0;
// for(int i=0; i<strlen(string); i++) {
// 	char substring[MAX_BYTES];
// 	if(string[i] != '\n') {
// 		strncpy(substring, string + i, 1);
// 		lineStrings[lineNum][i] = substring[0];
// 		printf("%s", lineStrings[lineNum]);
// 		getchar();
// 	} else {
// 		// lineNum+=1;
// 		// getchar();
// 	}
// }
// printf("%s\n", lineStrings[0]);