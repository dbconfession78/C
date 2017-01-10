 #include <stdio.h>
#define MAXLINE 1000
#define MINLENGTH 80 /* minimum line size */

int getlin(char line[], int maxline);


/* print longest input line */

int main()
{
  int len; /* current line length */
  char line[MAXLINE];
 
  while ((len = getlin(line, MAXLINE)) > 0)
    if (len > MINLENGTH) {
      
      printf("%s", line);
    
    }
  return 0;
}

/* getline: read a line into s, return length */
int getlin(char s[], int lim)
{
  int c, i;

  for (i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
    s[i] = c;
  if (c == '\n') {
    s[i] = c;
    ++i;
}
  s[i] = '\0';
  return i;
}








