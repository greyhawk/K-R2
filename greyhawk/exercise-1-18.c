#include <stdio.h>

#define MAXLINE 1000

int getliner(char line[], int maxline);
int trim(char line[], int length);

int main()
{
  int len;
  char line[MAXLINE];

  while((len = getliner(line, MAXLINE)) > 0) {
    int l;
    l = trim(line, len);
    printf("%d: %s", l, line);
  }
}

int getliner(char s[], int n)
{
  int c, i;

  for (i=0; i<n-1 && (c = getchar()) != EOF && c!='\n'; ++i)
    s[i] = c;
  if (c == '\n') {
    s[i] = c;
    i++;
  }
  s[i] = '\0';
  return i + 1;
}

int trim(char s[], int l)
{
  int c;
  c = s[l - 3];
  if (c == ' ' || c == '\t') {
    s[l - 3] = s[l - 2];
    s[l - 2] = s[l - 1];
    return trim(s, l - 1);
  }
  else {
    return l;
  }
}
