#include <stdio.h>
#define MAXLINE 1024 /* maximum input line length */
#define TABCHARS 8 /* This is the standard Tab length (# or characters) on my computer */

int djc_getline(char line[], int limit);
void entab(char old[], char new[]); /* This function should add tabs in place of as many equivalent space characters in a row */

int main() {
  printf("\n\n\n\n");
  printf("in this program:\n");
  printf("user inputs lines of spaces followed by clicking enter.  then the line is printed with all of the spaces\n");
  printf("converted to the minimum number of tabs and spaces that would be the same length as the original input\n");
  printf("to end, user should input EOF (control 'd').\n");
  printf("begin input here------|>");

  int len; /* current line length */
  char line[MAXLINE]; /* current input line */
  char new_line[MAXLINE]; /* array/ string used to store detabed line */

  while ((len = djc_getline(line, MAXLINE)) > 0) {
    entab(line, new_line);

    printf("New Line with equivalent spaces replaced by tabs------|>%sbegin input here------|>", new_line); }

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

/* sub tabs for '*' asterisks */
void entab(char old[], char new[]) {

  int idx1 = 0, idx2 = 0, space_count = 0;

  while (old[idx1] != '\n') {

    while (old[idx1] == ' ') {
      
      space_count += 1;

      if (space_count == TABCHARS) {
	new[idx2] = '\t';
	space_count = 0;
	idx2 += 1; }

      idx1 += 1; }

    if (old[idx1] != ' ' && old[idx1] != '\n') {
      printf("This program only accepts ' ' (spaces) as inputs\n");
      break; }
  }
    if (space_count > 0) {
      idx1 = (idx1 - space_count);
      
      while (space_count >= 0) {
	
	if (old[idx1] != ' ' && old[idx1] != '\n') {
	  printf("This program only accepts ' ' (spaces) as inputs\n");
	  new[idx2] = '\n';
	  idx2 += 1;
	  break; }	

	new[idx2] = old[idx1];
	idx2 += 1;
	idx1 += 1;
	space_count -= 1; } }
    else {
      new[idx2] = '\n';
      idx2 += 1; }

  new[idx2] = '\0'; }
