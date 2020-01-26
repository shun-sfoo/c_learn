#include <stdio.h>

int main(int argc, char *argv[]) {
  int i = 0xcffffff3;
  printf("%x\n", 0xcffffff3 >> 2);
  printf("%x\n", i >> 2);
  int a[12];
  printf("%d\n", sizeof a / sizeof a[0]);
  return 0;
}
