#include <stdio.h>

#define N 6

int arr[N] = { 1, 3, 2, 6, 4, 5 };

void merge(int, int, int);
void sort(int, int);

int main(int argc, char* argv[])
{
  sort(0, N - 1);
  printf("merge  %d %d %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3], arr[4],
      arr[5]);
  return 0;
}

void merge(int start, int mid, int end)
{
  int n1 = mid - start + 1;
  int n2 = end - mid;

  int left[n1], right[n2];
  int i, j, k;

  for (i = 0; i < n1; i++)
    left[i] = arr[start + i];

  for (j = 0; j < n2; j++)
    right[j] = arr[mid + 1 + j];

  i = j = 0;
  k = start;
  while (i < n1 && j < n2) {
    if (left[i] < right[j])
      arr[k++] = left[i++];
    else
      arr[k++] = right[j++];
  }

  while (i < n1)
    arr[k++] = left[i++];
  while (j < n2)
    arr[k++] = right[j++];
}

void sort(int start, int end)
{
  int mid;
  if (end > start) {
    mid = (end + start) / 2;
    sort(start, mid);
    sort(mid + 1, end);
    merge(start, mid, end);
  }
}
