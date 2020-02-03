#ifndef QUICKSORT_H
#define QUICKSORT_H

int partition(int a[], int start, int end) {
  int i = start, j = end, k = a[start], tmp;

  while (i < j) {
    while (i < end && a[i] <= k)
      i++;
    while (a[j] > k)
      j--;

    if (i < j) {
      tmp  = a[i];
      a[i] = a[j];
      a[j] = tmp;
    }
  }

  tmp      = a[start];
  a[start] = a[j];
  a[j]     = tmp;
  return j;
}

void sort(int a[], int start, int end) {
  if (start < end) {
    int pivot = partition(a, start, end);
    sort(a, start, pivot - 1);
    sort(a, pivot + 1, end);
  }
}

#endif
