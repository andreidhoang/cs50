#include <stdio.h>
#include <stdlib.h>

int get_int(char *prompt) {
  int n;
  printf("%s", prompt);
  scanf("%d", &n);
  return n;
}

typedef struct node {
  int number;
  struct node *next;
} node;

int main(void) {
  // memory for numbers
  node *list = NULL;  // point to the list address

  // build list
  for (int i = 0; i < 3; i++) {      // O(n)
    node *n = malloc(sizeof(node));  // n --> [Number|Next]
    if (n == NULL) {
      // TODO: free any memory already malloc'd
      return 1;
    }

    n->number = get_int("Number: ");
    n->next = list;

    // if list is empty
    if (list == NULL) {
      list = n;
    }
    // if number belongs at beginning of list
    else if (n->number < list->number) {
      n->next = list;
      list = n;
    }
    // if list has numbers already
    else {
      for (node *ptr = list; ptr != NULL; ptr = ptr->next) {
        if (ptr->next == NULL) {
          // append node
          ptr->next = n;
          break;
        }

        // if in middle of list
        if (n->number < ptr->next->number) {
          n->next = ptr->next;
          ptr->next = n;
          break;
        }
      }
    }
  }

  // time passes
  node *ptr = list;
  while (ptr != NULL) {  // O(n)
    printf("%i\n", ptr->number);
    ptr = ptr->next;
  }
  // time passes
  node *ptr = list;
  while (ptr != NULL) {  // O(n)
    node *next = ptr->next;
    free(ptr);
    ptr = ptr->next;
  }

  return 0;
}