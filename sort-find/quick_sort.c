#include <stdio.h>

#define LEN 8

int a[LEN] = { 5, 2, 4, 7, 1, 3, 2, 6 };

int partition(int, int);
void quicksort(int, int);

int main(int argc, char* argv[])
{
  quicksort(0, LEN - 1);
  printf("quicksort  %d %d %d %d %d %d %d %d\n",
      a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7]);
  return 0;
}

int partition(int start, int end)
{

  int i, j, k, tmp;
  i = start; 
  j = end;
  k = start;
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

  tmp = a[k];
  a[k] = a[j];
  a[j] = a[k];
  return j;
}

void quicksort(int start, int end)
{
  int mid;
  if (end > start) {
    mid = partition(start, end);
    quicksort(start, mid);
    quicksort(mid + 1, end);
  }
}
