#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BYTES 256

char *reverseStr(char string[]);
int power(int n, int e);
char *itob(int dec);
char *itoh(int dec);
char *itoa(int i);
int btoi(char *bin);
int htoi(char s[MAX_BYTES]);

// flips order of characters in a string
char *reverseStr(char string[]) {
	char *result = malloc(strlen(string));
	
	for(int i=0; i<strlen(string); i++) {
		result[i] = string[strlen(string)-1-i];
	}
	
	return result;
}

// converts binary to integer
int btoi(char *bin) {
	int result;
	int len;
	int x;
	
	result = 0;
	len = strlen(bin);
	x = len - 1;
	for(int i=0; i<len; i++) {
		if(x == 0) {
			result = result + (bin[i] - '0');
			break;
		}
		result = result + (power(2,x) * (bin[i] - '0'));
		x--;
	}
	
	return result;
}

int power(int n, int e) {
	int result;
	
	result = n;
	for(int i=0; i<e-1; i++) {
		result = result * n;
	}
	return result;
}

char *itob(int dec) {
	char *result = malloc(MAX_BYTES);
	char *final = malloc(MAX_BYTES);
	int x = 0;
	
	for(int i=0; dec > 0; i++) {
		result[i] = (dec % 2) + '0';
		dec = dec/2;
		x++;
	}
	for(int i=0; i<=x; i++) {
		final[x-i-1] = result[i];
	}
	
	return final;
}

// converts hexadecimal to integer
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
				case 'A': array[i] = 10; break;
				case 'B': array[i] = 11; break;
				case 'C': array[i] = 12; break;
				case 'D': array[i] = 13; break;
				case 'E': array[i] = 14; break;
				case 'F': array[i] = 15; break;
				default: printf("Invalid Hex!\n"); break;
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

// converts integer to hexadecimal
char *itoh(int dec) {
	char *array = malloc(MAX_BYTES);
	char *final = malloc(MAX_BYTES);
	int result;
	int r;
	
	if(!array) {
		return NULL;
	}
	
	result = dec;

	for(int i = 0; i<sizeof(array); i++) {
		if(result > 0) {
			r = result % 16;
			result = result / 16;
			if(r > 9) {
				switch(r) {
					case 10:
					array[i] = 'A';
					break;
					
					case 11:
					array[i] = 'B';
					break;
					
					case 12:
					array[i] = 'C';
					break;
					
					case 13:
					array[i] = 'D';
					break;
					
					case 14:
					array[i] = 'E';
					break;
					
					case 15:
					array[i] = 'F';
					break;
					
					default: break;
				}
			} else {
				array[i] = r + '0';
			}
		} else {
			break;
		}
	}
	int len = strlen(array);
	for(int i=0; i<len; i++) {
		final[(len-i)-1] = array[i];
	}
	final[strlen(final)] = '\0';
	return final;
}

// converts integer to a chracter array
char *itoa(int n) {
	char *result = malloc(MAX_BYTES);
	char *final = malloc(MAX_BYTES);
	int i = 0;
	do {
		result[i++] = (n % 10) + '0';
	} while((n /= 10) > 0);
	printf("%s\n", result);
	
	final  = reverseStr(result);
	printf("%s\n", final);
	
	return final;
}