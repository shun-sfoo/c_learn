#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 20

int a[N];

void gen_random(int value)
{
  srand(time(NULL));
  int i;
  for (i = 0; i < N; ++i)
    a[i] = rand() % value;
}

int howmany(int num)
{
  int i, count = 0;
  for (i = 0; i < N; ++i)
    if (a[i] == num)
      count++;

  return count;
}

int main(int argc, char* argv[])
{

  gen_random(10);

  int i, j, histogram[10] = { 0 };

  for (i = 0; i < 10; ++i)
    printf("%d\t%d\n", i, howmany(i));

  printf("*************************\n");

  for (i = 0; i < N; i++)
    histogram[a[i]]++;

  for (i = 0; i < 10; i++)
    printf("%d\t", i);

  printf("\n\n");

  for (i = 0; i < 10; i++) {
    for (j = 0; j < 10; j++) {
      if (histogram[j] > 0) {
        printf("*\t");
        histogram[j]--;
      } else {
        printf(" \t");
      }
    }
    printf("\n");
  }

  return 0;
}
