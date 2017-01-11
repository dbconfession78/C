#include <stdio.h>
#define MAXCHARS 1000

char lower(char c);

int main(void) {

  char char1;

  printf("\n\nInput uppercase letter to be converted to lowercase, first character will be converted if mulitple characters input\n");

  char1 = getchar();

  printf("lowercase: %c\n", lower(char1));
  
  return 0;
}

char lower(char c) {

  (c >= 'A' && c <= 'Z') ? c += ('a' - 'A') : c;
  return c;
}
