#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BYTES 256

/* */

int htoi(char s[MAX_BYTES]);
int main(void) {
	// char string[MAX_BYTES] = "FFABC";
	char string[MAX_BYTES];
	
	printf("Enter hexadecimal: ");
	fgets(string, MAX_BYTES, stdin);
	
	if(string[strlen(string)-1] == '\n') {
		string[strlen(string)-1] = '\0';
	}

	int dec = htoi(string);
	printf("hexadecimal: %s\n", string);
	printf("decimal: %d\n", dec);
	
	return 0;
}

int htoi(char s[MAX_BYTES]) {
	int array[strlen(s)];
	int result;
	int powerArray[strlen(s)];

	for(int i=0; i<strlen(s); i++) {
		if(s[i] > 'F') {
			printf("Invalid Hex!\n");
			return 0;
		}

		if(s[i] >= 'A' && s[i] <= 'F') {
			switch(s[i]) {
				case 'A':
				array[i] = 10;
				break;
				
				case 'B':
				array[i] = 11;
				break;
				
				case 'C':
				array[i] = 12;
				break;
				
				case 'D':
				array[i] = 13;
				break;
				
				case 'E':
				array[i] = 14;
				break;
				
				case 'F':
				array[i] = 15;
				break;
				
				default:
				printf("Invalid Hex!\n");
				break;
			} 
		} else {
			char substring[1];
			strncpy(substring, s + i, 1);
			array[i] = atoi(substring);

		}
	}
	
	int x = 0;
	for(int i=strlen(s)-1; i>0; i--) {
		int power = 1;
		for(int j=0; j<i; j++) {
			power = power * 16;
		}
		powerArray[x] = power;
		x++;
	}
	
	for(int i=0; i<strlen(s)-1; i++) {
		result = result + (array[i] * powerArray[i]);
	}
	result = result + array[strlen(s)-1];
	return result;
}

// F3A0C
// 983040+12288+2560+0+12 = 997900
// 997900 / 16 = 62368	r 12 =	C
// 62368 / 16 = 3898	r 0 =	0
// 3898 / 16 = 243		r 10 = 	A
// 243 / 16 = 15		r 3 = 	3
// 15 / 16 = 0			r 15 =	F
