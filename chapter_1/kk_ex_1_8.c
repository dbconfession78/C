#include <stdio.h>
/* count blanks, tabs, newlines in input */

int main() {

  int c, nl, nt, ns; 
  nl = 0;
  nt = 0;
  ns = 0;

  while ((c = getchar()) != EOF) {
    if (c == '\n')
  ++nl;
  if (c == '\t')
  ++nt;
  if (c == ' ')
  ++ns;
}
   printf("Lines: %d\n Tabs: %d\n Spaces: %d\n", nl, nt, ns);
   
}
