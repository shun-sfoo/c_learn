#include "quicksort.h"
#include <stdio.h>

#define LEN 8

int a[LEN] = {1, 3, 2, 6, 4, 5, 9, 6};
int main(int argc, char *argv[]) {

  /*insertion(a, LEN);*/
  sort(a, 0, LEN - 1);
  int i;
  for (i = 0; i < LEN; i++) {
    printf("%d,", a[i]);
  }
  return 0;
}
