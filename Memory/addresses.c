#include <stdio.h>

int main(void) {
  int n = 50;
  int *p = &n;
  char *s = "Hellow\n";
  printf("%p\n", p);
  printf("%p\n", s);
  printf("%p\n", &s);
}