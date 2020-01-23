#include <stdio.h>

#define LEN 5
int a[LEN] = {10, 5, 2, 4, 7};

void insertion(void) {
  int i, j, key;
  for (i = 1; i < LEN; i++) {
    j = i - 1;
    key = a[i];
    while (j >= 0 && a[j] > key) {
      a[j + 1] = a[j];
      j--;
    }

    a[j + 1] = key;
  }
}

int main(int argc, char *argv[]) {
  int i;
  insertion();
  for (i = 0; i < LEN; i++)
    printf("%d,", a[i]);

  return 0;
}
