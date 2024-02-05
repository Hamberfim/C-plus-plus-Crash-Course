#include <iostream>
using namespace std;

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
  int my_num;
  cout << "Enter a number to find it's absolute value: " << endl;
  cin >> my_num;

  cout << "The absolute value of " << my_num << " is " << absolute_value(my_num)
       << endl;
  return 0;
}