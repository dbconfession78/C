/* count lines in input and print input */
#include <stdio.h>

int main() {

  int c, nls = 0, tabs = 0, blanks = 0;

  printf("This Program counts blanks, newlines, and tabs from input characters.  Type 'ctrl d' to quit.\n");

  c = getchar();
  while ( (c = getchar()) != EOF ) {
    if (c == 10) {
      nls += 1; }
    if (c == 9) {
      tabs += 1; }
    if (c == 32) {
      blanks += 1; }
    putchar(c);

    if (c == '\n') {
      printf("\nblanks: %d, tabs: %d, newlines: %d\n", blanks, tabs, nls); }
  }

}
