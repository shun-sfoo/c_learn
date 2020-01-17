#include <stdio.h>

void diamond(int n, char symbol);

int main(int argc, char* argv[])
{
  diamond(3, '+');
  diamond(5, '*');
  return 0;
}

void diamond(int n, char symbol)
{
  int mid = n / 2 + 1;
  int i, j, k;
  for (i = 1; i <= mid; i++) {
    for (j = i; j < mid; j++) {
      printf("%c\t", ' ');
    }
    for (k = 1; k < 2 * i; k++) {
      printf("%c\t", symbol);
    }
    printf("\n");
  }

  for (i = n - mid; i > 0; i--) {
    for (j = mid - i; j > 0; j--) {
      printf("%c\t", ' ');
    }

    for (k = 1; k < 2 * i; k++) {
      printf("%c\t", symbol);
    }
    printf("\n");
  }
}
