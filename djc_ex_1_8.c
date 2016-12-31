#include <stdio.h>
/* count lines in input and print input */

int main() {

  int c, nls = 0, tabs = 0, blanks = 0;
  printf("This Program counts blanks, newlines, and tabs from input characters.  Type 'ctrl d' to quit.\n");
  while ((c = getchar()) != EOF) {
    if (c == 10) {
      nls += 1; }
    if (c == 9) {
      tabs += 1; }
    if (c == 32) {
      blanks += 1; }

    printf("input: %d, blanks: %d, tabs: %d, newlines: %d\n", c, blanks, tabs, nls); }

}
