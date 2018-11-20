#include <stdio.h>

#define IN 0
#define OUT 1

int main()
{
  int c;
  int state;

  state = IN;
  while((c = getchar()) != EOF) {
    if (c == ' ')
      state = OUT;
    else
      state = IN;
    if (state == IN)
      putchar(c);
    else
      printf("\n");
  }
}
