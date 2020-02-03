#ifndef MERGE_H
#define MERGE_H

void merge(int a[], int start, int mid, int end) {
  int n1 = mid - start + 1;
  int n2 = end - mid;

  int left[n1], right[n2], i, j, k;
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

void sort(int a[], int start, int end) {
  if (start < end) {
    int mid = start + (end - start) / 2;
    sort(a, start, mid);
    sort(a, mid + 1, end);
    merge(a, start, mid, end);
  }
}
#endif
