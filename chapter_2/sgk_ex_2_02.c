#include <stdio.h>
#include <string.h>


/*Exercise 2-2: Write a loop equivalent to the for loop aboce without using && or ||.*/

#define MAX_CHARS 1024

int main() {
	int c=getchar();
	for(int i=0; i<9 && ((c = getchar()) != '\n') && (c = getchar()) != EOF; i++) {
		
	}
	
	for(int i=0; i<9; i++) {
		if((c = getchar()) != '\n') {
			if((c = getchar()) != EOF) {
				// do something
			}
		}
		if((c = getchar()) != EOF) {
			if((c = getchar()) != '\n') {
				// do something
			}
		}
	}
	
	return 0;	

}
