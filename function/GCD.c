#include <stdio.h>

int gcd(int a, int b);

int main(int argc, char* argv[])
{
  int a = 42;
  int b = 24;

  printf("the gcd between %d and %d is %d", a, b, gcd(a, b));
  return 0;
}

int gcd(int a, int b)
{
  if (a % b == 0) {
    return b;
  } else {
    return gcd(b, a % b);
  }
}
