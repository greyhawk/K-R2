#include <stdio.h>

int main()
{
  int c;
  int nb;

  nb = 0;

  while((c = getchar()) != EOF) {
    if (c == ' ')
      ++nb;
    else
      nb = 0;
    if (nb < 2)
      putchar(c);
  }
}
