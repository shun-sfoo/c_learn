#include <math.h>
#include <stdio.h>

double myround(double x);

int main(int argc, char* argv[])
{

  double x1 = -3.51;
  double x2 = 4.49;
  printf("the round of %f is %f :", x1, myround(x1));
  printf("\n");
  printf("the round of %f is %f:", x2, myround(x2));
  return 0;
}

double myround(double x)
{
  if (ceil(x) < x + 0.5) {
    return ceil(x);
  } else {
    return floor(x);
  }
}
