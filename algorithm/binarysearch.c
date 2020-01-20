#include <assert.h>
#include <stdio.h>

#define LEN 8
int a[LEN] = { 1, 2, 2, 2, 5, 6, 8, 9 };

int binarysearch(int);

int is_sorted(void);

int mustbe(int, int, int);

int main(int argc, char* argv[])
{
  printf("%d\n", binarysearch(9));
  return 0;
}

int is_sorted(void)
{
  int i;
  for (i = 0; i < LEN - 1; ++i)
    if (a[i + 1] < a[i])
      return 0;

  return 1;
}

int contains(int n)
{
  int i;
  for (i = 0; i < LEN; ++i)
    if (a[i] == n)
      return 1;

  return 0;
}

int mustbe(int start, int end, int number)
{
  int i;
  for (i = 0; i < start; ++i)
    if (a[i] == number)
      return 0;

  for (i = end + 1; i < LEN; ++i)
    if (a[i] == number)
      return 0;

  return 1;
}

int binarysearch(int number)
{
  int start = 0, end = LEN - 1, mid;

  assert(is_sorted());
  while (start <= end) {
    assert(mustbe(start, end, number));
    mid = start + (end - start) / 2;
    if (a[mid] < number)
      start = mid + 1;
    else if (a[mid] > number)
      end = mid - 1;
    else {
      assert(mid >= start && mid <= end && a[mid] == number);
      return mid;
    }
  }

  assert(!contains(number));
  return -1;
}
