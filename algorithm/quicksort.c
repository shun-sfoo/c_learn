#include <stdio.h>

#define LEN 8
int a[LEN] = {5, 2, 4, 7, 1, 3, 2, 6};

int partition(int start, int end) {
  int i = start, j = end, pivot = start, tmp;

  while (i < j) {
    while (a[i] <= a[pivot] && i < end)
      i++;

    while (a[j] > a[pivot])
      j--;

    if (i < j) {
      tmp = a[i];
      a[i] = a[j];
      a[j] = tmp;
    }
  }

  tmp = a[start];
  a[start] = a[j];
  a[j] = tmp;

  return j;
}

int quicksort(int start, int end) {
  int pivot;
  if (start <= end) {
    pivot = partition(start, end);
    quicksort(start, pivot - 1);
    quicksort(pivot + 1, end);
  }
}

int main(int argc, char *argv[]) {
  int i;
  quicksort(0, LEN - 1);
  for (i = 0; i < LEN; i++)
    printf("%d,", a[i]);
  return 0;
}
