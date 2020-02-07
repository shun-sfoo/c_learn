#ifndef DATA_H
#define DATA_H
#define LEN 20
int a[LEN] = {17, 9,  20, 14, 19, 10, 10, 14, 26, 15,
              5,  11, 2,  21, 19, 2,  30, 16, 30, 20};

int is_sorted() {
  int i;
  for (i = 0; i < LEN - 1; i++) {
    if (a[i] > a[i + 1])
      return 0;
  }
  return 1;
}

#endif
