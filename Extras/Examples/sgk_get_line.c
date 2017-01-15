#include <stdio.h>
#include <stdlib.h>
#include <string.h>



// getline(address of pointer to pointer, size_t, stdin)
int main() {
	size_t len = 20000; //try higher than 0
	char *line = NULL; //try without NULL
	ssize_t read;
	char lines[10][256];
	int nc =  0;
	int lineNum = 0;
	
	
	while((read = getline(&line, &len, stdin)) != EOF) {
		for(int i=0; i<strlen(line); i++) {
			char substring[256];
			strncpy(substring, line + i, 1);
			lines[lineNum][nc] = substring[0];
			nc++;
		}
		nc = 0;
		lineNum++;
	}
	lines[0][strlen(lines[0])] = '\0';
	lines[1][strlen(lines[1])] = '\0';
	printf("line 0: %s\n", lines[0]);
	printf("line 1: %s\n", lines[1]);
	
	
	

  return 0;
}