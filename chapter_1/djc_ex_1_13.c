#include <stdio.h>

int main() {

  printf("This program outputs a histogram of * with a row for each word input.\nPlease give an input and press enter to see histogram or control 'd' to quit.\n");

  int c;

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\n' || c == '\t') {
      putchar('\n'); }
    else {
      putchar('*'); } }

  return 0;

}
