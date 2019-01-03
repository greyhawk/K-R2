#include <stdio.h>

#define MAXLINE 1000

int getliner(char[], );

int getliner(char line[], int maxline)
{
  int c, i;
  for (i = 0; i < maxline - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    line[i] = c;
  if(c == '\n') {
    line[i] = c;
    i++;
  }
  line[i] = '\0';
  return i + 1;
}

void detab(char[], char[], int);
void detab(char[] source, char[] target, int length)
{
  int i;
  for(i=0; i< length - 2; i++) {
    
  }
}
