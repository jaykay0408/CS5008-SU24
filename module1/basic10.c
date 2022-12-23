#include <stdio.h>

int main () {
  // first create an integer
  int x = 5;

  // then create a pointer to the integer
  int* px = &x;

  // show that value of x and value px points to are the same
  printf("x = %d\n",x);
  printf("px points to variable with value: %d\n", *px);

  // change x via px
  *px = 100;

  // show that value of x and value px points to are the same
  // complete ???
  printf("\n");
  printf("x = %d\n",x);
  printf("px points to variable with value: %d\n", ???);
  

  return 0;

}
