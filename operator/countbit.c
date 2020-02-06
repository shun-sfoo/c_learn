#include <stdio.h>

int countbit(int);

int main(int argc, char *argv[]) {
  int i = 11;
  printf("the num %d have %d '1'", i, countbit(i));
  return 0;
}

int countbit(int num) {
  int i = 31, count = 0;

  for (; i > -1; i--) {
    if ((num >> i) & 1 == 1)
      ++count;
  }

  return count;
}
