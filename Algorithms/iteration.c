#include <stdio.h>
void draw(int n);

int get_int(char *prompt) {
  int n;
  printf("%s", prompt);
  scanf("%d", &n);
  return n;
}

int main(void) {
  int height = get_int("Height: ");
  draw(height);
}

void draw(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < i + 1; j++) {
      printf("#");
    }
    printf("\n");
  }
}