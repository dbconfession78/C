#include <stdio.h>
/* replacing tabs with \t, backspaces with \b, backlashes with \\  */

int main() {
  int c;
  
  while ((c = getchar()) != EOF) {
   
    if (c == '\t'){
      putchar(' ');
      putchar('\\');
      putchar('t');
    }

    if (c == '\b'){
      putchar('\\');
      putchar('b');
    }

  if (c == '\\'){
    putchar(' ');
    putchar('\\');
    putchar('\\');
  }
  
    putchar(c);

  }
  return 0;
}
