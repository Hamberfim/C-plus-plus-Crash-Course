#include <iostream>

// build the alphabet from the ASCII table

int main(void) {
  char lc_alphabet[27];
  char uc_alphabet[27];

  for (int i = 0; i < 26; i++) {
    lc_alphabet[i] = i + 97;
  }
  lc_alphabet[26] = 0;

  for (int i = 0; i < 26; i++) {
    uc_alphabet[i] = i + 65;
  }
  uc_alphabet[26] = 0;

  printf("%s\n", lc_alphabet);
  printf("%s\n", uc_alphabet);

  return 0;
}