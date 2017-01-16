#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <ctype.h>

#define MAX_BYTES 256

/* Exercise 3-5: Write a function itob(n,s,b) that converts the interger n into a base b character representation in the string s. In particular, itob(n,s,16) formats nas a hexadecimal integer in s.*/

char *itob(int dec, int base);
int main(void) {
	char *result = itob(1000, 2);
	printf("%s\n", result);
	
	return 0;
}

char *itob(int dec, int base) {
	char *result = malloc(MAX_BYTES);
	char *final = malloc(MAX_BYTES);
	int x = 0;
	
	for(int i=0; dec > 0; i++) {
		int mod = dec % base;
		dec = dec/base;
		x++;
		switch(mod) {
			case 10: result[i] = 'A'; break;
			case 11: result[i] = 'B'; break;
			case 12: result[i] = 'C'; break;
			case 13: result[i] = 'D'; break;
			case 14: result[i] = 'E'; break;
			case 15: result[i] = 'F'; break;
			default: result[i] = mod + '0'; break;
		}
	}
	for(int i=0; i<=x; i++) {
		final[x-i-1] = result[i];
	}
	
	return final;
}

