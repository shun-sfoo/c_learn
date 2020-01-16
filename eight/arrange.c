#include <stdio.h>

#define N 3

int a[N] = { 1, 2, 3 };

void arrange(int);
void swap(int, int);
void print(void);

int main(int argc, char* argv[])
{
  arrange(0);
  return 0;
}

void swap(int i, int j)
{
  int tmp;
  tmp = a[j];
  a[j] = a[i];
  a[i] = tmp;
}

void print(void)
{
  int i;
  for (i = 0; i < N; ++i) {
    printf("%d", a[i]);
  }
  printf("\n");
}

void arrange(int index)
{
  int i;
  if (index == N - 1) {
    print();
    return;
  }

  for (i = index; i < N; i++) {
    swap(i, index);
    arrange(index + 1);
    swap(i, index);
  }
}
