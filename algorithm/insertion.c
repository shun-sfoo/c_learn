#include "data.h"
#include <stdio.h>

void insertion(void);

int main(int argc, char *argv[]) {
  insertion();
  int i;
  for (i = 0; i < LEN; ++i) {
    printf("%d ", a[i]);
  }

  return 0;
}

void insertion(void) {
  int i, j, k;
  for (i = 1; i < LEN; ++i) {
    j = i - 1;
    k = a[i];
    while (j >= 0 && a[j] > k) {
      a[j + 1] = a[j];
      j--;
    }
    a[j + 1] = k;
  }
}
