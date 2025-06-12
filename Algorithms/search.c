#include <stdio.h>

int get_int(char *prompt) {
  int n;
  printf("%s", prompt);
  scanf("%d", &n);
  return n;
}

int main(void) {
  int numbers[] = {20, 500, 10, 5, 100, 1, 50};

  int n = get_int("Number: ");

  for (int i; i < 7; i++) {
    if (numbers[i] == n) {
      printf("Found\n");
      return 0;
    }
  }
  printf("None\n");
  return 1;
}
