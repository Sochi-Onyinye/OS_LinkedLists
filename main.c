#include <stdio.h>
#include "list.h"


int main() {
  printf("The Tests for linked list implementation\n");
  list_t* l = list_alloc();
  printf("Length of list should be 0, it is %d\n", list_length(l));
  list_add_to_front(l, 1);
  printf("List should be 1, it is printed below\n");
  list_print(l);
  list_add_to_front(l, 7);
  printf("List should be 1 -> 7, it is printed below\n");
  list_print(l);
  list_add_to_back(l, 0);
  printf("List should be 0 -> 1 -> 7, it is printed below\n");
  list_print(l);
  list_add_to_back(l, -6);
  printf("List should be -6 -> 0 -> 1 -> 7, it is printed below\n");
  list_print(l);
  list_add_at_index(l, -2, 0);
  printf("List should be -2 -> -6 -> 0 -> 1 -> 7, it is printed below\n");
  list_print(l);
  list_add_at_index(l, -10, 3);
  printf("List should be -2 -> -6 -> 0 -> -10 -> 1 -> 7, it is printed below\n");
  list_print(l);
  list_remove_from_back(l);
  printf("List should be -6 -> 0 -> -10 -> 1 -> 7, it is printed below\n");
  list_print(l);
  list_remove_from_front(l);
  printf("List should be -6 -> 0 -> -10 -> 1, it is printed below\n");
  list_print(l);
  list_remove_at_index(l, 2);
  printf("List should be -6 -> 0 -> 1, it is printed below\n");
  list_print(l);
  printf("-6 is in list should be 1 (true), it is %d\n", list_is_in(l, -6));
  printf("-10 is in list should be 0 (false), it is %d\n", list_is_in(l, -10));
  printf("Element at index 2 should be 1, it is %d\n", list_get_elem_at(l, 2));
  printf("Index of 0 should be 1, it is %d\n", list_get_index_of(l, 0));
  printf("Index of -5 should be -1 (doesn't exist), it is %d\n", list_get_index_of(l, -5));
  list_free(l);
  printf("Freed list. Access to list after this point will yield a segmentation fault\n");
  return 0;
}