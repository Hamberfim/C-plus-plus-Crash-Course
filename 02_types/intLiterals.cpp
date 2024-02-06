#include <cstdio> // c std io lib header file

// integer literals
int main(void) {

  // binary prefix 0b
  unsigned short a = 0b10101010; // 170
  printf("%hu\n", a);

  // octal prefix 0
  int b = 0123; // 83
  printf("%d\n", b);

  // hexidecimal prefix 0x
  unsigned long long c = 0xFFFFFFFFFFFFFFFF; // 18446744073709551615
  printf("%llu\n", c);

  return 0;
}