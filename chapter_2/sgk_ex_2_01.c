#include <stdio.h>
#include <string.h>


/*Exercise 2-1: Write a program to determine the ranges of char, short, int and long 
variables both signed and unsigned, by printing appropriate values from standard headers 
and by direct computation. Harder if you compute them: determine the ranges of the 
various floating-point types.*/

#define MAX_CHARS 1024

int main() {	
	printf("%d\n", -(char)((unsigned char) ~0 >> 1)-1);
		
	return 0;	

}
