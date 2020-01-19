#include <stdio.h>

#define LEN 8
int a[LEN] = { 5, 2, 4, 7, 1, 3, 2, 6 };

int order_statistic(int, int, int);

int partition(int, int);

int main(int argc, char* argv[])
{
  int start = 0;
  int end = LEN - 1;

  int i;
  for (i = 0; i < LEN; ++i) {
    printf("the %dst value in array is %d\n", i, order_statistic(start, end, i));
  }
  return 0;
}

int order_statistic(int start, int end, int k)
{
  if (end >= start) {
    int pivot = partition(start, end);
    if (k == pivot)
      return a[k];
    else if (k > pivot)
      return order_statistic(pivot + 1, end, k);
    else
      return order_statistic(start, pivot - 1, k);
  }
}

int partition(int start, int end)
{
  int i = start;
  int j = end;
  int k = start;
  int tmp;

  while (i < j) {
    while (a[i] <= a[k] && i < end)
      i++;
    while (a[j] > a[k])
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
