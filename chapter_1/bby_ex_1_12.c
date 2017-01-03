#include <stdio.h>

#define IN 1;
#define OUT 0;

int main() {
  
  int c, state;

  state = OUT;

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\t' || c == '\n') {
      if (state == OUT) {
        state == IN;
        putchar('\n');
      }
    } else {
      state = OUT;
      putchar(c);
    }
  }
}
