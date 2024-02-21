#include <iostream>
using namespace std;

// init POD
struct PodStruct {
  uint64_t A;
  char B[256];
  bool C;
};

// fully featured class (sort of overloaded)
struct EchoMe {
  EchoMe() { printf("no argument\n"); }
  EchoMe(char a) { printf("char %c\n", a); }
  EchoMe(int a) { printf("int %i\n", a); }
  EchoMe(float a) { printf("float %f\n", a); }
};

int main(void) {
  // initializing a fundamental type to zero
  int a = 0;
  int b{};
  int c = {};
  int d;

  printf("a: %d, b: %d, c: %d, d: %d\n", a, b, c, d = 0);

  // initializing POD's
  PodStruct initPod1{};
  PodStruct initPod2 = {};
  PodStruct initPod3 = {57, "Say Hello", true};
  PodStruct initPod4 = {57, "Say Hello", true};
  PodStruct initPod5 = {57, "Say goodbye", false};

  printf("initPod1  A: %ld, B: %s, C: %d\n", initPod1.A, initPod1.B,
         initPod1.C);
  printf("initPod2  A: %ld, B: %s, C: %d\n", initPod2.A, initPod2.B,
         initPod2.C);
  printf("initPod3  A: %ld, B: %s, C: %d\n", initPod3.A, initPod3.B,
         initPod3.C);
  printf("initPod4  A: %ld, B: %s, C: %d\n", initPod4.A, initPod4.B,
         initPod4.C);
  printf("initPod5  A: %ld, B: %s, C: %d\n", initPod5.A, initPod5.B,
         initPod5.C);

  // initializing arrays
  int array1[]{1, 2, 3}; // initialized 3 elements: 1, 2, 3
  int array2[3]{};       // initialized 3 elements: 0, 0, 0
  int array3[3];         // uninitialized 3 elements: arbitrary elements

  cout << array1 << " " << array2 << " "
       << " " << array3 << endl;

  // fully featured class
  EchoMe e1;
  EchoMe e2{'A'};
  EchoMe e3{128};
  EchoMe e4{128.3335f};

  return 0;
}