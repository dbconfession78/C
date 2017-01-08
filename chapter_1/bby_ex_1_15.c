#include <stdio.h>

int main() {
  
  int start, stop, step;
  
  start = 0;
  stop = 300;
  step = 20;

  while(start <= stop) {
    c2f(start);
    start = start + step;

  }

}

int c2f(int cel) {
  cel = cel * (9.0/5.0) + 32;
  printf("%d\n", cel);

}
