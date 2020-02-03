#ifndef INSERTION_H
#define INSERTION_H

#include <stdio.h>

void insertion(int arr[], int n) {
  int i, j, k;
  for (i = 1; i < n; ++i) {
    j = i - 1;
    k = arr[i];
    while (j >= 0 && arr[j] > k) {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = k;
  }
}

#endif
