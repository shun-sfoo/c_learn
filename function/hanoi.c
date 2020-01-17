#include <stdio.h>

void hanoi(int num, char start, char trans, char target);

int main(int argc, char* argv[])
{
  hanoi(4, 'a', 'b', 'c');
  return 0;
}

void hanoi(int num, char start, char trans, char target)
{
  if (num == 1) {
    printf("%c -> %c", start, target);
    printf("\n");
    return;
  } else {
    hanoi((num - 1), start, target, trans);
    printf("%c -> %c", start, target);
    printf("\n");
    hanoi((num - 1), trans, start, target);
  }
}
