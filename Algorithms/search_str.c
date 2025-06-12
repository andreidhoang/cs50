#include <stdio.h>
#include <string.h>

char *get_string(char *prompt, char *buffer, int size) {
  printf("%s", prompt);
  if (fgets(buffer, size, stdin) != NULL) {
    // Remove trailing newline if present
    size_t len = strlen(buffer);
    if (len > 0 && buffer[len - 1] == '\n') {
      buffer[len - 1] = '\0';
    }
    return buffer;
  }
  return NULL;
}

int main(void) {
  char *strings[] = {"battleship", "boot", "cannon", "iron"};

  char buffer[100];
  char *s = get_string("String: ", buffer, sizeof(buffer));

  for (int i; i < 4; i++) {
    if (strcmp(strings[i], s)) {
      printf("Found\n");
      return 0;
    }
  }
  printf("None\n");
  return 1;
}
