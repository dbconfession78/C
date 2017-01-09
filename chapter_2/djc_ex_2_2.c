/*Exercise 2-2: Write a loop equivalent to the for loop above without using && or || */
#include <stdio.h>
#define MAXCHARS 1000

int main() {

  int lim = 1000;
  int i, c;
  char s[MAXCHARS];
  
  /* GIVEN EXAMPLE TO BE MODIFIED */
  printf("running given for loop to be modified without using && or || operators\n");
  printf("input code, which will be stored in string then printed\n");
  printf("begin input here------|>");
  for (i=0; i < lim - 1 && (c = getchar()) != '\n' && c != EOF; i++) {
    s[i] = c;
  }

  printf("Here is your input: %s\n\n", s);

  printf("running modified loop without using && or || operators\n"); 
  printf("input code, which will be stored in string then printed\n");
  printf("begin input here------|>");

  int j, b;
  char t[MAXCHARS];
  while ((b = getchar()) != EOF) {
    
    if (b == '\n') {
      break; }

    if (b == lim - 1) {
      break; }

    t[j] = b;
    j++;

  }

  printf("Here is your input: %s\n\n", t);

return 0;

}
