#include <stdio.h>
/* replacing multi blanks with single */

int main() {
  int c, ns;
  ns = 0; 
  while ((c = getchar()) != EOF) {
    if (c == ' ') {
      if (ns == 0) {
	ns = 1;
      putchar(c);
       
    }
 
  }
 
  if(c != ' '){
    ns = 0;
    putchar(c);
  }
}
  return 0;
}
