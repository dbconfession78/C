#include <stdio.h>

/* printing new word in new line */

int main()
{
  int c;

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\t')

  printf ("\n");
 
  putchar(c);
  }   
}
