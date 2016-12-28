#include <stdio.h>
#include <string.h>

#define MAX_CHARS 1000
#define MAX_LINES 10
#define TAB_SIZE 8


int main() {
	char string[MAX_CHARS];
	char result[MAX_CHARS];
	int c, i, x, nc, b;
	
	c = i = x = nc = b = 0;

	printf("Enter a string: ");
	while((c = getchar()) != EOF) {
		string[i] = c;
		i++;
	}
	
	i = 0;
	while(i < strlen(string)) {
		if(string[i] != ' ') {
			result[x] = string[i];
			x++; nc++; i++;
		} else {
			for(int j=0; j<MAX_CHARS; j++) {
				if(string[i] == ' ') {
					b++;
					if((b+nc == TAB_SIZE)) {
						result[x] = '\t';
						x++; b = 0; nc = 0;
					}
				} else {
					break;
				}
				i++;
			}
			for(int j=0; j<b; j++) {
				result[x] = ' ';
				x++;
			}
			b = 0;
		}
	}
	
	printf("(%lu)\n", strlen(string));
	printf("%s\n", string);
	printf("\n");
	printf("(%lu)\n", strlen(result));
	printf("%s\n", result);

	return 0;
}


