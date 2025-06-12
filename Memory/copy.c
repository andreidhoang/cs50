#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  char *s = "andrei";
  char *t = malloc(strlen(s) + 1);  // Allocate memory for t

  strcpy(t, s);

  t[0] = toupper(t[0]);

  printf("s: %s\n", s);
  printf("t: %s\n", t);

  free(t);  // Free the allocated memory
  return 0;
}