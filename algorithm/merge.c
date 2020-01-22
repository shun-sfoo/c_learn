#include <stdio.h>

#define LEN 8
int a[LEN] = {5, 2, 4, 7, 1, 3, 2, 6};

void merge(int start, int mid, int end) {
  int n1 = mid - start + 1;
  int n2 = end - mid;
  int i, j, k, left[n1], right[n2];
  for (i = 0; i < n1; i++)
    left[i] = a[start + i];

  for (j = 0; j < n2; j++)
    right[j] = a[mid + 1 + j];

  i = j = 0;
  k = start;
  while (i < n1 && j < n2) {
    if (left[i] < right[j])
      a[k++] = left[i++];
    else
      a[k++] = right[j++];
  }

  while (i < n1)
    a[k++] = left[i++];
  while (j < n2)
    a[k++] = right[j++];
}

void sort(int start, int end) {
  if (start < end) {
    int mid;
    mid = start + (end - start) / 2;
    sort(start, mid);
    sort(mid + 1, end);
    merge(start, mid, end);
  }
}

int main(int argc, char *argv[]) {
  int i;
  sort(0, LEN - 1);
  for (i = 0; i < LEN; i++)
    printf("%d,", a[i]);
  return 0;
}
