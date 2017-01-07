#include <stdio.h>
#define MAXLINE 1024 /* maximum input line length */
#define MEASUREBAR 81 /* Measuring stick to check lines - 81 is measurebar so as to exclude the '\n' input from clicking 'enter'*/

int djc_getline(char line[], int limit);


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
      printf("Line longer than 80 characters---|>  %s\nbegin input here---|>  ", line); } 
    else {
      printf("Line is 80 characters or less\nbegin input here---|>  "); } }

    return 0; }

/* djc_getline: function that gets characters and stores them into the input array as a string,
   then stores that array and returns the length of the string as an integer */
int djc_getline(char s[], int limit) {
  int c, i;

  for (i = 0; i < limit - 1 && (c = getchar()) != EOF && c!= '\n'; ++i) {
    s[i] = c; }

  if (c == '\n') {
    s[i] = c;
    ++i; }

  s[i] = '\0';

  return i; }
