#include <stdio.h>

int main() {
  int x;
  int* y;

  x = 500;
  y = &x;

  printf("value of x: %d\n", x);
  printf("size of x: %lu\n", sizeof(x));
  printf("address of x: %p\n\n", (int*)&x);

  if (y != NULL) {
    printf("value of y: %p\n", y);
    printf("size of y: %lu\n", sizeof(y));
    printf("address of y: %p\n", (void*)&y);
  }
  
  return 0;
}
