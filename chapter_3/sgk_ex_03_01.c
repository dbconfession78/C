#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/*Exercise 3-1: Our binary search makes two tests inside the loop, when one would suffice (at the price of more tests outside). Write a version with only one test inside the loop and measure the difference in run-time. */

int binsearch1(int x, int v[], int n);
int binsearch2(int x, int v[], int n);
int main() {
	int v[] = {1,2,3,4,5};
	binsearch1(10, v, 3);
	printf("\n");
	binsearch2(10, v, 3);
	for(int i=0; i< 1000; i++) {

	}


	return 0;
}

int binsearch1(int x, int v[], int n) {
	long unsigned start;
	long unsigned end;
	long unsigned dur;
	int low, high, mid;
	
	start = clock();
	low = 0;
	high = n - 1;
	
	printf("start1: %lu\n", start);
	while(low <= high) {
		mid = (low+high) / 2;
		if(x < v[mid]) {
			low = mid - 1;
		} else if (x > v[mid]) { 
			low = mid + 1;
		} else {	/* found match */
			return mid;
		}
	}
	end = clock();
	dur = end - start;
	printf("end1: %lu\n", end);
	printf("run-time1: %lu\n", dur);
	return -1; /* no match */
}

int binsearch2(int x, int v[], int n) {
	long unsigned start;
	long unsigned end;
	long unsigned dur;
	int low, high, mid;
	
	start = clock();
	low = 0;
	high = n - 1;
	
	printf("start2: %lu\n", start);
	while(low <= high) {
		mid = (low+high) / 2;
		if(x < v[mid]) {
			low = mid - 1;
		} else {
			break;
		}
	}
	end = clock();
	dur = end - start;
	printf("end2: %lu\n", end);
	printf("run-time2: %lu\n", dur);
	return -1; /* no match */
}

