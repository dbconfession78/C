#include <stdio.h>
#define MAXLINE 1024 /* maximum input line length */

int djc_getline(char line[], int limit);
void push_string(char to[], int row_idx);

/* print the longest input line */
int main() {
  printf("\n\n\n\n");
  printf("in this program:\n");
  printf("user inputs lines of characters and words followed by clicking enter\n");
  printf("blank lines and spaces and tabs trailing input lines will be deleted from input");
  printf("then, new line will be printed - to end, user should input EOF (control 'd').\n");
  printf("begin input here---|>  ");

  int len, idx; /* current line length */
  char line[MAXLINE]; /* current input line */

  while ((len = djc_getline(line, MAXLINE)) > 0) {
    
    idx = (len - 1);
    while (line[idx] == ' ' || line[idx] == '\t' || line[idx] == '\n') {
      line[idx] = 0;
      idx -= 1;
      len -= 1; }
    if (len == 0) {
      printf("There was no character input detected, all input was deleted\nbegin input here---|>  "); }
    else {
      printf("New Length= %d, Modified to remove blank lines, and trailing spaces and tabs---|>  %s\nbegin input here---|>  ", len, line); } }

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
