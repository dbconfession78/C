#include <stdio.h>
#include <string.h>



int main () {
	char string[64];
	int nwhite, nother;
	int ndigit[10];
	nwhite = nother = 0;
	
	for(int i=0; i<10; i++) {
		ndigit[i] = 0;
	}
	
	printf("Enter a string so I can count each type: ");
	fgets(string, 64, stdin);
	
	for(int i=0;i<strlen(string); i++) {
		if(string[i] >= '0' && string[i] <= '9') {
			ndigit[string[i]-'0']++;
		} else if(string[i] == ' ' || string[i] == '\n' || string[i] == '\t') {
			nwhite+=1;
		} else {
			nother+=1;
		}
	}
	
	printf("digits=");
	for(int i=0; i<10; i++) {
		printf("%d ", ndigit[i]);
	}
	printf("\n");
	printf("whitespace: %d\n", nwhite);
	printf("other: %d\n", nother);
	
	return 0;
}