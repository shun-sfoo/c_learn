#include <stdio.h>

#define LEN 8
int a[LEN] = {5, 2, 4, 7, 1, 3, 2, 6};

int partition(int, int);
void sort(int, int);

int main(int argc, char *argv[]) {
  sort(0, LEN - 1);
  int i;
  for (i = 0; i < LEN; i++)
    printf("%d,", a[i]);

  return 0;
}

int partition(int start, int end) {
  int p;
  for (p = 0; p < LEN; p++)
    printf("%d,", a[p]);
  printf("\n");

  int i = start, j = end;
  int k = start;
  int key = a[k];
  int tmp;

  while (i < j) {
    while (i < end && a[i] <= key)
      i++;
    while (a[j] > key)
      j--;

    if (i < j) {
      tmp = a[i];
      a[i] = a[j];
      a[j] = tmp;
    }
  }

  tmp = a[k];
  a[k] = a[j];
  a[j] = tmp;

  return j;
}

void sort(int start, int end) {
  if (start < end) {
    int pivot = partition(start, end);
    printf("%d is the pivot\n", pivot);
    sort(start, pivot - 1);
    sort(pivot + 1, end);
  }
}
