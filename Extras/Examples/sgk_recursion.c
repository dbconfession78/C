/* Created by Stuart Kuredjian on January 15, 2017 4:25 PM EST */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include "./Extras/functions.h" // path depends on where you save this file

#define MAX_COLS 125

int recursive(int n);
int main(void) {
	recursive(2);
	
	return 0;
}

int recursive(int n) {
	if(n == 100) {
		printf("%d\n", n);
		return 0;
	}
	n = n + 1;
	recursive(n);
	
	return 0;
}



