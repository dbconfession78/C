#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../Extras/functions.h"

#define MAX_CHAR 256 

/* Exercise 2-6:  Write a function setbits(x,p,n,y) that returns 
x with the n bits that begin at position p set to the rightmost
n bits of y, leaving the other bits unchanged. */

/*
0 = 0
1 = 1
2 = 10
3 = 11
4 = 100
5 = 101
6 = 110
7 = 111
8 = 1000
9 = 1001
10 = 1010
11 = 1011
12 = 1100

*/


unsigned getbits(unsigned x, int p, int n);
unsigned setbits(unsigned x, int p, int n, int y);
int main(void) {
	char bin[MAX_CHAR] = "1111";
	int dec = btoi(bin);
	printf("\n");
	int x = 12;
	int y = 10;
	int p = 4; 
	int n = 3;
	
	printf("%d\n", btoi("11110000"));
	
	/* TESTS */

	// result = (x >> (p+1-n)) & ~(~0 << n);
	

	return 0;
}

// unsigned setbits(unsigned x, int p, int n, int y) {
// 	return ();
// }

unsigned getbits(unsigned x, int p, int n) {
	return (x >> (p+1-n)) & ~(~0 << n);
}






