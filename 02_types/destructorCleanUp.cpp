#include <iostream>
using namespace std;

// usually call by the compiler
struct Earth {
  // a class destructor is indicated by a tilde
  ~Earth() { cout << "Making way for hyper-space bypass!" << endl; }
};

int main(void) {
  Earth say;
  return 0;
}