#include <cstdio> // c std io lib for printf/scanf - instead of <iostream> cout/cin

// narrow chars: char, signed char, unsigned char.
// wide chars: char16_t, char32_t, wchar_t

int main(void) {
  // narrow
  char letterM = 'M';

  // wide
  wchar_t letterZ = 'Z';

  printf("%c %c %c, %lc\n", letterM, letterM, letterM, letterZ);

  return 0;
}