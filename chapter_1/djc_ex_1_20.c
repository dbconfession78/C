#include <stdio.h>
#define MAXLINE 1024 /* maximum input line length */
#define TABCHARS 8 /* This is the standard Tab length (# or characters) on my computer */

int djc_getline(char line[], int limit);
void detab(char old[], char new[]); /* This function should detab an oldline to new one */

/* print the longest input line */
int main() {
  printf("\n\n\n\n");
  printf("in this program:\n");
  printf("user inputs lines of characters and words followed by clicking enter.\n");
  printf("from input lines, tabs are replaced by '*' (asterisks), then immediately printed\n");
  printf("to end, user should input EOF (control 'd').\n");
  printf("begin input here---|>   ");

  int len; /* current line length */
  char line[MAXLINE]; /* current input line */
  char new_line[MAXLINE]; /* array/ string used to store detabed line */

  while ((len = djc_getline(line, MAXLINE)) > 0) {
    detab(line, new_line);

    printf("New Line with tabs replaced by '*'---|>  %sbegin input here---|>   ", new_line); }

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

/* sub tabs for '*' asterisks */
void detab(char old[], char new[]) {

  int idx1 = 0, idx2 = 0, space_count = TABCHARS;

  while (old[idx1] != '\0') {

    if (old[idx1] == '\t') {

      while (space_count > 0) {
	new[idx2] = '*';
	space_count -= 1;
	idx2 += 1; } }

    else {
      new[idx2] = old[idx1];
      idx2 += 1;
      space_count -= 1; }

    if (space_count == 0) {
      space_count = TABCHARS; }

    idx1 += 1;
}
  
  new[idx2] = '\0'; }
