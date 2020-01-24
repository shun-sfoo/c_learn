#include <stdio.h>

#define LEN 8
int a[LEN] = {5, 2, 4, 7, 1, 3, 2, 6};

int partition(int, int);
void quicksort(int, int);

int main(int argc, char *argv[]) {
  int i;
  quicksort(0, LEN - 1);
  for (i = 0; i < LEN; i++)
    printf("%d,", a[i]);

  return 0;
}

int parition(int start, int end) {
  int i = start, j = end;
  int k = start, tmp;
  while (i < j) {
    while (i < end && a[i] <= a[k])
      i++;
    while (a[j] > a[k])
      j--;

    if (i < j) {
      tmp = a[i];
      a[i] = a[j];
      a[j] = tmp;
    }
  }

  tmp = a[k];
  a[k] = a[j];
  a[j] = tmp;
}

void quicksort(int start, int end) {
  if (start < end) {
    int mid;
    mid = parition(start, end);
    quicksort(start, mid - 1);
    quicksort(mid + 1, end);
  }
}
