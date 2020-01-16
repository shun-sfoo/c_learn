#include <stdio.h>

int is_leap_year(int year);

int main(int argc, char* argv[])
{
  int year = 2004;

  if (is_leap_year(year)) {
    printf("this year %d is leap year", year);
  } else {
    printf("this year %d is not leap year", year);
  }
  return 0;
}

int is_leap_year(int year)
{
  if (year % 4 == 0 && year % 100 != 0) {
    return 1;
  } else if (year % 400 == 0) {
    return 1;
  } else {
    return 0;
  }
}
