#include <stdio.h>

int fib(int n);

int main(int argc, char* argv[])
{
  int n = 6;
  printf("the %dth in fib array is %d", n, fib(n - 1));
  return 0;
}

int fib(int n)
{
  if (n == 0 || n == 1) {
    return 1;
  } else {
    return fib(n - 1) + fib(n - 2);
  }
}
