#include <cstdio> // c std io lib for printf/scanf - instead of <iostream> cout/cin

// narrow chars: char, signed char, unsigned char.
// wide chars: char16_t, char32_t, wchar_t

int main(void) {
  // narrow
  char letterM = 'M';

  // wide
  wchar_t letterZ = 'Z';

  printf("%c %c %c, %lc\n", letterM, letterM, letterM, letterZ);

  // using int %d for the boolean specifier
  bool b1 = true;
  bool b2 = false;

  printf("b1: %d, b2: %d\n", b1, b2);
  printf(((b1) ? "b1 is True\n" : "b1 is false\n"));
  printf(((b2) ? "b2 is True\n" : "b2 is false\n"));

  printf(((0 > 1) ? "0 > 1 True\n" : "0 > 1 false\n"));

  return 0;
}