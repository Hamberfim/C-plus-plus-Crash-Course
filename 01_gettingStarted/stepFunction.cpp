#include <cstdio> // c stdio.h

int step_function(int number) {
  int result = 0;
  if (number < 0) {
    result = -1;
  } else if (number > 0) {
    result = 1;
  }
  return result;
}

int main(void) {

  int num1 = 42;
  int result1 = step_function(num1);

  int num2 = 0;
  int result2 = step_function(num2);

  int num3 = -32767;
  int result3 = step_function(num3);

  printf("Num1: %d, Step: %d\n", num1, result1);
  printf("Num2: %d, Step: %d\n", num2, result2);
  printf("Num3: %d, Step: %d\n", num3, result3);

  return 0;
}