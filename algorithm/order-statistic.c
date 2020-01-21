#include <stdio.h>

#define LEN 9
int a[LEN] = {5, 2, 4, 7, 1, 3, 2, 6, 9};

int partition(int start, int end) {
  int i = start, j = end, pivot = start, tmp;
  while (i < j) {
    while (i < end && a[i] <= a[pivot])
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

int order_statistic(int start, int end, int k) {
  if (end >= start) {
    int pivot = partition(start, end);
    if (k < pivot)
      order_statistic(start, pivot - 1, k);
    else if (k > pivot)
      order_statistic(pivot + 1, end, k);
    else
      return a[pivot];
  }
}

int main(int argc, char *argv[]) {
  int i;
  for (i = 0; i < LEN; ++i)
    printf("the %dst value in array is %d\n", i, order_statistic(0, LEN - 1, i));
  return 0;
}
