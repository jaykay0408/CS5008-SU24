#include <stdio.h>

int main() {
  int i;
  char c;

  printf("c's address: %p -- %lu bytes\n", (char*)&c, sizeof(c));
  printf("i's address: %p -- %lud bytes\n", (int*)&i, sizeof(i));

  return 0;

}
