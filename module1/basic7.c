#include <stdio.h>


int main() {
  int i;
  char c;
  float f;

  printf("char: %lu\n", sizeof(c));
  printf("int: %lu\n", sizeof(i));
  printf("float: %lu\n", sizeof(f));

  printf("long: %lu\n", sizeof(long int));
  printf("double: %lu\n", sizeof(double));

  return 0;
}
