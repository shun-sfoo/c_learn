#ifndef HELPER_H
#define HELPER_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int is_sorted(int a[], int n) {
  int i;
  for (i = 0; i < n - 1; i++) {
    if (a[i] > a[i + 1])
      return 0;
  }
  return 1;
}

int * generator_random_array(int n, int range_l, int range_r) {
  int arr[n];
  srand(time(NULL));

  int i;
  for (i = 0; i < n; i++)
    arr[i] = range_l + rand() % (range_r - range_l + 1);
  return arr;
}

int * copy_array(int a[], int n) {
  int arr[n];
  int i;
  for (i = 0; i < n; ++i)
    arr[i] = a[i];

  return arr;
}

void print_array(int a[], int n) {
  int i;
  for (i = 0; i < n; ++i)
    printf("%d ", a[i]);
}

#endif
