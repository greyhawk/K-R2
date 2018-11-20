#include <stdio.h>

#define MINSIZE 80
#define MAXLINE 1000

int getliner(char line[], int maxline);

int main()
{
  int len;
  char line[MAXLINE];

  while((len = getliner(line, MAXLINE)) > 0) {
    if (len > 80)
      printf("%s", line);
  }
}

int getliner(char s[], int n)
{
  int c, i;

  for (i=0; i<n-1 && (c = getchar()) != EOF && c!= '\n'; ++i)
    s[i] = c;
  if (c == '\n') {
    s[i] = c;
    i++;
  }
  s[i] = '\0';
  return i;
}
