#include <stdio.h>

#define LEN 8
int a[LEN] = { 5, 2, 4, 7, 1, 3, 2, 6 };

int partition(int, int);

void sort(int, int);

int main(int argc, char* argv[])
{
  int start = 0, end = LEN - 1, i;
  sort(start, end);

  for (i = 0; i < LEN; ++i)
    printf("%d,", a[i]);

  return 0;
}

int partition(int start, int end)
{
  int i = start, j = end;
  int k = a[start], tmp;
  while (i < j) {
    while (i < end && a[i] <= k)
      i++;
    while (a[j] > k)
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

void sort(int start, int end)
{
  if (end > start) {
    int pivot = partition(start, end);
    sort(start, pivot - 1);
    sort(pivot + 1, end);
  }
}
