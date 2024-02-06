#include <cstdio>

int main(void) {
  float fNumber = 9.075631;
  double dNumber = 9.075631;
  // format specifiers
  printf("=== Formatting Specifiers of '9.075631' ===\n");
  printf("Float specifiers: %e, %f, %g\n", fNumber, fNumber, fNumber);
  printf("Double specifiers: %le, %lf, %lg\n", dNumber, dNumber, dNumber);

  return 0;
}