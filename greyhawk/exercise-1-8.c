#include <stdio.h>

int main()
{
  long nc;
  int c;

  nc = 0;
  while((c = getchar()) != EOF) {
    if(c == '\n' || c == '\t' || c == ' ') {
      ++nc;
    }
  }
  printf("%ld\n", nc);
}
