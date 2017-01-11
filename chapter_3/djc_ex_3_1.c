#include <stdio.h>
#include <time.h>

int binsearchA(int x, int v[], int n);
int binsearchB(int x, int v[], int n);

int main(void) {

  int n = 0;
  int array[1000];
  int indexA, indexB;

  while (n < 900) {
    array[n] = n*5;
    n++;
  }

  int x = array[890];

  clock_t begin = clock();
  indexA = binsearchA(x, array, n);
  clock_t end = clock();

  double time_spentA = (double)(end - begin) / CLOCKS_PER_SEC;
  printf("time spent on multi-conditional loop finding %d: %f\n", x, time_spentA);
  printf("value %d is at index: %d\n", x, indexA);


  clock_t begin2 = clock();
  printf("I am in second clock timer\n");
  indexB = binsearchB(x, array, n);
  clock_t end2 = clock();

  double time_spentB = (double)(end2 - begin2) / CLOCKS_PER_SEC;
  printf("time spent on one conditional loop finding %d: %f\n", x, time_spentB);
  printf("value of %d is at index: %d\n", x, indexB);

  return 0;
}

int binsearchA(int x, int v[], int n) {

  int low, high, mid;

  low = 0;
  high = n;

  while (low <= high) {
    mid = (low+high) / 2;
    if (x < v[mid]) {
      high = mid - 1;
    }
    else if (x > v[mid]) {
      low = mid + 1;
    }
    else {
      return mid;
    }
  }
  return -1;
}



int binsearchB(int x, int v[], int n) {

  int idx = 0;

  while (idx < n) {

    if (v[idx] == x) {
	return idx;
      }
    idx++;
  }
  return -1;
}
