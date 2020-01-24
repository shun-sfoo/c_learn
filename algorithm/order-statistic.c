#include <stdio.h>

#define LEN 8
int a[LEN] = {5, 2, 4, 7, 1, 3, 2, 6};

int partition(int, int);

int order_statistic(int, int, int);

int main(int argc, char *argv[]) {
  int i;
  for (i = 0; i < LEN; ++i)
    printf("the %dth value in array is %d\n", i, order_statistic(0, LEN - 1, i));

  return 0;
}

int partition(int start, int end) {
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

  return j;
}

int order_statistic(int start, int end, int k) {
  if (start <= end){
    int pivot = partition(start, end);
    if (k > pivot)
      return order_statistic(pivot + 1, end, k);
    else if (k < pivot)
      return order_statistic(start, pivot - 1, k);
    else 
      return a[pivot];
  }
}
