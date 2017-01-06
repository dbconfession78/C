#include <stdio.h>
#define MAXLINE 1024 /* maximum input line length */

int djc_getline(char line[], int limit);
void reverse_string(char string[], int length);

/* print the longest input line */
int main() {
  printf("\n\n\n\n");
  printf("in this program:\n");
  printf("user inputs lines of characters and words followed by clicking enter.\n");
  printf("input lines are then immediately printed in reverse order\n");
  printf("to end, user should input EOF (control 'd').\n");
  printf("begin input here---|>  ");

  int len, idx; /* current line length */
  char line[MAXLINE]; /* current input line */
  while ((len = djc_getline(line, MAXLINE)) > 0) {

    idx = (len - 1);
    while (line[idx] == '\n') {
      line[idx] = 0;
      idx -= 1;
      len -= 1; }
    if (len == 0) {
      printf("There was no character input detected\nbegin input here---|>  "); }
    else {
      reverse_string(line, len);  } }

    return 0; }

/* djc_getline: read a line into s, return length */
int djc_getline(char s[], int limit) {
  int c, i;

  for (i = 0; i < limit - 1 && (c = getchar()) != EOF && c!= '\n'; ++i) {
    s[i] = c; }

  if (c == '\n') {
    s[i] = c;
    ++i; }

  s[i] = '\0';

  return i; }

/* reverse string: 'string' transforms to 'reversed_string' and is returned; assume to is big enough */

void reverse_string(char string[], int length) {
  char new_string[MAXLINE];
  int idx2, idx3;

  idx2 = 0;
  idx3 = (length - 1);

  while (idx2 < length) {
    new_string[idx2] = string[idx3];
    idx2 += 1;
    idx3 -= 1; } 
  new_string[idx2] = 0;
  printf("reversed string---|>  %s\nbegin input here---|>  ", new_string);
}
