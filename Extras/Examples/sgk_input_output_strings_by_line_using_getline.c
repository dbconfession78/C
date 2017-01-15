#include <stdio.h>
// #include <stdlib.h>
#include <string.h>

#define MAX_CHARS 256
#define MAX_LINES 10

int main() {
	size_t len = 0;
	ssize_t read;
	char *line = NULL;
	char lines[MAX_LINES][MAX_CHARS];
	int nl = 0;
	
	
	while((read = getline(&line, &len, stdin)) != EOF) {
		for(int i=0; i<strlen(line); i++) {
			char substring[MAX_CHARS];
			strncpy(substring, line + i, 1);
			lines[nl][i] = substring[0];
		}
		lines[nl][strlen(line)] = '\0';
		nl++;
	}
	
	for(int i=0; i<nl;i++) {
		printf("line %d: %s", i, lines[i]);
	}
	
	return 0;
}