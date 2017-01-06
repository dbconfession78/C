#include <stdio.h>
#define MAXLINE 1024 /* maximum input line length */
#define MEASUREBAR 80 /* Measuring stick to check lines */

int djc_getline(char line[], int limit);
void push_string(char to[], int row_idx);

/* print the longest input line */
int main() {
  printf("\n\n\n\n");
  printf("in this program:\n");
  printf("user inputs lines of characters and words followed by clicking enter.\n");
  printf("input lines longer than 80 characters in length will be immediately printed\n");
  printf("to end, user should input EOF (control 'd').\n");
  printf("begin input here---|>  ");

  int len; /* current line length */
  char line[MAXLINE]; /* current input line */

  while ((len = djc_getline(line, MAXLINE)) > 0) {
    if (len > MEASUREBAR) {
      printf("Line longer than 80 characters---|>  %s", line); } }

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
