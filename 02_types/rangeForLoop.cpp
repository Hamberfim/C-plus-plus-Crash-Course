#include <iostream>

int main(void) {
  unsigned long long maximum1 = 0;
  unsigned long long maximum2 = 0;

  unsigned long values[] = {10, 34, 12, 50, 34};

  // to find the number of elements(length) in  an array
  // use sizeof(array) on the array and divide by the sizeof(data-type)
  size_t num_elements = sizeof(values) / sizeof(unsigned long);
  printf("Array length: %zd\n", num_elements);

  // for loop
  for (size_t i = 0; i < num_elements; i++) {
    if (values[i] > maximum1) {
      maximum1 = values[i];
    }
  }
  printf("maximum1: %lld\n", maximum1);

  // for range-loop
  for (unsigned value : values) {
    if (value > maximum2) {
      maximum2 = value;
    }
  }
  printf("maximum2: %lld\n", maximum2);

  return 0;
}