#include <stdio.h>
#define MAXLINE 1000

int getliner(char line[], int maxline);
void copy(char to[], char from[]);

int main()
{
  int len;
  int max;
  char line[MAXLINE];
  char longest[MAXLINE];

  max = 0;
  while((len = getliner(line, MAXLINE)) > 0)
    if (len > max) {
      max = len;
      copy(longest, line);
    }
  if (max > 0) {
    printf("%s", longest);
  }
}

int getliner(char s[], int n)
{
  int c, i;

  for(i=0; i<n-1 && (c = getchar()) != EOF && c != '\n'; i++)
    s[i] = c;
  if(c == '\n') {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
  return i;
}

void copy(char to[], char from[])
{
  int i;

  i = 0;
  while((to[i] = from[i]) != '\0')
    ++i;

}
