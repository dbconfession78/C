#include <stdio.h>
#include <string.h>

/*Exercise 1-2: Experiment to find out what happens when printf's argument 
string contains \c, where c is some character not listed above. */

int main() {
	printf("hello, "); 
	printf("world");
	printf("\n");
	
	printf("hello, "); 
	printf("world");
	printf("\t");
	
	printf("\n");
	
	printf("hello, "); 
	printf("world");
	printf("\b");
	
	printf("\n");
	
	printf("hello, "); 
	printf("world");
	printf("\b");
	
	
	
	return 0;
}
