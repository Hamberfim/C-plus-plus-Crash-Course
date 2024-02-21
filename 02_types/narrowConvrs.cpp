#include <iostream>
using namespace std;

int main(void) {
  // brace initializations generate warnings when
  // implicit narrowing conversions are encountered
  float a{1};
  float b{2};

  int narrowed_result(a / b); // bad narrowing conversion
  cout << narrowed_result << endl;

  /* error: narrowing conversion of ‘(a / b)’ from ‘float’ to ‘int’
   [-Werror=narrowing] 12 |   int result{a / b}; // warning generated */
  // int result{a / b}; // result 0.5 truncated to 0 requires an explicit cast
  // cout << result << endl;

  return 0;
}