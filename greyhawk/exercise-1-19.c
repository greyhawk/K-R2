#include <stdio.h>

#define MAXLINE 1000

int getliner(char[], int);

int getliner(char line[], int maxline)
{
  int c, i;
  for (i=0; i<maxline-1 && (c = getchar()) != EOF && c!='\n'; ++i)
    line[i] = c;
  if(c == '\n') {
    line[i] = c;
    i++;
  }
  line[i] = '\0';
  return i + 1;
}

void reverse(char[], char[], int);
void reverse(char s[], char d[], int l)
{
  int i;
  for(i=0; i < l - 2; i++)
    d[l-i-3] = s[i];
  d[l-2] = '\n';
  d[l-1] = '\0';
}

int main()
{
  int l;
  char line[MAXLINE];

  while((l = getliner(line, MAXLINE)) > 0) {
    char d[l];
    reverse(line, d, l);
    printf("%s", d);
  }
}
