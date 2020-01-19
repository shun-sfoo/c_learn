#include <stdio.h>

#define N 6
int arr[N] = { 1, 3, 2, 6, 4, 5 };

void insertion(void);

int main(int argc, char* argv[])
{
  insertion();
  printf("%d, %d, %d, %d, %d, %d\n",
      arr[0], arr[1], arr[2], arr[3], arr[4], arr[5]);
  return 0;
}

void insertion(void)
{
  int i, j, key;
  for (i = 1; i < N; i++) {
    key = arr[i];
    j = i - 1;
    while (j >= 0 && arr[j] > key) {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = key;
  }
}
