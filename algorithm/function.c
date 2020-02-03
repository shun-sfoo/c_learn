#include "function.h"
#include "data.h"

int is_sorted(int a[]) {
  int i;
  for (i = 0; i < LEN - 1; i++) {
    if(a[i] > a[i + 1])
      return 0;
  }
  return 1;
}


