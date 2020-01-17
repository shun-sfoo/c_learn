#include <stdio.h>

void table();

int main(int argc, char* argv[])
{
  table();
  return 0;
}

void table()
{
  int i, j;
  for (i = 1; i <= 9; i++) {
    for (j = 1; j <= i; j++) {
      printf("%d", i * j);
      printf("\t");
    }
    printf("\n");
  }
}
