#include <stdio.h>
#define LEN 3

char buf[LEN] = { 'g', 'd', 'b' };

char stack[512];
int top = 0;

void push(char c);
char pop(void);
int is_empty(void);
void print_backward(int);

int main(int argc, char* argv[])
{

  push('a');
  push('b');
  push('c');

  while (!is_empty())
    putchar(pop());
  putchar('\n');

  print_backward(0);
  putchar('\n');

  return 0;
}

void push(char c)
{
  stack[top++] = c;
}

char pop(void)
{
  return stack[--top];
}

int is_empty(void)
{
  return top == 0;
}

void print_backward(int pos)
{
  if (pos == LEN)
    return;
  print_backward(pos + 1);
  putchar(buf[pos]);
}
