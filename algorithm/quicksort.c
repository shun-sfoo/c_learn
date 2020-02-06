#include "data.h"
#include <stdio.h>

int partition(int, int);
void sort(int, int);

int main(int argc, char *argv[]) {
  sort(0, LEN - 1);
  int i;
  for (i = 0; i < LEN; ++i) {
    printf("%d ", a[i]);
  }

  return 0;
}

int partition(int start, int end) {
  int i = start, j = end, k = a[start], tmp;

  while (i < j) {
    while (i < end && a[i] <= k)
      i++;

    while (a[j] > k)
      j--;

    if (i < j) {
      tmp  = a[i];
      a[i] = a[j];
      a[j] = tmp;
    }
  }

  tmp      = a[start];
  a[start] = a[j];
  a[j]     = tmp;
  return j;
}

void sort(int start, int end) {
  if (start < end) {
    int pivot = partition(start, end);
    sort(start, pivot - 1);
    sort(pivot + 1, end);
  }
}
