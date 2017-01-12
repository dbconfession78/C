#include <stdio.h>
#define MAX 1000

void escape(char to[], char from[]);

int main() {

  char string[MAX];
  char copy[MAX];

  printf("\n\n\n\n-------------------\nplease input words\n");
  printf("program prints tabs and newlines to their visible escape sequence such as '\\t' and '\\n'\n");
  fgets(string, MAX, stdin);

  escape(copy, string);

  printf("new string with replaced characters\n");
  printf("%s\n", copy);

  return 0;
}

void escape(char to[], char from[]) {

  int index1 = 0, index2 = 0;
  char charA;

  while (from[index1] != '0') {
    
    charA = from[index1];

    switch (charA) {
    case '\t':
      to[index2] = '\\';
      index2++;
      to[index2] = 't';
      break;
    case '\n':
      to[index2] = '\\';
      index2++;
      to[index2] = 'n';
      break;
    default:
      to[index2] = charA;
      break;
    }

    index1++;
    index2++;
  }
  to[index1] = '0';

}
