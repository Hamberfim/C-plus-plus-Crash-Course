#include <cstdio>

// exercise 1-1
int absolute_value(int number) {
  int result;

  if (number < 0) {
    result = number * -1;
  } else {
    result = number;
  }

  return result;
}

int main(void) {
  int my_num = -10;

  printf("The absolute value of %d is %d.\n", my_num, absolute_value(my_num));
  return 0;
}