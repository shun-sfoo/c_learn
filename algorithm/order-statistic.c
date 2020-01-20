#include <stdio.h>

#define LEN 9
int a[LEN] = { 5, 2, 4, 7, 1, 3, 2, 6, 9 };

int order_statistic(int, int, int);
int partition(int start, int end);

int main(int argc, char* argv[])
{
  int i;
  for (i = 0; i < LEN; ++i)
    printf("the %dst value in array is %d\n", i, order_statistic(0, LEN - 1, i));

  return 0;
}

int order_statistic(int start, int end, int k)
{
  if (start <= end) {
    int pivot = partition(start, end);
    if (k > pivot)
      order_statistic(pivot + 1, end, k);
    else if (k < pivot)
      order_statistic(start, pivot - 1, k);
    else
      return a[pivot];
  }
}

int partition(int start, int end)
{
  int i = start, j = end;
  int k = a[start], tmp;
  while (i < j) {
    while (a[i] <= k && i < end)
      i++;
    while (a[j] > k)
      j--;

    if (i < j) {
      tmp = a[i];
      a[i] = a[j];
      a[j] = tmp;
    }

    tmp = a[start];
    a[start] = a[j];
    a[j] = tmp;

    return j;
  }
}
