#include <stdio.h>

void say_hello(const char *str) { printf("Hello %s\n", str); }

int main(int argc, char *argv[]) {
  void (*f)(const char *) = say_hello;
  f("Guys");
  return 0;
}
