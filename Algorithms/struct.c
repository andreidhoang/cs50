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

typedef struct {
  char name[100];
  char number[20];
} person;

person people[10];

int main(void) {
  strcpy(people[0].name, "Andrei");
  strcpy(people[0].number, "000");

  strcpy(people[1].name, "Elon");
  strcpy(people[1].number, "789");

  strcpy(people[2].name, "Dao");
  strcpy(people[2].number, "123");

  char buffer[100];
  char *name = get_string("Name: ", buffer, sizeof(buffer));

  for (int i; i < 3; i++) {
    if (strcmp(people[i].name, name) == 0) {
      printf("Found %s\n", people[i].number);
      return 0;
    }
    printf("Not found\n");  // Name not found
    return 1;
  }
}