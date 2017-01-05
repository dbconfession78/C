/* This program keeps track of the number of input characters using ASCII values, then prints out the accumulated total.*/
#include <stdio.h>
#define ASCIITOTAL 128

int main() {

  printf("\n\n\n\n\n\n");
  printf("This program keeps track of the number of input characters using ASCII values, then prints out the accumulated total.\n");

  int c, idx1, idx2, idx3;
  int characters[ASCIITOTAL];

  for (idx1 = 0; idx1 < ASCIITOTAL; idx1 += 1) {
    characters[idx1] = 0; }

  while ((c = getchar()) != '\n') {
    characters[c] += 1; }

  for (idx2 = 0; idx2 < ASCIITOTAL; idx2 += 1) {
    printf("ASCIIVALUE: %d = ", idx2);
    putchar(idx2);
    printf(" ---------------------------------- |");
      for( idx3 = 0; idx3 < characters[idx2]; idx3 += 1) {
	putchar('*'); }
      putchar('\n'); }

  return 0;

}
