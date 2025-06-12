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
  char *names[] = {"David", "John", "Elon", "Andrei"};
  char *numbers[] = {"123", "456", "789", "000"};

  char buffer[100];
  char *name = get_string("Name: ", buffer, sizeof(buffer));

  for (int i; i < 4; i++) {
    if (strcmp(names[i], name) == 0) {
      printf("Found %s\n", numbers[i]);
      return 0;
    }
    return 1;
  }
}
